package br.ce.wcaquino.servicos;

import java.util.Calendar;
import java.util.Date;
import java.util.List;

import br.ce.wcaquino.entidades.Filme;
import br.ce.wcaquino.entidades.Locacao;
import br.ce.wcaquino.entidades.Usuario;
import br.ce.wcaquino.exceptions.FilmesSemEstoqueException;
import br.ce.wcaquino.exceptions.LocadoraException;
import br.ce.wcaquino.utils.DataUtils;

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
		
		for(int i = 0; i < filmes.size(); i++) {
			Double valorFilme = filmes.get(i).getPrecoLocacao();
			
			switch(i) {
				case 2:
					valorFilme = valorFilme * 0.75;
					break;
				case 3:
					valorFilme = valorFilme * 0.5;
					break;
				case 4:
					valorFilme = valorFilme * 0.25;
					break;
				case 5:
					valorFilme = valorFilme * 0.0;
					break;				
			}
			
			precoTotal += valorFilme;	
		}
		
		locacao.setValor(precoTotal);

		// Entrega no dia seguinte
		Date dataEntrega = new Date();
		dataEntrega = DataUtils.adicionarDias(dataEntrega, 1);
		
		if(DataUtils.verificarDiaSemana(dataEntrega, Calendar.SUNDAY)) {
			dataEntrega = DataUtils.adicionarDias(dataEntrega, 2);
		}
		
		locacao.setDataRetorno(dataEntrega);

		return locacao;
	}

}