package br.ce.wcaquino.servicos;

import static br.ce.wcaquino.builders.UsuarioBuilder.criarUsuario;
import static org.hamcrest.CoreMatchers.is;
import static org.junit.Assert.assertThat;

import java.util.Arrays;
import java.util.Collection;
import java.util.List;

import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameter;
import org.junit.runners.Parameterized.Parameters;

import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;
import br.ce.wcaquino.exceptions.FilmesSemEstoqueException;
import br.ce.wcaquino.exceptions.LocadoraException;

@RunWith(Parameterized.class)
public class CalculoValorLocacaoTest {

	private LocacaoService servico;

	@Parameter
	public List<Filme> filmes;

	@Parameter(value = 1)
	public Double valorLocacao;
	
	@Parameter(value = 2)
	public String cenario;

	@Before
	public void setup() {
		servico = new LocacaoService();
	}

	private static Filme grease = new Filme("Grease", 2, 4.00);
	private static Filme footloose = new Filme("Footloose", 3, 4.00);
	private static Filme dirtyDancing = new Filme("Dirty Dancing", 1, 4.00);
	private static Filme vidaEBela = new Filme("A Vida E Bela", 1, 4.00);
	private static Filme ameliePoulain = new Filme("O Fabuloso Destino de Amelie Poulain", 2, 4.00);
	private static Filme brokebackMountain = new Filme("O Segredo de Brokeback Mountain", 5, 4.00);

	@Parameters(name = "Teste {2}")
	public static Collection<Object[]> getParameters() {
		return Arrays.asList(new Object[][] { 
			{ Arrays.asList(grease, footloose, dirtyDancing), 11.0, "3 Filmes: 25%" },
			{ Arrays.asList(grease, footloose, dirtyDancing, vidaEBela), 13.0, "4 Filmes: 50%" },
			{ Arrays.asList(grease, footloose, dirtyDancing, vidaEBela, ameliePoulain), 14.0, "5 Filmes: 75%" },
			{ Arrays.asList(grease, footloose, dirtyDancing, vidaEBela, ameliePoulain, brokebackMountain),
						14.0, "6 Filmes: 100%" } });
	}

	@Test
	public void deveCalcularValorLocacaoConsiderandoDescontos() throws FilmesSemEstoqueException, LocadoraException {
		Usuario usuario = criarUsuario().retornarUsuario();

		Locacao resultadoLocacao = servico.alugarFilme(usuario, filmes);

		assertThat(resultadoLocacao.getValor(), is(valorLocacao));
	}
}
