package br.ce.wcaquino.suites;

import org.junit.runner.RunWith;
import org.junit.runners.Suite;
import org.junit.runners.Suite.SuiteClasses;

import br.ce.wcaquino.servicos.CalculoValorLocacaoTest;
import br.ce.wcaquino.servicos.LocacaoServiceTest;
import br.ce.wcaquino.tdd.CalculadoraTest;

@RunWith(Suite.class)
@SuiteClasses({
	CalculadoraTest.class, 
	CalculoValorLocacaoTest.class, 
	LocacaoServiceTest.class
})
public class SuiteExecucao { }
