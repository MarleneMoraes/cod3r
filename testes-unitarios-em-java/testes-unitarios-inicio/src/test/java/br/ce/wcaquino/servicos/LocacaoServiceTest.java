package br.ce.wcaquino.servicos;

import static br.ce.wcaquino.utils.DataUtils.isMesmaData;
import static br.ce.wcaquino.utils.DataUtils.obterDataComDiferencaDias;
import static org.hamcrest.CoreMatchers.equalTo;
import static org.hamcrest.CoreMatchers.is;
import java.util.Date;

import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.ErrorCollector;

import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;

public class LocacaoServiceTest {
	@Rule
	public ErrorCollector error = new ErrorCollector();

	@Test
	public void test() {
		LocacaoService servico = new LocacaoService();
		Usuario usuario = new Usuario("Maria");
		Filme filme = new Filme("Grease", 2, 5.50);

		Locacao locacao = servico.alugarFilme(usuario, filme);

		// assertThat(locacao.getValor(), is(equalTo(5.50)));
		// assertThat(isMesmaData(locacao.getDataLocacao(), new Date()), is(true));
		// assertThat(isMesmaData(locacao.getDataRetorno(),
		// obterDataComDiferencaDias(1)), is(true));

		error.checkThat(locacao.getValor(), is(equalTo(5.50)));
		error.checkThat(isMesmaData(locacao.getDataLocacao(), new Date()), is(true));
		error.checkThat(isMesmaData(locacao.getDataRetorno(), obterDataComDiferencaDias(1)), is(true));

	}
}