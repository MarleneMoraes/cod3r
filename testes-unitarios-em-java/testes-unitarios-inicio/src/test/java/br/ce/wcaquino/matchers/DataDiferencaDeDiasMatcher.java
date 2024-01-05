package br.ce.wcaquino.matchers;

import java.util.Date;

import org.hamcrest.Description;
import org.hamcrest.TypeSafeMatcher;

import br.ce.wcaquino.utils.DataUtils;

public class DataDiferencaDeDiasMatcher extends TypeSafeMatcher<Date> {

	private Integer qtdDias;
	
	public DataDiferencaDeDiasMatcher(Integer qtdDias) {
		this.qtdDias = qtdDias;
	}

	public void describeTo(Description description) {
		// TODO Auto-generated method stub

	}

	@Override
	protected boolean matchesSafely(Date item) {
		return DataUtils.isMesmaData(item, DataUtils.obterDataComDiferencaDias(qtdDias));
	}

}
