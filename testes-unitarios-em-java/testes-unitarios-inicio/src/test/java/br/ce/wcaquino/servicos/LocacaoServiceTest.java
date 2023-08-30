import static org.junit.Assert.assertThat;
import static org.junit.Assert.assertTrue;
import static org.hamcrest.CoreMatchers.is;
import static org.hamcrest.CoreMatchers.not;
import static org.hamcrest.CoreMatchers.equalTo;
import static br.ce.wcaquino.utils.DataUtils.isMesmaData;
import static br.ce.wcaquino.utils.DataUtils.obterDataComDiferencaDias;;

import java.util.Date;

import org.hamcrest.CoreMatchers;
import org.junit.Test;

import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;
import br.ce.wcaquino.utils.DataUtils;

public class LocacaoServiceTest {
	@Test
	public void test() {
		LocacaoService servico = new LocacaoService();
		Usuario usuario = new Usuario("Maria");
		Filme filme = new Filme("Grease", 2, 5.50);

		Locacao locacao = servico.alugarFilme(usuario, filme);

		assertThat(locacao.getValor(), is(equalTo(5.50)));
		assertThat(locacao.getValor(), is(not(4.50)));
		assertThat(isMesmaData(locacao.getDataLocacao(), new Date()), is(true));
		assertThat(isMesmaData(locacao.getDataRetorno(), obterDataComDiferencaDias(1)), is(true));

	}
}