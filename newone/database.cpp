#include "StdAfx.h"
#include "database.h"
#include "Form1.h"

database::database(void)
{
	constring=L"datasource=kunal;port=3306;username=vasu_sakila;password=vasu";
	conn=gcnew MySqlConnection(constring);
}

bool database::connect(){


	try{
		conn->Open();
	}
	catch(Exception^ ex){
		MessageBox::Show(ex->Message);
		return false;
	}
	return true;
}

MySqlDataReader^ database::execute(MySqlCommand^ query){
	MySqlDataReader^ data;
	try{
		connect();
		data=query->ExecuteReader();
	}
	catch(Exception^ ex){
		MessageBox::Show(ex->Message);

	}
	return data;
}

bool database::verify_user(String^ user_nm,String^ pass,String^ user_type){
	if (user_nm=="" || pass=="" || user_type==""){
		MessageBox::Show("Fill all details");
		return false;
	}

	query=gcnew MySqlCommand("SELECT * FROM database.users where user_name= '"+user_nm+"' and password='"+pass+"' and type='"+user_type+"'  ",conn);
	data = execute(query);

	int count=0;
	while(data->Read()){
		count++;
	}
	if (count>=1){
		// MessageBox::Show("username and password is correct");
		return true;
	} 
	else{
		MessageBox::Show("Incorrect");
		return false;
	}
}

MySqlDataReader^ database::item_list(){
	query=gcnew MySqlCommand("SELECT * FROM database.items",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::manager_list(){
	query=gcnew MySqlCommand("SELECT * FROM database.users Where type='manager' ",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::user_list(){
	query=gcnew MySqlCommand("SELECT * FROM database.users",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::retrieve_orders(){
	query=gcnew MySqlCommand("SELECT * FROM database.orders",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::fill_list(){
	query=gcnew MySqlCommand("SELECT orders.id,name FROM database.users JOIN database.orders ON users.id=orders.user_id WHERE reviewed = 'no' ",conn);
	data = execute(query);
	return data;
}


MySqlDataReader^ database::find_griduserid(String^ user_nm){
	query=gcnew MySqlCommand("SELECT id FROM database.users Where name='"+user_nm+"' ",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::find_grid(int user_id){
	query=gcnew MySqlCommand("SELECT name,quantity,price FROM database.items JOIN database.orders_details ON orders.item_id = items.id WHERE user_id='"+user_id+"'",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::fill_chart(){
	query=gcnew MySqlCommand("SELECT name,min,max,quantity FROM database.items JOIN database.stock ON items.id = stock.item_id",conn);
	data = execute(query);
	return data;
}


MySqlDataReader^ database::retrieve_minmax(String^ item){
	query=gcnew MySqlCommand("SELECT min,max FROM database.items WHERE items.name = '"+ item+"'",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::setmin(String^ item,String^ value){
	query=gcnew MySqlCommand("UPDATE database.items SET min= '"+ value +"' WHERE name = '"+ item +"' ",conn);
	data = execute(query);
	return data;
}


MySqlDataReader^ database::setmax(String^ item,String^ value){
	query=gcnew MySqlCommand("UPDATE database.items SET max= '"+ value +"' WHERE name = '"+ item +"' ",conn);
	data = execute(query);
	return data;
}



MySqlDataReader^ database::list_tables(){
	query=gcnew MySqlCommand("SELECT table_name, table_type, engine FROM information_schema.tables WHERE table_schema = 'database' ORDER BY table_name DESC",conn);
	data = execute(query);
	return data;
}

MySqlDataReader^ database::item_details(String^ item_name){
	// MessageBox::Show(item_name->ToLowerInvariant());
	String^ name = item_name->ToLowerInvariant();
	query=gcnew MySqlCommand("SELECT name, price_buy, category, quantity FROM database.items LEFT JOIN database.stock ON stock.item_id = items.id where name = '"+name+"' ",conn);

	data = execute(query);
	return data;

}

int database::item_id(String^ item_name)
{
	String^ name= item_name->ToLowerInvariant();
	query= gcnew MySqlCommand("SELECT id FROM database.items where name = '"+name+"' ",conn);
	data = execute(query);
	int id;
	while(data -> Read())
	{
		id = data->GetInt32("id");
	}
	return id;
}
void database::browse_table(String^ table_name){

}


MySqlDataReader^ database::order_detais(int orderid){
	query=gcnew MySqlCommand("SELECT name, price, quantity FROM database.order_details JOIN database.items ON order_details.item_id = items.id WHERE order_id = '"+ orderid +"' ",conn);
	data = execute(query); return data; 
}

void database::additem(String^ name,String^ barcode,String^ category,String^ min,String^ max){
	//query = gcnew MySqlCommand("INSERT INTO database.items  ");
	query=gcnew MySqlCommand("INSERT INTO database.items (id, name, bar_code, category, min,max) VALUES (NULL,'"+ name +"','"+ barcode +"','"+ category +"','"+ min +"','"+ max +"') ",conn);
	execute(query);
}

void database::addmanager(String^ name,String^ user_name,String^ password,String^ type){
	//query = gcnew MySqlCommand("INSERT INTO database.items  ");
	query=gcnew MySqlCommand("INSERT INTO database.users (id, name, priority,user_name,password,type) VALUES (NULL, '"+ name +"', 4, '"+ user_name +"', '"+ password +"',  '"+ type +"') ",conn);
	execute(query);
}

int database::user_id(String^ user_name)
{
	String^ name= user_name->ToLowerInvariant();
	query= gcnew MySqlCommand("SELECT id FROM database.users where user_name = '"+name+"' ",conn);
	data = execute(query);
	int id;
	while(data -> Read())
	{
		id = data->GetInt32("id");
	}
	return id;
}
String^ database::get_user_name(int userid)
{
	query= gcnew MySqlCommand("SELECT name FROM database.users where id = '"+userid+"' ",conn);
	data = execute(query);
	String^ name;
	while(data -> Read())
	{
		name = data->GetString("name");
	}
	return name;
}
String^ database::get_item_name(int itemid)
{
	query= gcnew MySqlCommand("SELECT id FROM database.items where id = '"+itemid+"' ",conn);
	data = execute(query);
	String^ name;
	while(data -> Read())
	{
		name = data->GetString("name");
	}
	return name;
}
MySqlDataReader^ database::get_orders(int userid)
{ 
	query=gcnew MySqlCommand("SELECT id FROM database.orders WHERE user_id = '"+ userid +"' ",conn); 
	data = execute(query); 
	return data; 
}
MySqlDataReader^ database::retailer_bill_status(int orderid)
{
	query=gcnew MySqlCommand("SELECT reviewed,status FROM database.orders WHERE id ='"+orderid+"'",conn);
	data = execute(query);
	return data;
}
MySqlDataReader^ database::order_details(int orderid)
{
	query=gcnew MySqlCommand("SELECT name, price, quantity FROM database.order_details LEFT JOIN database.items ON order_details.item_id = items.id WHERE order_id = '"+ orderid +"' ",conn);
	data = execute(query); 
	return data; 
}
int database::get_order_id(int userid,String^ dattime)
{
	System::DateTime time = System::Convert::ToDateTime(dattime);
	int order_id; query=gcnew MySqlCommand("INSERT INTO database.orders (id, user_id, timestamp) VALUES (NULL,'"+ userid +"','"+ dattime +"') ",conn);
	execute(query); 
	conn->Close();
	//	Thread::Sleep(100);
	query=gcnew MySqlCommand("SELECT id FROM database.orders WHERE user_id='"+ userid +"' and timestamp ='"+ dattime +"' ",conn); 
	data = execute(query); 
	while(data->Read())
	{ 
		order_id = data->GetInt32(0); 
	} 
	conn->Close();
	return order_id; 
} 
void database::place_order(int orderid,int userid,String^ dattime,double price, int itemid,int Quantity)
{ 

	//int orderid = get_order_id(userid,dattime);
	query=gcnew MySqlCommand("INSERT INTO database.order_details (id, order_id, item_id, price, quantity) VALUES (NULL,'"+ orderid +"','"+ itemid +"','"+ price +"','"+ Quantity +"') ",conn); 
	execute(query); 
	//return data; 
}

void database::deletemanager(String^ name)
{ 
	query=gcnew MySqlCommand("DELETE FROM database.users WHERE name= '"+name +"'  ",conn); 
	execute(query); 
	//return data; 
}

bool database::change_password(int userid, String^ oldpass, String^ newpass)
{
	query=gcnew MySqlCommand("SELECT password FROM database.users WHERE id = '"+ userid +"' ",conn);
	data = execute(query); data->Read();

	if (data->GetString("password")==oldpass)
	{
		conn->Close(); 
		query=gcnew MySqlCommand("UPDATE database.users SET password = '"+ newpass +"' WHERE id = '"+ userid +"' ",conn);
		execute(query); 
		return true; 
	}
	else
	{
		return false;
	}
}
bool database::is_register(String^ name, String^ username,String^ pass, String^ usertype)
{ 
	query=gcnew MySqlCommand("SELECT user_name FROM database.users WHERE user_name = '"+ username +"' ",conn);
	data = execute(query);
	int count = 0;
	while(data->Read())
	{ 
		count++; 
	} 
	if (count) 
	{
		return false;
	}
	conn->Close(); 
	query=gcnew MySqlCommand("INSERT INTO database.users (id, name, priority, user_name, password, type) VALUES (NULL,'"+ name +"','"+ '0' +"','"+ username +"','"+ pass +"','"+ usertype +"')  ",conn);
	execute(query); 
	return true;
}

void database::changereview(int orderid,String^ ans){
	
	query=gcnew MySqlCommand("UPDATE database.orders SET reviewed= '"+ "yes" + "' , status = '"+ans+"' WHERE id = '"+ orderid +"' ",conn);
	data = execute(query);	
}

MySqlDataReader^ database::stock_item_list()
{
	query = gcnew MySqlCommand("SELECT * FROM database.stock LEFT JOIN database.items ON items.id = stock.item_id",conn);
	data = execute(query);
	return data;
}

String^ database::time_stamp()
{
	query = gcnew MySqlCommand("SELECT date_format(NOW(),'%Y-%m-%d %T')",conn);
	data = execute(query);
	String^ time;
	while(data->Read())
		time = data->GetString(0);
	return time;
}

void database::transfer_order(int orderid, String^ status){ 
	// int orderid = get_order_id(userid,dattime); 
	query=gcnew MySqlCommand("UPDATE database.orders SET reviewed= '"+ "yes" + "' , status = '"+ status +"' WHERE id = '"+ orderid +"' ",conn);
	execute(query); 
	conn->Close();
	if (status == "accepted"){ 
		update_stock(orderid); 
	} 
} 

void database::update_stock(int orderid){ 
	// int orderid = get_order_id(userid,dattime); 
	
	query=gcnew MySqlCommand("SELECT item_id, quantity FROM database.order_details WHERE order_id = '"+ orderid +"' ",conn); 
	data = execute(query);
	int count = 0;
	while (data->Read()) { 
		count++;
	} 
	//MessageBox::Show(System::Convert::ToString(count));
	int* itemid = new int[count]; 
	int* price= new int[count];
	int* quantity= new int[count]; 
	conn->Close();
	query=gcnew MySqlCommand("SELECT item_id, quantity FROM database.order_details WHERE order_id = '"+ orderid +"' ",conn); 
	data = execute(query);
	int index = 0;
	while (data->Read()) { 
		itemid[index] = data->GetInt32("item_id"); 
		quantity[index] = data->GetInt32("quantity");
		//MessageBox::Show(System::Convert::ToString(quantity[index]));
		index++;
	} 
	//MessageBox::Show("changing");
	conn->Close();
	for (int i=0;i<count;i++) { 
		//MessageBox::Show(System::Convert::ToString(quantity[i]));
		query=gcnew MySqlCommand("UPDATE database.stock SET quantity = quantity + "+ quantity[i] +" WHERE item_id = '"+ itemid[i] +"' ",conn);
		data = execute(query); 
		conn->Close();
	}
}

void database::transfer_order_customer(int orderid, String^ status){ 
	// int orderid = get_order_id(userid,dattime); 
	query=gcnew MySqlCommand("UPDATE database.orders SET reviewed= '"+ "yes" + "' , status = '"+ status +"' WHERE id = '"+ orderid +"' ",conn);
	execute(query); 
	conn->Close();
	if (status == "accepted"){ 
		update_stock_customer(orderid); 
	} 
} 

void database::update_stock_customer(int orderid){ 
	// int orderid = get_order_id(userid,dattime); 

	query=gcnew MySqlCommand("SELECT item_id, quantity FROM database.order_details WHERE order_id = '"+ orderid +"' ",conn); 
	data = execute(query);
	int count = 0;
	while (data->Read()) { 
		count++;
	} 
	//MessageBox::Show(System::Convert::ToString(count));
	int* itemid = new int[count]; 
	int* price= new int[count];
	int* quantity= new int[count]; 
	conn->Close();
	query=gcnew MySqlCommand("SELECT item_id, quantity FROM database.order_details WHERE order_id = '"+ orderid +"' ",conn); 
	data = execute(query);
	int index = 0;
	while (data->Read()) { 
		itemid[index] = data->GetInt32("item_id"); 
		quantity[index] = data->GetInt32("quantity");
		//MessageBox::Show(System::Convert::ToString(quantity[index]));
		index++;
	} 
	//MessageBox::Show("changing");
	conn->Close();
	for (int i=0;i<count;i++) { 
		//MessageBox::Show(System::Convert::ToString(quantity[i]));
		query=gcnew MySqlCommand("UPDATE database.stock SET quantity = quantity - "+ quantity[i] +" WHERE item_id = '"+ itemid[i] +"' ",conn);
		data = execute(query); 
		conn->Close();
	}
}
