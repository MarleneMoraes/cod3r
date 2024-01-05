package br.ce.wcaquino.tdd;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.Before;
import org.junit.Test;

public class CalculadoraTest {
	private Calculadora calculadora;

	@Before
	public void instanciacao_calculadora() {
		calculadora = new Calculadora();
	}

	@Test
	public void somaDoisValores() {
		int a = 5;
		int b = 3;
		
		int resultado = calculadora.somar(a,b);
		
		assertEquals(8, resultado);
	}
	
	@Test
	public void subtraiDoisValores() {
		int a = 8;
		int b = 5;
		
		int resultado = calculadora.subtrair(a,b);
		
		assertEquals(3, resultado);
	}
	
	@Test
	public void divideDoisValores() throws NaoPodeDividirPorZeroException {
		int a = 6;
		int b = 3;
		
		int resultado = calculadora.dividir(a,b);
		
		assertEquals(2, resultado);
	}
	
	@Test(expected = NaoPodeDividirPorZeroException.class)
	public void lancaExcecaoAoDividirPorZero() throws NaoPodeDividirPorZeroException {
		int a = 10;
		int b = 0;
		
		calculadora.dividir(a,b);
		
	}
}
