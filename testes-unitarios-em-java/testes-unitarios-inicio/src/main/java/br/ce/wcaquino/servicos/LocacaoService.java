package br.ce.wcaquino.servicos;

import java.util.Date;
import java.util.List;

import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;
import br.ce.wcaquino.exceptions.FilmesSemEstoqueException;
import br.ce.wcaquino.exceptions.LocadoraException;

public class LocacaoService {

	public Locacao alugarFilme(Usuario usuario, List<Filme> filmes) throws FilmesSemEstoqueException, LocadoraException {
		
		if(usuario == null) {
			throw new LocadoraException("Usuario vazio");
		}
		
		if(filmes == null || filmes.isEmpty()) {
			throw new LocadoraException("Filme vazio");
		}

		for(Filme filme : filmes) {
			if(filme.getEstoque() == 0) {
				throw new FilmesSemEstoqueException();
			}
		}

		Locacao locacao = new Locacao();
		locacao.setFilmes(filmes);
		locacao.setUsuario(usuario);
		locacao.setDataLocacao(new Date());
		
		Double precoTotal = 0.0;
		
		for(Filme filme : filmes) {
			precoTotal += filme.getPrecoLocacao();			
		}
		
		locacao.setValor(precoTotal);

		// Entrega no dia seguinte
		Date dataEntrega = new Date();
		//dataEntrega = adicionarDias(dataEntrega, 1);
		locacao.setDataRetorno(dataEntrega);

		// Salvando a locacao...
		// TODO adicionar metodo para salvar

		return locacao;
	}

}