package br.ce.wcaquino.matchers;

import java.util.Calendar;

public class MatchersProprios {
	public static DiaDaSemanaMatcher caiEm(Integer diaDaSemana) {
		return new DiaDaSemanaMatcher(diaDaSemana);
	}
	
	public static DiaDaSemanaMatcher caiNumaSegunda() {
		return new DiaDaSemanaMatcher(Calendar.MONDAY);
	}
}
