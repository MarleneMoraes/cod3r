package br.ce.wcaquino.builders;

import br.ce.wcaquino.entidades.Usuario;

public class UsuarioBuilder {
	private Usuario usuario;
	
	private UsuarioBuilder() {}
	
	public static UsuarioBuilder criarUsuario() {
		UsuarioBuilder builder = new UsuarioBuilder();
		builder.usuario = new Usuario("Maria");
		
		return builder;
	}
	
	public UsuarioBuilder alterarNome(String nome) {
		usuario.setNome(nome);
		return this;
	}
	
	public Usuario retornarUsuario() {
		return usuario;
	}
}
