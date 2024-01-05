package br.ce.wcaquino.servicos;

import static br.ce.wcaquino.matchers.MatchersProprios.caiEm;
import static br.ce.wcaquino.matchers.MatchersProprios.caiNumaSegunda;
import static br.ce.wcaquino.utils.DataUtils.isMesmaData;
import static br.ce.wcaquino.utils.DataUtils.obterDataComDiferencaDias;
import static org.hamcrest.CoreMatchers.equalTo;
import static org.hamcrest.CoreMatchers.is;
import static org.junit.Assert.assertThat;

import java.util.Arrays;
import java.util.Calendar;
import java.util.Date;
import java.util.List;

import org.junit.Assert;
import org.junit.Assume;
import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.ErrorCollector;
import org.junit.rules.ExpectedException;

import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;
import br.ce.wcaquino.exceptions.FilmesSemEstoqueException;
import br.ce.wcaquino.exceptions.LocadoraException;
import br.ce.wcaquino.utils.DataUtils;

public class LocacaoServiceTest {
	private LocacaoService servico;

	@Rule
	public ErrorCollector error = new ErrorCollector();

	@Rule
	public ExpectedException exception = ExpectedException.none();

	@Before
	public void setup() {
		servico = new LocacaoService();
	}

	@Test
	public void deveAlugarFilmeComSucesso() throws Exception {
		Assume.assumeFalse(DataUtils.verificarDiaSemana(new Date(), Calendar.SATURDAY));

		Usuario usuario = new Usuario("Maria");

		List<Filme> filmes = Arrays.asList(new Filme("Grease", 2, 5.50));

		Locacao locacao = servico.alugarFilme(usuario, filmes);

		error.checkThat(locacao.getValor(), is(equalTo(5.50)));
		error.checkThat(isMesmaData(locacao.getDataLocacao(), new Date()), is(true));
		error.checkThat(isMesmaData(locacao.getDataRetorno(), obterDataComDiferencaDias(1)), is(true));
	}

	@Test(expected = FilmesSemEstoqueException.class)
	public void deveLancarExcecaoAlugarFilmeSemEstoque() throws Exception {
		Usuario usuario = new Usuario("Joana");
		List<Filme> filmes = Arrays.asList(new Filme("Grease", 0, 5.50));

		servico.alugarFilme(usuario, filmes);
	}

	@Test
	public void naodeveAlugarFilmeSemUsuario() throws FilmesSemEstoqueException {
		List<Filme> filmes = Arrays.asList(new Filme("Grease", 2, 5.50));

		try {
			servico.alugarFilme(null, filmes);
			Assert.fail();
		} catch (LocadoraException e) {
			Assert.assertThat(e.getMessage(), is("Usuario vazio"));
		}
	}

	@Test
	public void naodeveAlugarFilmeSemFilme() throws FilmesSemEstoqueException, LocadoraException {
		Usuario usuario = new Usuario("Maria");

		exception.expect(LocadoraException.class);
		exception.expectMessage("Filme vazio");

		servico.alugarFilme(usuario, null);

		System.out.println("Forma nova");
	}

	@Test
	public void naoDeveDevolverFilmeNoDomingo() throws FilmesSemEstoqueException, LocadoraException {
		Assume.assumeTrue(DataUtils.verificarDiaSemana(new Date(), Calendar.SATURDAY));

		Usuario usuario = new Usuario("Maria");

		List<Filme> filmes = Arrays.asList(new Filme("Grease", 2, 5.50));

		Locacao locacao = servico.alugarFilme(usuario, filmes);

		// assertThat(locacao.getDataRetorno(), new
		// DiaDaSemanaMatcher(Calendar.MONDAY));
		assertThat(locacao.getDataRetorno(), caiEm(Calendar.SUNDAY));
		assertThat(locacao.getDataRetorno(), caiNumaSegunda());
	}
}