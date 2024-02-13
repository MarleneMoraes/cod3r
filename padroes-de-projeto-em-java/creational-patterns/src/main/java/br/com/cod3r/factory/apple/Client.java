package br.com.cod3r.factory.apple;

import br.com.cod3r.factory.apple.factory.IPhoneFactory;
import br.com.cod3r.factory.apple.model.IPhone;

public class Client {

	public static void main(String[] args) {

		System.out.println("### Ordering an iPhone X");
		IPhone iphoneX = IPhoneFactory.orderIPhone("X", "standard");
		System.out.println(iphoneX);

		System.out.println("\n\n### Ordering an iPhone 11 HighEnd");
		IPhone iphone11Pro = IPhoneFactory.orderIPhone("11", "highEnd");
		System.out.println(iphone11Pro);
	}
}
