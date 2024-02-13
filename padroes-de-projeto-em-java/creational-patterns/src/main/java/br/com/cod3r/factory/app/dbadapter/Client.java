package br.com.cod3r.factory.app.dbadapter;

import br.com.cod3r.factory.app.dbadapter.db.DB;
import br.com.cod3r.factory.app.dbadapter.factory.DBFactory;

public class Client {

	public static void main(String[] args) {
		System.out.println("*** Query in OracleDB");
		DB oracleDb = DBFactory.getDatabase("OracleDB", "SELECT * FROM name", "update complete.");
		System.out.println(oracleDb.toString());
		
		
		System.out.println("*** Query in PostgresDB");
		DB postgresDB = DBFactory.getDatabase("PostgresDB", "SELECT * FROM name", "update complete.");
		System.out.println(postgresDB.toString());
		
	}
}
