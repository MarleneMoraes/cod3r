package br.ce.wcaquino.servicos;

import static br.ce.wcaquino.utils.DataUtils.isMesmaData;
import static br.ce.wcaquino.utils.DataUtils.obterDataComDiferencaDias;
import static org.hamcrest.CoreMatchers.equalTo;
import static org.hamcrest.CoreMatchers.is;
import java.util.Date;

import org.junit.Assert;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.ErrorCollector;
import org.junit.rules.ExpectedException;

import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;

public class LocacaoServiceTest {
	@Rule
	public ErrorCollector error = new ErrorCollector();
	
	@Rule
	public ExpectedException exception = ExpectedException.none();

	@Test
	public void test() throws Exception {
		LocacaoService servico = new LocacaoService();
		Usuario usuario = new Usuario("Maria");
		Filme filme = new Filme("Grease", 2, 5.50);

		Locacao locacao;
		locacao = servico.alugarFilme(usuario, filme);

		error.checkThat(locacao.getValor(), is(equalTo(5.50)));
		error.checkThat(isMesmaData(locacao.getDataLocacao(), new Date()), is(true));
		error.checkThat(isMesmaData(locacao.getDataRetorno(), obterDataComDiferencaDias(1)), is(true));
	}
	
	// Teste Elegante
	@Test(expected=Exception.class)
	public void testLocacao_filmeSemEstoque() throws Exception {
		LocacaoService servico = new LocacaoService();
		Usuario usuario = new Usuario("Joana");
		Filme filme = new Filme("Grease", 0, 5.50);

		servico.alugarFilme(usuario, filme);
		
	}
	
	// Teste Robusta
		@Test
		public void testLocacao_filmeSemEstoque2() {
			LocacaoService servico = new LocacaoService();
			Usuario usuario = new Usuario("Joana");
			Filme filme = new Filme("Grease", 0, 5.50);

			try {
				servico.alugarFilme(usuario, filme);
				Assert.fail("Deveria ter lancado uma excecao");
			} catch (Exception e) {
				Assert.assertThat(e.getMessage(), is("Filme sem estoque"));
			}
			
		}
		
	// Forma nova
		@Test
		public void testLocacao_filmeSemEstoque3() throws Exception {
			LocacaoService servico = new LocacaoService();
			Usuario usuario = new Usuario("Joana");
			Filme filme = new Filme("Grease", 0, 5.50);
			
			exception.expect(Exception.class);
			exception.expectMessage("Filme sem estoque");

			servico.alugarFilme(usuario, filme);
		}
}