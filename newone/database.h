#pragma once
#include "stdafx.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace MySql::Data::MySqlClient;

ref class database
{
private:
	String^ constring;
	MySqlCommand^ query;
	MySqlDataReader^ data;

public:
	database(void);
	bool connect();
	MySqlConnection^ conn;
	MySqlDataReader^  execute(MySqlCommand^ query);
	bool verify_user(String^ user_nm,String^ pass,String^ user_type);
	MySqlDataReader^ item_list();
	MySqlDataReader^ retrieve_orders();
	MySqlDataReader^ user_list();
	MySqlDataReader^ fill_list();
	MySqlDataReader^ find_griduserid(String^ user_nm);
	MySqlDataReader^ find_grid(int user_id);
	MySqlDataReader^ fill_chart();
	MySqlDataReader^ setmin(String^ item,String^ value);
	MySqlDataReader^ setmax(String^ item,String^ value);
	MySqlDataReader^ retrieve_minmax(String^ item);
	MySqlDataReader^ list_tables();
	void browse_table(String^ table_name);
	MySqlDataReader^ item_details(String^ item_name);
	int item_id(String^ item_name);
	MySqlDataReader^ get_orders(int userid);
	MySqlDataReader^ order_detais(int orderid);
	void additem(String^ name,String^ barcode,String^ category,String^ min,String^ max);
	void addmanager(String^ name,String^ user_name,String^ password,String^ type);
	int user_id(String^ user_name);
	String^ get_item_name(int item_id);
	String^ get_user_name(int user_id);
	MySqlDataReader^ manager_list();
	//MySqlDataReader^ get_orders(int userid);
	MySqlDataReader^ order_details(int orderid);
	int database::get_order_id(int userid,String^ dattime);
	void database::place_order(int orderid,int userid,String^ dattime,double price, int itemid,int Quantity);
	bool database::change_password(int userid, String^ oldpass, String^ newpass);
	MySqlDataReader^ database::retailer_bill_status(int orderid);
	bool database::is_register(String^ name, String^ username,String^ pass, String^ usertype);
	void deletemanager(String^ name);
	void changereview(int orderid,String^ ans);
	MySqlDataReader^ database::stock_item_list();
	String^ database::time_stamp();
	void transfer_order(int orderid, String^ status);
	void update_stock(int orderid);
	void database::update_stock_customer(int orderid);
	void transfer_order_customer(int orderid, String^ status);
};

