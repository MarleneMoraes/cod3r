package br.ce.wcaquino.builders;

import br.ce.wcaquino.entidades.Filme;

public class FilmeBuilder {
	private Filme filme;
	
	private FilmeBuilder() {}
	
	public static FilmeBuilder criarFilme() {
		FilmeBuilder builder = new FilmeBuilder();
		builder.filme = new Filme("Grease", 2, 4.00);
		
		return builder;
	}
	
	public static FilmeBuilder criarFilmeSemEstoque() {
		FilmeBuilder builder = new FilmeBuilder();
		builder.filme = new Filme("Grease", 0, 4.00);
		
		return builder;
	}
	
	public FilmeBuilder alterarTitulo(String titulo) {
		filme.setNome(titulo);
		return this;
	}
	
	public FilmeBuilder valorAlterado(Double valor) {
		filme.setPrecoLocacao(valor);
		return this;
	}

	public FilmeBuilder semEstoque() {
		filme.setEstoque(0);
		return this;
	}
	
	public Filme retornarFilme() {
		return filme;
	}
}
