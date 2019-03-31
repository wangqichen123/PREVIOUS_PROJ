package com.jdbc.util;
/*
 * @author: Lucky
 * 
 */
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Properties;

public class JDBCUtil {
	static String driverClass = null;
	static String url = null;
	static String name = null;
	static String password= null;
	
	static {
		try {
			Properties properties = new Properties();
			
			//InputStream is = new FileInputStream("jdbc.properties");
			InputStream is = JDBCUtil.class.getClassLoader().getResourceAsStream("jdbc.properties");
			properties.load(is);
			driverClass = properties.getProperty("driverClass");
			url = properties.getProperty("url");
			name = properties.getProperty("user");
			password = properties.getProperty("password");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	public static Connection getConn() {
		Connection conn=null;
		
		try {
			// 1.ע��������DriverManager����ؾͻ�ע�ᣬ������Ҫ
			//DriverManager.registerDriver(new Driver());
			//forNameҲ���Բ�д
			Class.forName("com.mysql.cj.jdbc.Driver");
			// 2.��������
			conn = DriverManager.getConnection("jdbc:mysql://139.9.2.241:3306/testdb", "test", "Difficult_password1234");

		} catch (Exception e) {
			e.printStackTrace();
		}		
		return conn;
	}
	
	/*
	 * �ͷ���Դ������ 
	 */
	public static void release(Connection conn, Statement st, ResultSet rs) {
		closeRs(rs);
		closeSt(st);
		closeConn(conn);
	}
	
	private static void closeRs(ResultSet rs) {
		try {
			if(rs != null) {
			rs.close();
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}finally {
			rs=null;
		}
	}
	
	private static void closeSt(Statement st) {
		try {
			if(st != null) {
			st.close();
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}finally {
			st=null;
		}
	}
	
	private static void closeConn(Connection conn) {
		try {
			if(conn != null) {
				conn.close();
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}finally {
			conn=null;
		}
	}
}