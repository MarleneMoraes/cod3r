package br.ce.wcaquino.servicos;

import static br.ce.wcaquino.utils.DataUtils.isMesmaData;
import static br.ce.wcaquino.utils.DataUtils.obterDataComDiferencaDias;
import static org.hamcrest.CoreMatchers.equalTo;
import static org.hamcrest.CoreMatchers.is;
import java.util.Date;

import org.junit.Assert;
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
	public void test() throws Exception {
		Usuario usuario = new Usuario("Maria");
		Filme filme = new Filme("Grease", 2, 5.50);

		Locacao locacao = servico.alugarFilme(usuario, filme);

		error.checkThat(locacao.getValor(), is(equalTo(5.50)));
		error.checkThat(isMesmaData(locacao.getDataLocacao(), new Date()), is(true));
		error.checkThat(isMesmaData(locacao.getDataRetorno(), obterDataComDiferencaDias(1)), is(true));
	}
	
	@Test(expected=FilmesSemEstoqueException.class) 
	public void testLocacao_filmeSemEstoque() throws Exception {
		Usuario usuario = new Usuario("Joana");
		Filme filme = new Filme("Grease", 0, 5.50);

		servico.alugarFilme(usuario, filme);
		
	}
	
	@Test
	public void testLocacao_usuarioVazio() throws FilmesSemEstoqueException {
		Filme filme = new Filme("Grease", 2, 5.50);

		try {
			servico.alugarFilme(null, filme);
			Assert.fail();
		} catch (LocadoraException e) {
			Assert.assertThat(e.getMessage(), is("Usuario vazio"));
		}
		
		System.out.println("Forma robusta");
	}
	
	@Test
	public void testLocacao_filmeVazio() throws FilmesSemEstoqueException, LocadoraException {
		Usuario usuario = new Usuario("Maria");

		exception.expect(LocadoraException.class);
		exception.expectMessage("Filme vazio");

		servico.alugarFilme(usuario, null);
		
		System.out.println("Forma nova");
	}
	
}