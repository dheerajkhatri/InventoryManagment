#pragma once
#include "database.h"

namespace newone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Customer
	/// </summary>
	public ref class Customer : public System::Windows::Forms::Form
	{
	public:
		Customer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Customer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  Panel_Main;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::ListBox^  Items;

	private: System::Windows::Forms::SplitContainer^  splitContainer3;

	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  Quantity_Meter;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::DataGridView^  Table1;





	private: System::Windows::Forms::SplitContainer^  splitContainer5;
	private: System::Windows::Forms::Button^  Place_Order;









	private: System::Windows::Forms::SplitContainer^  splitContainer6;
	private: System::Windows::Forms::Button^  Remove_item;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  serial_total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total_Items;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total_Price;






	private: System::Windows::Forms::SplitContainer^  splitContainer7;
	private: System::Windows::Forms::ListBox^  Bills;
	private: System::Windows::Forms::SplitContainer^  splitContainer8;
	private: System::Windows::Forms::DataGridView^  Table2;




	private: System::Windows::Forms::DataGridView^  Total_Table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Bill_Total_Items;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Bill_Total_Price;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Bill_Item_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Bill_Item_Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Bill_Item_Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  serial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Item_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price_per_Unit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total_Value;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  New_Password;
	private: System::Windows::Forms::TextBox^  Old_Password;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  UserName;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Label^  Naam;







































	protected: 




















	protected: 










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Panel_Main = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->Items = (gcnew System::Windows::Forms::ListBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Quantity_Meter = (gcnew System::Windows::Forms::NumericUpDown());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->Table1 = (gcnew System::Windows::Forms::DataGridView());
			this->serial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Item_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price_per_Unit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total_Value = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->Place_Order = (gcnew System::Windows::Forms::Button());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->Remove_item = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->serial_total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total_Items = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total_Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer7 = (gcnew System::Windows::Forms::SplitContainer());
			this->Bills = (gcnew System::Windows::Forms::ListBox());
			this->splitContainer8 = (gcnew System::Windows::Forms::SplitContainer());
			this->Table2 = (gcnew System::Windows::Forms::DataGridView());
			this->Bill_Item_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Bill_Item_Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Bill_Item_Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total_Table = (gcnew System::Windows::Forms::DataGridView());
			this->Bill_Total_Items = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Bill_Total_Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->name = (gcnew System::Windows::Forms::Label());
			this->Naam = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->New_Password = (gcnew System::Windows::Forms::TextBox());
			this->Old_Password = (gcnew System::Windows::Forms::TextBox());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Panel_Main->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Quantity_Meter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Table1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer7))->BeginInit();
			this->splitContainer7->Panel1->SuspendLayout();
			this->splitContainer7->Panel2->SuspendLayout();
			this->splitContainer7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer8))->BeginInit();
			this->splitContainer8->Panel1->SuspendLayout();
			this->splitContainer8->Panel2->SuspendLayout();
			this->splitContainer8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Table2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Total_Table))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Panel_Main
			// 
			this->Panel_Main->Controls->Add(this->tabPage1);
			this->Panel_Main->Controls->Add(this->tabPage2);
			this->Panel_Main->Controls->Add(this->tabPage3);
			this->Panel_Main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Main->Location = System::Drawing::Point(0, 0);
			this->Panel_Main->Name = L"Panel_Main";
			this->Panel_Main->SelectedIndex = 0;
			this->Panel_Main->Size = System::Drawing::Size(984, 438);
			this->Panel_Main->TabIndex = 0;
			this->Panel_Main->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &Customer::Panel_Main_Selected);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(976, 412);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Buy Items";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer1->Size = System::Drawing::Size(970, 406);
			this->splitContainer1->SplitterDistance = 276;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->Items);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(276, 406);
			this->splitContainer2->SplitterDistance = 366;
			this->splitContainer2->TabIndex = 0;
			// 
			// Items
			// 
			this->Items->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Items->FormattingEnabled = true;
			this->Items->Location = System::Drawing::Point(0, 0);
			this->Items->Name = L"Items";
			this->Items->Size = System::Drawing::Size(276, 366);
			this->Items->TabIndex = 0;
			this->Items->SelectedIndexChanged += gcnew System::EventHandler(this, &Customer::listBox1_SelectedIndexChanged);
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->Quantity_Meter);
			this->splitContainer3->Size = System::Drawing::Size(276, 36);
			this->splitContainer3->SplitterDistance = 89;
			this->splitContainer3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Set Quantity";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Customer::button1_Click);
			// 
			// Quantity_Meter
			// 
			this->Quantity_Meter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Quantity_Meter->Location = System::Drawing::Point(0, 0);
			this->Quantity_Meter->Name = L"Quantity_Meter";
			this->Quantity_Meter->Size = System::Drawing::Size(183, 20);
			this->Quantity_Meter->TabIndex = 0;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->Table1);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->splitContainer5);
			this->splitContainer4->Size = System::Drawing::Size(690, 406);
			this->splitContainer4->SplitterDistance = 346;
			this->splitContainer4->TabIndex = 0;
			// 
			// Table1
			// 
			this->Table1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->Table1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->serial, this->ID, 
				this->Item_Name, this->Price_per_Unit, this->Quantity, this->Total_Value});
			this->Table1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Table1->Location = System::Drawing::Point(0, 0);
			this->Table1->Name = L"Table1";
			this->Table1->Size = System::Drawing::Size(690, 346);
			this->Table1->TabIndex = 1;
			// 
			// serial
			// 
			this->serial->HeaderText = L"S.N.";
			this->serial->Name = L"serial";
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			// 
			// Item_Name
			// 
			this->Item_Name->HeaderText = L"Item Name";
			this->Item_Name->Name = L"Item_Name";
			// 
			// Price_per_Unit
			// 
			this->Price_per_Unit->HeaderText = L"Price Per Unit";
			this->Price_per_Unit->Name = L"Price_per_Unit";
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->Name = L"Quantity";
			// 
			// Total_Value
			// 
			this->Total_Value->HeaderText = L"Total";
			this->Total_Value->Name = L"Total_Value";
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->Location = System::Drawing::Point(0, 0);
			this->splitContainer5->Name = L"splitContainer5";
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->Place_Order);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->splitContainer6);
			this->splitContainer5->Size = System::Drawing::Size(690, 56);
			this->splitContainer5->SplitterDistance = 227;
			this->splitContainer5->TabIndex = 0;
			// 
			// Place_Order
			// 
			this->Place_Order->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Place_Order->Location = System::Drawing::Point(0, 0);
			this->Place_Order->Name = L"Place_Order";
			this->Place_Order->Size = System::Drawing::Size(227, 56);
			this->Place_Order->TabIndex = 0;
			this->Place_Order->Text = L"Place Order";
			this->Place_Order->UseVisualStyleBackColor = true;
			this->Place_Order->Click += gcnew System::EventHandler(this, &Customer::button2_Click);
			// 
			// splitContainer6
			// 
			this->splitContainer6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer6->Location = System::Drawing::Point(0, 0);
			this->splitContainer6->Name = L"splitContainer6";
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->Remove_item);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer6->Size = System::Drawing::Size(459, 56);
			this->splitContainer6->SplitterDistance = 129;
			this->splitContainer6->TabIndex = 0;
			// 
			// Remove_item
			// 
			this->Remove_item->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Remove_item->Location = System::Drawing::Point(0, 0);
			this->Remove_item->Name = L"Remove_item";
			this->Remove_item->Size = System::Drawing::Size(129, 56);
			this->Remove_item->TabIndex = 0;
			this->Remove_item->Text = L"Remove Item";
			this->Remove_item->UseVisualStyleBackColor = true;
			this->Remove_item->Click += gcnew System::EventHandler(this, &Customer::Remove_item_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->serial_total, 
				this->Total_Items, this->Total_Price});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(326, 56);
			this->dataGridView1->TabIndex = 1;
			// 
			// serial_total
			// 
			this->serial_total->HeaderText = L"S.N.";
			this->serial_total->Name = L"serial_total";
			// 
			// Total_Items
			// 
			this->Total_Items->HeaderText = L"Total Items";
			this->Total_Items->Name = L"Total_Items";
			// 
			// Total_Price
			// 
			this->Total_Price->HeaderText = L"Total Price";
			this->Total_Price->Name = L"Total_Price";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer7);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(976, 412);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Previous Bill";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// splitContainer7
			// 
			this->splitContainer7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer7->Location = System::Drawing::Point(3, 3);
			this->splitContainer7->Name = L"splitContainer7";
			// 
			// splitContainer7.Panel1
			// 
			this->splitContainer7->Panel1->Controls->Add(this->Bills);
			// 
			// splitContainer7.Panel2
			// 
			this->splitContainer7->Panel2->Controls->Add(this->splitContainer8);
			this->splitContainer7->Size = System::Drawing::Size(970, 406);
			this->splitContainer7->SplitterDistance = 222;
			this->splitContainer7->TabIndex = 0;
			// 
			// Bills
			// 
			this->Bills->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Bills->FormattingEnabled = true;
			this->Bills->Location = System::Drawing::Point(0, 0);
			this->Bills->Name = L"Bills";
			this->Bills->Size = System::Drawing::Size(222, 406);
			this->Bills->TabIndex = 0;
			this->Bills->SelectedIndexChanged += gcnew System::EventHandler(this, &Customer::Bills_SelectedIndexChanged);
			// 
			// splitContainer8
			// 
			this->splitContainer8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer8->Location = System::Drawing::Point(0, 0);
			this->splitContainer8->Name = L"splitContainer8";
			this->splitContainer8->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer8.Panel1
			// 
			this->splitContainer8->Panel1->Controls->Add(this->Table2);
			// 
			// splitContainer8.Panel2
			// 
			this->splitContainer8->Panel2->Controls->Add(this->Total_Table);
			this->splitContainer8->Size = System::Drawing::Size(744, 406);
			this->splitContainer8->SplitterDistance = 342;
			this->splitContainer8->TabIndex = 0;
			// 
			// Table2
			// 
			this->Table2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Bill_Item_Name, 
				this->Bill_Item_Quantity, this->Bill_Item_Price, this->Total});
			this->Table2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Table2->Location = System::Drawing::Point(0, 0);
			this->Table2->Name = L"Table2";
			this->Table2->Size = System::Drawing::Size(744, 342);
			this->Table2->TabIndex = 1;
			// 
			// Bill_Item_Name
			// 
			this->Bill_Item_Name->HeaderText = L"Item Name";
			this->Bill_Item_Name->Name = L"Bill_Item_Name";
			// 
			// Bill_Item_Quantity
			// 
			this->Bill_Item_Quantity->HeaderText = L"Item Quantity";
			this->Bill_Item_Quantity->Name = L"Bill_Item_Quantity";
			// 
			// Bill_Item_Price
			// 
			this->Bill_Item_Price->HeaderText = L"Price Per Unit";
			this->Bill_Item_Price->Name = L"Bill_Item_Price";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			// 
			// Total_Table
			// 
			this->Total_Table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Total_Table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Bill_Total_Items, 
				this->Bill_Total_Price});
			this->Total_Table->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Total_Table->Location = System::Drawing::Point(0, 0);
			this->Total_Table->Name = L"Total_Table";
			this->Total_Table->Size = System::Drawing::Size(744, 60);
			this->Total_Table->TabIndex = 0;
			// 
			// Bill_Total_Items
			// 
			this->Bill_Total_Items->HeaderText = L"Total Item";
			this->Bill_Total_Items->Name = L"Bill_Total_Items";
			// 
			// Bill_Total_Price
			// 
			this->Bill_Total_Price->HeaderText = L"Total_Price";
			this->Bill_Total_Price->Name = L"Bill_Total_Price";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->name);
			this->tabPage3->Controls->Add(this->Naam);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->UserName);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->New_Password);
			this->tabPage3->Controls->Add(this->Old_Password);
			this->tabPage3->Controls->Add(this->logout);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(976, 412);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Profile";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(45, 38);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(35, 13);
			this->name->TabIndex = 10;
			this->name->Text = L"Name";
			// 
			// Naam
			// 
			this->Naam->AutoSize = true;
			this->Naam->Location = System::Drawing::Point(126, 38);
			this->Naam->Name = L"Naam";
			this->Naam->Size = System::Drawing::Size(35, 13);
			this->Naam->TabIndex = 9;
			this->Naam->Text = L"label3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"User Name";
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Location = System::Drawing::Point(126, 14);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(35, 13);
			this->UserName->TabIndex = 7;
			this->UserName->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(321, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"New Password";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(327, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Old Password";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// New_Password
			// 
			this->New_Password->Location = System::Drawing::Point(433, 35);
			this->New_Password->Name = L"New_Password";
			this->New_Password->PasswordChar = '*';
			this->New_Password->Size = System::Drawing::Size(119, 20);
			this->New_Password->TabIndex = 4;
			// 
			// Old_Password
			// 
			this->Old_Password->Location = System::Drawing::Point(433, 69);
			this->Old_Password->Name = L"Old_Password";
			this->Old_Password->PasswordChar = '*';
			this->Old_Password->Size = System::Drawing::Size(119, 20);
			this->Old_Password->TabIndex = 3;
			// 
			// logout
			// 
			this->logout->Location = System::Drawing::Point(283, 143);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(54, 25);
			this->logout->TabIndex = 0;
			this->logout->Text = L"Log Out";
			this->logout->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &Customer::logout_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(359, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 25);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Change Password";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Customer::button2_Click_1);
			// 
			// Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 438);
			this->Controls->Add(this->Panel_Main);
			this->Name = L"Customer";
			this->Text = L"Customer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Customer::Customer_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Customer::Customer_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Customer::Customer_Load);
			this->Panel_Main->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Quantity_Meter))->EndInit();
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Table1))->EndInit();
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer7->Panel1->ResumeLayout(false);
			this->splitContainer7->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer7))->EndInit();
			this->splitContainer7->ResumeLayout(false);
			this->splitContainer8->Panel1->ResumeLayout(false);
			this->splitContainer8->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer8))->EndInit();
			this->splitContainer8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Table2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Total_Table))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public : String^ Customer_Name;

	private : database^ dat;	
			  MySqlDataReader^ data;
			  MySqlDataReader^ data2;

	private: System::Void Customer_Load(System::Object^  sender, System::EventArgs^  e) {
				 dat = gcnew database;
				 this->Panel_Main->SelectedIndex = 0;
				 data= this->dat->stock_item_list();
				 while(data->Read())
				 {
					 this->Items->Items->Add(data->GetString("name"));
				 }
				 //				 Checking=new int[Items->Items->Count];
				 //				 int i;
				 dataGridView1->Rows->Add();
				 DataGridViewRow^ row = dataGridView1->Rows[0];
				 row->Cells["Total_Price"]->Value="0";
				 row->Cells["Total_Items"]->Value="0";
				 row->Cells["serial_total"]->Value="1";
			 }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Cursor::Current = System::Windows::Forms::Cursors::WaitCursor;	
				 if(this->Items->SelectedIndex != -1)
				 {
					 String^ curItem = this->Items->SelectedItem->ToString();				
					 System::Decimal limit;
					 dat = gcnew database;
					 data=this->dat->item_details(curItem);
					 while(data->Read())
					 {
						 limit=data->GetDecimal("quantity");
					 }
					 this->Quantity_Meter->Minimum = 1;
					 this->Quantity_Meter->Maximum = limit ;
				 }
				 else
				 {
				 }
				 //MessageBox::Show("Please Select The Item In the List");
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(Table1->Rows->Count-1 != 0)
				 {
					 if(MessageBox::Show("Do You Want To Place Order?","Inventory Manager",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
					 {
						 System::DateTime now = System::DateTime::Now;
						 //MessageBox::Show(System::Convert::ToString(now));
						 dat = gcnew database;
						 String^ time = dat->time_stamp(); 
						 // MessageBox::Show(time);
						 dat = gcnew database;
						 int id=this->dat->user_id(Customer_Name);
						 dat = gcnew database;
						 int orderid = dat->get_order_id(id,time);
						 int i;
						 for(i=0;i<this->Table1->Rows->Count-1;i++)
						 {
							 DataGridViewRow^ row = Table1->Rows[i];
							 //MessageBox::Show(System::Convert::ToString(id));
							 //MessageBox::Show(time);
							 //MessageBox::Show(row->Cells["Price_per_Unit"]->Value->ToString());
							 //MessageBox::Show(row->Cells["ID"]->Value->ToString());
							 //MessageBox::Show(row->Cells["Quantity"]->Value->ToString());
							 dat = gcnew database;
							 this->dat->place_order(orderid,id,time,System::Convert::ToDouble(row->Cells["Price_per_Unit"]->Value->ToString()),System::Convert::ToInt32(row->Cells["ID"]->Value->ToString()),System::Convert::ToInt32(row->Cells["Quantity"]->Value->ToString()));
						 }
						 MessageBox::Show("Order Is Successfully Placed");
						 dat->conn->Close();
						  dat = gcnew database;
						  dat->transfer_order_customer(orderid, "accepted");
						 //int i;
						 for(i=Table1->Rows->Count-2;i>=0;i--)
						 {
							 Table1->Rows->RemoveAt(i);
						 }
						 DataGridViewRow^ row = dataGridView1->Rows[0];
						 row->Cells["Total_Items"]->Value = "0";
						 row->Cells["Total_Price"]->Value = "0";
					 }
				 }
				 else
					 MessageBox::Show("Please Select Some Item To Buy First!");
			 }
	private: System::Void Panel_Main_Selected(System::Object^  sender, System::Windows::Forms::TabControlEventArgs^  e) {
				 int i;
				 int userid;
				 String^ Naam2;
				 switch ( e->TabPageIndex )
				 {
				 case 0 :
					 dat = gcnew database;

					 for(i=0;i<this->Items->Items->Count;)
					 {
						 this->Items->Items->RemoveAt(i);
					 }
					 data= this->dat->stock_item_list();
					 while(data->Read())
					 {
						 this->Items->Items->Add(data->GetString("name"));
					 }
					 break;
				 case 1 :
					 dat = gcnew database;
					 for(i=0;i<this->Bills->Items->Count;)
					 {
						 this->Bills->Items->RemoveAt(i);
					 }
					 userid = this->dat->user_id(Customer_Name);
					 dat = gcnew database;
					 data = this->dat->get_orders(userid);
					 while(data->Read())
					 {
						 dat = gcnew database;
						 this->Bills->Items->Add("Bill (Id = "+data->GetString("id")+" )");
					 }
					 break;
				 case 2 :
					 dat=gcnew database;
					 this->UserName->Text=Customer_Name;
					 userid = this->dat->user_id(Customer_Name);
					 dat = gcnew database;
					 Naam2 = this->dat->get_user_name(userid);
					 this->Naam->Text = Naam2;
					 //dat = gcnew database;
					 break;
				 default :
					 break;
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->Items->SelectedIndex != -1)
				 {
					 System::Windows::Forms::Cursor::Current = System::Windows::Forms::Cursors::WaitCursor;
					 dat = gcnew database;
					 data = this->dat->item_details(this->Items->SelectedItem->ToString());
					 dat = gcnew database;
					 int id = this->dat->item_id(this->Items->SelectedItem->ToString());
					 bool flag=true;
					 int i;
					 for(i=0;i<this->Table1->Rows->Count;i++)
					 {
						 DataGridViewRow^ row = Table1->Rows[i];
						 if(row->Cells["Item_Name"]->Value == this->Items->SelectedItem->ToString())
						 {					 					 
							 row->Cells["Quantity"]->Value = this->Quantity_Meter->Value;
							 while(data->Read())
							 {
								 row->Cells["Total_Value"]->Value = (data->GetDecimal("price_buy") * this->Quantity_Meter->Value);
							 }
							 flag=false;
						 }
					 }
					 if(flag==true)
					 {
						 int idx = Table1->Rows->Add();
						 DataGridViewRow^ row = Table1->Rows[idx];
						 while(data->Read())
						 {
							 row->Cells["serial"]->Value=idx;
							 row->Cells["Item_Name"]->Value= this->Items->SelectedItem->ToString();
							 row->Cells["Quantity"]->Value = this->Quantity_Meter->Value;
							 row->Cells["Price_per_Unit"]->Value=data->GetString("price_buy");
							 row->Cells["ID"]->Value = id;					
							 row->Cells["Total_Value"]->Value = (data->GetDecimal("price_buy") * this->Quantity_Meter->Value);

						 }
					 }

					 //int row3 = this->Table1->Rows->Count;
					 //MessageBox::Show(System::Convert::ToString(row3
					 DataGridViewRow^ row2 = dataGridView1->Rows[0];
					 row2->Cells["Total_Price"]->Value = "0";
					 for(i=0;i<this->Table1->Rows->Count-1;i++)
					 {
						 DataGridViewRow^ row = Table1->Rows[i];

						 row2->Cells["serial_total"]->Value=1;
						 row2->Cells["Total_Items"]->Value = i+1;
						 //MessageBox::Show(System::Convert::ToString(i));
						 //MessageBox::Show(row->Cells["Total_Value"]->Value->ToString());
						 //MessageBox::Show(row2->Cells["Total_Price"]->Value->ToString());
						 row2->Cells["Total_Price"]->Value = (Int32::Parse(row->Cells["Total_Value"]->Value->ToString()) + Int32::Parse(row2->Cells["Total_Price"]->Value->ToString()));
					 }
				 }
				 else
					 MessageBox::Show("Please Select The Item First From Item's List");
			 }
	private: System::Void Remove_item_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(Table1->Rows->Count-1 != 0)
				 {
					 if(Table1->SelectedRows->Count == 0)
					 {
						 MessageBox::Show("Please select The Row by Clicking on Left most Part of the Bill");
					 }
					 for each (DataGridViewRow^ row in Table1->SelectedRows)
					 {
						 Table1->Rows->Remove(row);
					 }
					 int i;
					 DataGridViewRow^ row2 = dataGridView1->Rows[0];
					 row2->Cells["Total_Price"]->Value = "0";
					 row2->Cells["Total_Items"]->Value = "0";
					 for(i=0;i<this->Table1->Rows->Count-1;i++)
					 {
						 DataGridViewRow^ row = Table1->Rows[i];

						 row2->Cells["serial_total"]->Value=1;
						 row2->Cells["Total_Items"]->Value = i+1;
						 //MessageBox::Show(System::Convert::ToString(i));
						 //MessageBox::Show(row->Cells["Total_Value"]->Value->ToString());
						 //MessageBox::Show(row2->Cells["Total_Price"]->Value->ToString());
						 row2->Cells["Total_Price"]->Value = (Int32::Parse(row->Cells["Total_Value"]->Value->ToString()) + Int32::Parse(row2->Cells["Total_Price"]->Value->ToString()));
					 }
				 }
				 else
					 MessageBox::Show("Please Add An Item First To The Bill!");
			 }

	private: System::Void Bills_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(this->Bills->SelectedIndex != -1)
				 {
					 String^ curBill = this->Bills->SelectedItem->ToString();
					 String^ delimStr = "(=)";
					 array<Char>^ delimeter = delimStr->ToCharArray();
					 array<String^>^ bill_Id;
					 bill_Id=curBill->Split(delimeter);
					 //2
					 int i;
					 for(i=0;i<this->Table2->Rows->Count-1;)
					 {
						 this->Table2->Rows->RemoveAt(i);
					 }
					 //MessageBox::Show(bill_Id[2]);
					 dat= gcnew database;
					 data= this->dat->order_details(System::Convert::ToInt32(bill_Id[2]));
					 while(data->Read())
					 {
						 //MessageBox::Show("Hello");
						 int idx=this->Table2->Rows->Add();
						 DataGridViewRow^ row=this->Table2->Rows[idx];
						 row->Cells["Bill_Item_Name"]->Value = data->GetString("name");
						 row->Cells["Bill_Item_Quantity"]->Value = data->GetString("quantity");
						 row->Cells["Bill_Item_Price"]->Value = data->GetString("price");
						 row->Cells["Total"]->Value = System::Convert::ToInt32(data->GetString("quantity")) * System::Convert::ToInt32(data->GetString("price"));
					 }

					 int titem, tvalue;
					 tvalue=0;
					 titem = Table2->Rows->Count-1;
					 for(i=0;i<Table2->Rows->Count-1;i++)
					 {
						 DataGridViewRow^ row = Table2->Rows[i];
						 tvalue=tvalue + System::Convert::ToInt32(row->Cells["Total"]->Value);
					 }
					 for(i=0;i<Total_Table->Rows->Count-1;i++)
					 {
						 Total_Table->Rows->RemoveAt(0);
					 }
					 Total_Table->Rows->Add();
					 DataGridViewRow^ row = Total_Table->Rows[0];
					 row->Cells["Bill_Total_Items"]->Value=titem;
					 row->Cells["Bill_Total_Price"]->Value=tvalue;
				 }
				 else
				 {
				 }
				 //MessageBox::Show("Please Select The Bill To Show");
			 }
	private: System::Void Customer_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

			 }
	private: System::Void Customer_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

			 }
	private: System::Void Profile_Layout_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Password_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void splitContainer9_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
			 }
	private: System::Void tableLayoutPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Application :: Restart();
				 this->Close();
			 }
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 dat=gcnew database;
				 int userid = this->dat->user_id(Customer_Name);
				 dat = gcnew database;
				 if(this->dat->change_password(userid,this->Old_Password->Text,this->New_Password->Text))
					 MessageBox::Show("Password Has been Changed");
				 else
					 MessageBox::Show("Error : Please Check the Old Password");

			 }
	};
}
