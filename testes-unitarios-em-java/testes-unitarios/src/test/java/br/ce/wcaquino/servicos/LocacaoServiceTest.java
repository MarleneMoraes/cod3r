package br.ce.wcaquino.servicos;

import static br.ce.wcaquino.builders.FilmeBuilder.criarFilme;
import static br.ce.wcaquino.builders.FilmeBuilder.criarFilmeSemEstoque;
import static br.ce.wcaquino.builders.LocacaoBuilder.criarLocacao;
import static br.ce.wcaquino.builders.UsuarioBuilder.criarUsuario;
import static br.ce.wcaquino.matchers.MatchersProprios.caiEm;
import static br.ce.wcaquino.matchers.MatchersProprios.caiNumaSegunda;
import static br.ce.wcaquino.matchers.MatchersProprios.eHoje;
import static br.ce.wcaquino.matchers.MatchersProprios.eHojeComDiferencaDeDias;
import static org.hamcrest.CoreMatchers.equalTo;
import static org.hamcrest.CoreMatchers.is;
import static org.junit.Assert.assertThat;
import static org.mockito.Matchers.any;
import static org.mockito.Mockito.times;
import static org.mockito.Mockito.verify;
import static org.mockito.Mockito.verifyZeroInteractions;
import static org.mockito.Mockito.when;
import static org.mockito.MockitoAnnotations.initMocks;

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
import org.mockito.ArgumentCaptor;
import org.mockito.InjectMocks;
import org.mockito.Mock;

import br.ce.wcaquino.daos.LocacaoDAO;
import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;
import br.ce.wcaquino.exceptions.FilmesSemEstoqueException;
import br.ce.wcaquino.exceptions.LocadoraException;
import br.ce.wcaquino.utils.DataUtils;

public class LocacaoServiceTest {
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
		/*servico = new LocacaoService();

		dao = mock(LocacaoDAO.class);
		servico.setLocacaoDAO(dao);

		spc = mock(SPCService.class);
		servico.setSPCService(spc);

		email = mock(EmailService.class);
		servico.setEmailService(email);*/
		
		initMocks(this);
	}

	@Test
	public void deveAlugarFilmeComSucesso() throws Exception {
		Assume.assumeFalse(DataUtils.verificarDiaSemana(new Date(), Calendar.SATURDAY));

		Usuario usuario = criarUsuario().retornarUsuario();

		List<Filme> filmes = Arrays.asList(criarFilme().valorAlterado(5.50).retornarFilme());

		Locacao locacao = servico.alugarFilme(usuario, filmes);

		error.checkThat(locacao.getValor(), is(equalTo(5.50)));
		error.checkThat(locacao.getDataLocacao(), eHoje());
		error.checkThat(locacao.getDataRetorno(), eHojeComDiferencaDeDias(1));
	}

	@Test(expected = FilmesSemEstoqueException.class)
	public void deveLancarExcecaoAlugarFilmeSemEstoque() throws Exception {
		Usuario usuario = criarUsuario().retornarUsuario();
		List<Filme> filmes = Arrays.asList(criarFilmeSemEstoque().retornarFilme());

		servico.alugarFilme(usuario, filmes);
	}

	@Test
	public void naodeveAlugarFilmeSemUsuario() throws FilmesSemEstoqueException {
		List<Filme> filmes = Arrays.asList(criarFilme().retornarFilme());

		try {
			servico.alugarFilme(null, filmes);
			Assert.fail();
		} catch (LocadoraException e) {
			Assert.assertThat(e.getMessage(), is("Usuario vazio"));
		}
	}

	@Test
	public void naodeveAlugarFilmeVazio() throws FilmesSemEstoqueException, LocadoraException {
		Usuario usuario = criarUsuario().retornarUsuario();

		exception.expect(LocadoraException.class);
		exception.expectMessage("Filme vazio");

		servico.alugarFilme(usuario, null);
	}

	@Test
	public void naoDeveDevolverFilmeNoDomingo() throws FilmesSemEstoqueException, LocadoraException {
		Assume.assumeTrue(DataUtils.verificarDiaSemana(new Date(), Calendar.SATURDAY));

		Usuario usuario = criarUsuario().retornarUsuario();

		List<Filme> filmes = Arrays.asList(criarFilme().retornarFilme());

		Locacao locacao = servico.alugarFilme(usuario, filmes);

		// assertThat(locacao.getDataRetorno(), new
		// DiaDaSemanaMatcher(Calendar.MONDAY));
		assertThat(locacao.getDataRetorno(), caiEm(Calendar.SUNDAY));
		assertThat(locacao.getDataRetorno(), caiNumaSegunda());
	}

	@Test
	public void naoDeveAlugarParaNegativadoSPC() throws Exception {
		Usuario usuario = criarUsuario().retornarUsuario();

		List<Filme> filmes = Arrays.asList(criarFilme().retornarFilme());

		//when(spc.eNegativado(usuario)).thenReturn(true);
		when(spc.eNegativado(any(Usuario.class))).thenReturn(true);

		exception.expect(LocadoraException.class);
		exception.expectMessage("Usuario Negativado.");

		try {
			servico.alugarFilme(usuario, filmes);
			Assert.fail();
		} catch (LocadoraException e) {
			assertThat(e.getMessage(), is("Usuario Negativado."));
		}
		
		verify(spc).eNegativado(usuario);
	}

	@Test
	public void enviarEmailLocacoesAtrasadas() throws FilmesSemEstoqueException, LocadoraException {
		Usuario usuario1 = criarUsuario().retornarUsuario();
		Usuario usuario2 = criarUsuario().alterarNome("Joana").retornarUsuario();
		Usuario usuario3 = criarUsuario().alterarNome("Dorothy").retornarUsuario();

		List<Locacao> locacoes = Arrays
				.asList(criarLocacao().comUsuario(usuario1).locacaoAtrasada().retornarLocacao(),
						criarLocacao().comUsuario(usuario2).retornarLocacao(),
						criarLocacao().comUsuario(usuario3).locacaoAtrasada().retornarLocacao());

		when(dao.obterLocacoesPendentes()).thenReturn(locacoes);

		servico.notificarAtrasos();

		/* 
			verify(email).notificarAtraso(usuario1);
			verify(email, never()).notificarAtraso(usuario2);
			verify(email).notificarAtraso(usuario3);
			verifyNoMoreInteractions(email);
		*/
		
		verify(email, times(2)).notificarAtraso(any(Usuario.class));
		
		verifyZeroInteractions(spc);
	}
	
	@Test
	public void deveTratarErroNoSPC() throws Exception {
		Usuario usuario = criarUsuario().retornarUsuario();

		List<Filme> filmes = Arrays.asList(criarFilme().retornarFilme());
		
		when(spc.eNegativado(usuario)).thenThrow(new Exception("Falha catastr�fica"));
		
		exception.expect(LocadoraException.class);
		exception.expectMessage("SPC fora do ar, tente novamente.");

		servico.alugarFilme(usuario, filmes);
	}
	
	
	@Test
	public void deveProrrogarUmaLocacao() {
		Locacao locacao = criarLocacao().retornarLocacao();
		
		servico.prorrogarLocacao(locacao, 3);
		
		ArgumentCaptor<Locacao> argumentCaptor = ArgumentCaptor.forClass(Locacao.class);
		verify(dao).salvar(argumentCaptor.capture());
		Locacao locacaoCapturada = argumentCaptor.getValue();
		
		error.checkThat(locacaoCapturada.getValor(), is(12.0));
		error.checkThat(locacaoCapturada.getDataLocacao(), eHoje());
		error.checkThat(locacaoCapturada.getDataRetorno(), eHojeComDiferencaDeDias(3));
	}
}