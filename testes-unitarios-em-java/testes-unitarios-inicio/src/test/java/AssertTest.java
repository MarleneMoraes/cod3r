import org.junit.Assert;
import org.junit.Test;

import br.ce.wcaquino.entidades.Usuario;


public class AssertTest {
	
	@Test
	public void test() {
		
		Assert.assertTrue(true);
		Assert.assertFalse(false);
		
		// Assert Equals
		Assert.assertEquals("Erro de comparacao", 1, 1); 	// string apresentada apenas 
															// se houver erro de comparacao
		
		// ATENCAO!!!!
		// Assert Equals em float e double
		// Comparacao com deltas: margem de erro para os testes
		Assert.assertEquals(0.51234, 0.512, 0.001); // passed
		Assert.assertEquals(0.51234, 0.512, 0.0001); // error
		
		Assert.assertEquals(Math.PI, 3.14, 0.01); // passed
		
		// Wrappers em Java
		int i = 5;
		Integer I = 5;
		
		// Assert.assertEquals(i, I); // erro de compilacao
		
		//solucoes
		Assert.assertEquals(Integer.valueOf(i), I);
		Assert.assertEquals(i, I.intValue());
		
		// Strings
						 // valor esperado, valor atual
		Assert.assertEquals("bola", "bola");
		// Assert.assertEquals("bola", "Bola"); // error
		Assert.assertTrue("bola".equalsIgnoreCase("Bola"));
		Assert.assertTrue("bola".startsWith("bo"));
		
		// Objeto
		Usuario userG = new Usuario("Gandalf");
		Usuario userM = new Usuario("Gandalf");
		Usuario userD = null;
		
		Assert.assertEquals(userG, userM);	// procura constante por um metodo equals implementado. 
											// Caso encontre apenas no Object, a comparacao sera se
											// sao o objeto de mesma instancia. Apenas o metodo hash
											// code and equals pode igualar os objetos acima
		
		// Usuario userD = new Usuario("Daiana");
		
		// Assert.assertEquals(userG, userD); // error
		Assert.assertNotEquals(userG, userD);
		
		// Garantia da mesma instancia
		// Assert.assertSame(userG, userM); // error
		Assert.assertSame(userG, userG);
		Assert.assertNotSame(userG, userD);
		
		// Assert.assertTrue(userD == null);
		Assert.assertNull(userD);
		Assert.assertNotNull(userM);
		
		
		
		
	}
}
