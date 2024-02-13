package br.com.cod3r.factory.app.dbadapter.factory;

import br.com.cod3r.factory.app.dbadapter.db.DB;
import br.com.cod3r.factory.app.dbadapter.db.OracleDB;
import br.com.cod3r.factory.app.dbadapter.db.PostgresDB;

public abstract class DBFactory {
	public static DB getDatabase(String db, String query, String update) {
		DB dataBase = null;

		if ("OracleDB".equals(db)) {
			dataBase = new OracleDB();
		} else if ("PostgresDB".equals(db)) {
			dataBase = new PostgresDB();
		}

		if (dataBase != null) {
			dataBase.query(query);
			dataBase.update(update);
		}

		return dataBase;
	}
}
