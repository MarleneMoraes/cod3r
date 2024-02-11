package br.ce.wcaquino.servicos;

import static br.ce.wcaquino.builders.FilmeBuilder.criarFilme;
import static br.ce.wcaquino.builders.UsuarioBuilder.criarUsuario;
import static br.ce.wcaquino.matchers.MatchersProprios.caiNumaSegunda;
import static br.ce.wcaquino.utils.DataUtils.isMesmaData;
import static br.ce.wcaquino.utils.DataUtils.obterData;
import static org.hamcrest.CoreMatchers.equalTo;
import static org.hamcrest.CoreMatchers.is;
import static org.junit.Assert.assertThat;
import static org.mockito.MockitoAnnotations.initMocks;

import java.util.Arrays;
import java.util.Date;
import java.util.List;

import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.ErrorCollector;
import org.junit.rules.ExpectedException;
import org.junit.runner.RunWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.Mockito;
import org.powermock.api.mockito.PowerMockito;
import org.powermock.core.classloader.annotations.PrepareForTest;
import org.powermock.modules.junit4.PowerMockRunner;
import org.powermock.reflect.Whitebox;

import br.ce.wcaquino.daos.LocacaoDAO;
import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;

@RunWith(PowerMockRunner.class)
// @PrepareForTest({ LocacaoService.class, DataUtils.class })
@PrepareForTest(LocacaoService.class)
public class LocacaoServiceTestWithPowerMock {
	@InjectMocks
	private LocacaoService servico;

	@Mock
	private LocacaoDAO dao;
	@Mock
	private SPCService spc;
	@Mock
	private EmailService email;

	@Rule
	public ErrorCollector error = new ErrorCollector();

	@Rule
	public ExpectedException exception = ExpectedException.none();

	@Before
	public void setup() {
		initMocks(this);
		servico = PowerMockito.spy(servico);
	}

	@Test
	public void deveAlugarFilmeComSucesso() throws Exception {

		Usuario usuario = criarUsuario().retornarUsuario();

		List<Filme> filmes = Arrays.asList(criarFilme().valorAlterado(5.50).retornarFilme());

		PowerMockito.whenNew(Date.class).withNoArguments().thenReturn(obterData(28, 4, 2017));

		/*
		 * Calendar calendar = Calendar.getInstance();
		 * calendar.set(Calendar.DAY_OF_MONTH, 28); calendar.set(Calendar.MONTH, 4);
		 * calendar.set(Calendar.YEAR, 2017);
		 * 
		 * PowerMockito.mockStatic(Calendar.class);
		 * PowerMockito.when(Calendar.getInstance()).thenReturn(calendar);
		 */

		Locacao locacao = servico.alugarFilme(usuario, filmes);

		error.checkThat(locacao.getValor(), is(equalTo(5.50)));
		// error.checkThat(locacao.getDataLocacao(), eHoje());
		// error.checkThat(locacao.getDataRetorno(), eHojeComDiferencaDeDias(1));
		error.checkThat(isMesmaData(locacao.getDataLocacao(), obterData(28, 4, 2017)), is(true));
		error.checkThat(isMesmaData(locacao.getDataRetorno(), obterData(29, 4, 2017)), is(true));
	}

	@Test
	public void naoDeveDevolverFilmeNoDomingo() throws Exception {
		Usuario usuario = criarUsuario().retornarUsuario();

		List<Filme> filmes = Arrays.asList(criarFilme().retornarFilme());

		PowerMockito.whenNew(Date.class).withNoArguments().thenReturn(obterData(29, 4, 2017));

		/*
		 * Calendar calendar = Calendar.getInstance();
		 * calendar.set(Calendar.DAY_OF_MONTH, 29); calendar.set(Calendar.MONTH, 4);
		 * calendar.set(Calendar.YEAR, 2017);
		 * 
		 * PowerMockito.mockStatic(Calendar.class);
		 * PowerMockito.when(Calendar.getInstance()).thenReturn(calendar);
		 */

		Locacao locacao = servico.alugarFilme(usuario, filmes);

		assertThat(locacao.getDataRetorno(), caiNumaSegunda());
		PowerMockito.verifyNew(Date.class, Mockito.times(2)).withNoArguments();

		// PowerMockito.verifyStatic(Mockito.times(2));
		// Calendar.getInstance();
	}

	@Test
	public void deveAlugarFilmeSemCalcularValor() throws Exception {
		Usuario usuario = criarUsuario().retornarUsuario();

		List<Filme> filmes = Arrays.asList(criarFilme().retornarFilme());

		PowerMockito.doReturn(1.00).when(servico, "calcularValorLocacao", filmes);

		Locacao locacao = servico.alugarFilme(usuario, filmes);

		assertThat(locacao.getValor(), is(1.00));
		PowerMockito.verifyPrivate(servico).invoke("calcularValorLocacao", filmes);
	}

	@Test
	public void deveCalcularValorLocacao() throws Exception {
		List<Filme> filmes = Arrays.asList(criarFilme().retornarFilme());

		Double valorLocacao = (Double) Whitebox.invokeMethod(servico, "calcularValorLocacao", filmes);

		assertThat(valorLocacao, is(4.00));
	}
}