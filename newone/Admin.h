#pragma once
#include "database.h"
namespace newone {

#pragma region namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

#pragma endregion

#pragma region Admin class
	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
#pragma  region Constructor
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma  endregion

#pragma  region Members
	protected: 

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;


	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::DataGridView^  grid_tables;

	private: System::Windows::Forms::ComboBox^  combo_tables;



	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Label^  Naam;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  UserName;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  New_Password;
	private: System::Windows::Forms::TextBox^  Old_Password;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::Button^  button6;





















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma  endregion

#pragma region Methods



	private: System::Void fill_combo(){
				 database^ dat = gcnew database;
				 MySqlDataReader^ data = dat->list_tables();
				 while(data->Read()){
					 this->combo_tables->Items->Add(data->GetString(0)->ToUpperInvariant());
					 // MessageBox::Show(data->GetString());
				 }
			 }
	private: System::Void show_table(){
				 String^ table_name = combo_tables->SelectedItem->ToString()->ToLowerInvariant();
				 // MessageBox::Show(table_name);
				 database^ dat = gcnew database();
				 dat->browse_table(table_name);

				 // MessageBox::Show("SELECT * FROM database."+table_name->ToString()->ToLowerInvariant()+";");
				 MySqlCommand^ query=gcnew MySqlCommand("SELECT * FROM database."+table_name->ToString()->ToLowerInvariant()+"",dat->conn);

				 try
				 {
					 MySqlDataAdapter^ dap = gcnew MySqlDataAdapter();
					 dap->SelectCommand = query;
					 DataTable^ table = gcnew DataTable();
					 dap->Fill(table);
					 BindingSource^ source = gcnew BindingSource();
					 source->DataSource = table;
					 grid_tables->DataSource = source;
					 dap->Update(table);

				 }
				 catch (Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
#pragma endregion

#pragma region Form Designer
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
				 this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
				 this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
				 this->combo_tables = (gcnew System::Windows::Forms::ComboBox());
				 this->grid_tables = (gcnew System::Windows::Forms::DataGridView());
				 this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
				 this->name = (gcnew System::Windows::Forms::Label());
				 this->Naam = (gcnew System::Windows::Forms::Label());
				 this->label16 = (gcnew System::Windows::Forms::Label());
				 this->UserName = (gcnew System::Windows::Forms::Label());
				 this->label17 = (gcnew System::Windows::Forms::Label());
				 this->label18 = (gcnew System::Windows::Forms::Label());
				 this->New_Password = (gcnew System::Windows::Forms::TextBox());
				 this->Old_Password = (gcnew System::Windows::Forms::TextBox());
				 this->logout = (gcnew System::Windows::Forms::Button());
				 this->button6 = (gcnew System::Windows::Forms::Button());
				 this->tabControl1->SuspendLayout();
				 this->tabPage3->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
				 this->splitContainer1->Panel1->SuspendLayout();
				 this->splitContainer1->Panel2->SuspendLayout();
				 this->splitContainer1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grid_tables))->BeginInit();
				 this->tabPage4->SuspendLayout();
				 this->tabPage5->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->label1->Location = System::Drawing::Point(68, 10);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(35, 13);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Sales";
				 this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 this->label1->Click += gcnew System::EventHandler(this, &Admin::label1_Click);
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(109, 62);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(131, 21);
				 this->button1->TabIndex = 1;
				 this->button1->Text = L"button1";
				 this->button1->UseVisualStyleBackColor = true;
				 // 
				 // tabControl1
				 // 
				 this->tabControl1->Controls->Add(this->tabPage3);
				 this->tabControl1->Controls->Add(this->tabPage4);
				 this->tabControl1->Controls->Add(this->tabPage5);
				 this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tabControl1->Location = System::Drawing::Point(0, 0);
				 this->tabControl1->Name = L"tabControl1";
				 this->tabControl1->SelectedIndex = 0;
				 this->tabControl1->Size = System::Drawing::Size(1023, 485);
				 this->tabControl1->TabIndex = 0;
				 this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::tabControl1_SelectedIndexChanged);
				 this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &Admin::tabControl1_Selected);
				 // 
				 // tabPage3
				 // 
				 this->tabPage3->Controls->Add(this->splitContainer1);
				 this->tabPage3->Location = System::Drawing::Point(4, 22);
				 this->tabPage3->Name = L"tabPage3";
				 this->tabPage3->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage3->Size = System::Drawing::Size(1015, 459);
				 this->tabPage3->TabIndex = 2;
				 this->tabPage3->Text = L"Browse Database";
				 this->tabPage3->UseVisualStyleBackColor = true;
				 this->tabPage3->Click += gcnew System::EventHandler(this, &Admin::tabPage3_Click);
				 // 
				 // splitContainer1
				 // 
				 this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->splitContainer1->Location = System::Drawing::Point(3, 3);
				 this->splitContainer1->Name = L"splitContainer1";
				 // 
				 // splitContainer1.Panel1
				 // 
				 this->splitContainer1->Panel1->Controls->Add(this->combo_tables);
				 // 
				 // splitContainer1.Panel2
				 // 
				 this->splitContainer1->Panel2->Controls->Add(this->grid_tables);
				 this->splitContainer1->Size = System::Drawing::Size(1009, 453);
				 this->splitContainer1->SplitterDistance = 126;
				 this->splitContainer1->TabIndex = 2;
				 // 
				 // combo_tables
				 // 
				 this->combo_tables->FormattingEnabled = true;
				 this->combo_tables->Location = System::Drawing::Point(3, 3);
				 this->combo_tables->Name = L"combo_tables";
				 this->combo_tables->Size = System::Drawing::Size(121, 21);
				 this->combo_tables->TabIndex = 0;
				 this->combo_tables->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::combo_tables_SelectedIndexChanged);
				 // 
				 // grid_tables
				 // 
				 this->grid_tables->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->grid_tables->BorderStyle = System::Windows::Forms::BorderStyle::None;
				 this->grid_tables->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->grid_tables->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->grid_tables->Location = System::Drawing::Point(0, 0);
				 this->grid_tables->Name = L"grid_tables";
				 this->grid_tables->Size = System::Drawing::Size(879, 453);
				 this->grid_tables->TabIndex = 1;
				 // 
				 // tabPage4
				 // 
				 this->tabPage4->BackColor = System::Drawing::Color::LightCoral;
				 this->tabPage4->Controls->Add(this->label7);
				 this->tabPage4->Controls->Add(this->label6);
				 this->tabPage4->Controls->Add(this->button3);
				 this->tabPage4->Controls->Add(this->comboBox1);
				 this->tabPage4->Controls->Add(this->label5);
				 this->tabPage4->Controls->Add(this->button2);
				 this->tabPage4->Controls->Add(this->textBox3);
				 this->tabPage4->Controls->Add(this->textBox2);
				 this->tabPage4->Controls->Add(this->label4);
				 this->tabPage4->Controls->Add(this->label3);
				 this->tabPage4->Controls->Add(this->label2);
				 this->tabPage4->Controls->Add(this->textBox1);
				 this->tabPage4->Location = System::Drawing::Point(4, 22);
				 this->tabPage4->Name = L"tabPage4";
				 this->tabPage4->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage4->Size = System::Drawing::Size(1015, 459);
				 this->tabPage4->TabIndex = 3;
				 this->tabPage4->Text = L"Manage Manager";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Harrington", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label7->Location = System::Drawing::Point(25, 272);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(138, 22);
				 this->label7->TabIndex = 11;
				 this->label7->Text = L"Delete Manager";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Font = (gcnew System::Drawing::Font(L"Harrington", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label6->Location = System::Drawing::Point(14, 19);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(123, 22);
				 this->label6->TabIndex = 10;
				 this->label6->Text = L"Add Manager";
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(383, 339);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(125, 23);
				 this->button3->TabIndex = 9;
				 this->button3->Text = L"Delete Manager";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
				 this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Location = System::Drawing::Point(160, 339);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(121, 21);
				 this->comboBox1->TabIndex = 8;
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->ForeColor = System::Drawing::Color::Red;
				 this->label5->Location = System::Drawing::Point(338, 226);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(0, 13);
				 this->label5->TabIndex = 7;
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(383, 172);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 23);
				 this->button2->TabIndex = 6;
				 this->button2->Text = L"Add Manger";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
				 // 
				 // textBox3
				 // 
				 this->textBox3->Location = System::Drawing::Point(181, 120);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(100, 20);
				 this->textBox3->TabIndex = 5;
				 // 
				 // textBox2
				 // 
				 this->textBox2->Location = System::Drawing::Point(181, 175);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->PasswordChar = '*';
				 this->textBox2->Size = System::Drawing::Size(100, 20);
				 this->textBox2->TabIndex = 4;
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label4->Location = System::Drawing::Point(65, 120);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(94, 23);
				 this->label4->TabIndex = 3;
				 this->label4->Text = L"User Name";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label3->Location = System::Drawing::Point(65, 175);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(78, 23);
				 this->label3->TabIndex = 2;
				 this->label3->Text = L"Password";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label2->Location = System::Drawing::Point(65, 75);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(52, 23);
				 this->label2->TabIndex = 1;
				 this->label2->Text = L"Name";
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(181, 75);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(100, 20);
				 this->textBox1->TabIndex = 0;
				 // 
				 // tabPage5
				 // 
				 this->tabPage5->Controls->Add(this->name);
				 this->tabPage5->Controls->Add(this->Naam);
				 this->tabPage5->Controls->Add(this->label16);
				 this->tabPage5->Controls->Add(this->UserName);
				 this->tabPage5->Controls->Add(this->label17);
				 this->tabPage5->Controls->Add(this->label18);
				 this->tabPage5->Controls->Add(this->New_Password);
				 this->tabPage5->Controls->Add(this->Old_Password);
				 this->tabPage5->Controls->Add(this->logout);
				 this->tabPage5->Controls->Add(this->button6);
				 this->tabPage5->Location = System::Drawing::Point(4, 22);
				 this->tabPage5->Name = L"tabPage5";
				 this->tabPage5->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage5->Size = System::Drawing::Size(1015, 459);
				 this->tabPage5->TabIndex = 4;
				 this->tabPage5->Text = L"profile";
				 this->tabPage5->UseVisualStyleBackColor = true;
				 // 
				 // name
				 // 
				 this->name->AutoSize = true;
				 this->name->Location = System::Drawing::Point(112, 55);
				 this->name->Name = L"name";
				 this->name->Size = System::Drawing::Size(35, 13);
				 this->name->TabIndex = 30;
				 this->name->Text = L"Name";
				 // 
				 // Naam
				 // 
				 this->Naam->AutoSize = true;
				 this->Naam->Location = System::Drawing::Point(193, 55);
				 this->Naam->Name = L"Naam";
				 this->Naam->Size = System::Drawing::Size(35, 13);
				 this->Naam->TabIndex = 29;
				 this->Naam->Text = L"label3";
				 // 
				 // label16
				 // 
				 this->label16->AutoSize = true;
				 this->label16->Location = System::Drawing::Point(112, 31);
				 this->label16->Name = L"label16";
				 this->label16->Size = System::Drawing::Size(60, 13);
				 this->label16->TabIndex = 28;
				 this->label16->Text = L"User Name";
				 // 
				 // UserName
				 // 
				 this->UserName->AutoSize = true;
				 this->UserName->Location = System::Drawing::Point(193, 31);
				 this->UserName->Name = L"UserName";
				 this->UserName->Size = System::Drawing::Size(35, 13);
				 this->UserName->TabIndex = 27;
				 this->UserName->Text = L"label3";
				 // 
				 // label17
				 // 
				 this->label17->AutoSize = true;
				 this->label17->Location = System::Drawing::Point(388, 55);
				 this->label17->Name = L"label17";
				 this->label17->Size = System::Drawing::Size(78, 13);
				 this->label17->TabIndex = 26;
				 this->label17->Text = L"New Password";
				 this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label18
				 // 
				 this->label18->AutoSize = true;
				 this->label18->Location = System::Drawing::Point(394, 86);
				 this->label18->Name = L"label18";
				 this->label18->Size = System::Drawing::Size(72, 13);
				 this->label18->TabIndex = 25;
				 this->label18->Text = L"Old Password";
				 this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // New_Password
				 // 
				 this->New_Password->Location = System::Drawing::Point(500, 52);
				 this->New_Password->Name = L"New_Password";
				 this->New_Password->PasswordChar = '*';
				 this->New_Password->Size = System::Drawing::Size(119, 20);
				 this->New_Password->TabIndex = 24;
				 // 
				 // Old_Password
				 // 
				 this->Old_Password->Location = System::Drawing::Point(500, 86);
				 this->Old_Password->Name = L"Old_Password";
				 this->Old_Password->PasswordChar = '*';
				 this->Old_Password->Size = System::Drawing::Size(119, 20);
				 this->Old_Password->TabIndex = 23;
				 // 
				 // logout
				 // 
				 this->logout->Location = System::Drawing::Point(350, 160);
				 this->logout->Name = L"logout";
				 this->logout->Size = System::Drawing::Size(54, 25);
				 this->logout->TabIndex = 21;
				 this->logout->Text = L"Log Out";
				 this->logout->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
				 this->logout->UseVisualStyleBackColor = true;
				 this->logout->Click += gcnew System::EventHandler(this, &Admin::logout_Click);
				 // 
				 // button6
				 // 
				 this->button6->Location = System::Drawing::Point(426, 160);
				 this->button6->Name = L"button6";
				 this->button6->Size = System::Drawing::Size(54, 25);
				 this->button6->TabIndex = 22;
				 this->button6->Text = L"Change Password";
				 this->button6->UseVisualStyleBackColor = true;
				 this->button6->Click += gcnew System::EventHandler(this, &Admin::button6_Click);
				 // 
				 // Admin
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1023, 485);
				 this->Controls->Add(this->tabControl1);
				 this->Name = L"Admin";
				 this->Text = L"Admin";
				 this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
				 this->tabControl1->ResumeLayout(false);
				 this->tabPage3->ResumeLayout(false);
				 this->splitContainer1->Panel1->ResumeLayout(false);
				 this->splitContainer1->Panel2->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
				 this->splitContainer1->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grid_tables))->EndInit();
				 this->tabPage4->ResumeLayout(false);
				 this->tabPage4->PerformLayout();
				 this->tabPage5->ResumeLayout(false);
				 this->tabPage5->PerformLayout();
				 this->ResumeLayout(false);

			 }
#pragma endregion

#pragma  region Event Handlers
	public : String^ Customer_Name;
	private : database^ dat;

	private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
			fill_combo();
			 }
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }


	private: System::Void tabControl1_Selected(System::Object^  sender, System::Windows::Forms::TabControlEventArgs^  e) {
				 int userid;
				 String^ Naam2;
				 // MessageBox::Show("Tab index " + e->TabPageIndex + " was selected");
				 switch ( e->TabPageIndex )
				 {
				 //case 0:
					// // MessageBox::Show("Tab index " + e->TabPageIndex + " was selected");
					// break;
				 //case 1:
					// // MessageBox::Show("Tab index " + e->TabPageIndex + " was selected");
					// break;
				 case 0:
					 // MessageBox::Show("Tab index " + e->TabPageIndex + " was selected");
					 fill_combo();
					 break;
				 case 1:
					 fillcombo();
					 // MessageBox::Show("Tab index " + e->TabPageIndex + " was selected");
					 // fill_items();
					 break;
				 case 2:
					 dat=gcnew database;
					 this->UserName->Text=Customer_Name;
					 userid = this->dat->user_id(Customer_Name);
					 dat = gcnew database;
					 Naam2 = this->dat->get_user_name(userid);
					 this->Naam->Text = Naam2;
					 break;
				 default:

					 break;
				 }
			 }
	private: System::Void splitter1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
			 }
	private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void combo_tables_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 show_table();
			 }

	private: System::Void grid_order_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 }

	private: System::Void list_order_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 // place_order();
			 }

#pragma  endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 label5->Text="";
				 if(textBox1->Text=="" || textBox2->Text=="" ||textBox3->Text=="" ){
					 label5->Text="please fill all the information";
				 } else {
					 database^ dat = gcnew database;
					 dat->addmanager(textBox1->Text->ToString(),textBox3->Text->ToString(),textBox2->Text->ToString(),"manager");
					 MessageBox::Show("manager succefully added!");
					 fillcombo();

				 }

			 }

	private:System :: Void fillcombo(){
				this->comboBox1->Items->Clear();
				database^ dat = gcnew database;
				MySqlDataReader^ data= dat->manager_list();
				while(data->Read()){
					this->comboBox1->Items->Add(data->GetString(1));
				}
			}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 int selectedIndex = comboBox1->SelectedIndex;
				 Object^ selectedItem = comboBox1->SelectedItem;
				 database^ dat = gcnew database;
				 if(selectedIndex < 0)
					 MessageBox::Show("Item not present");
				 else
				 {
				 dat->deletemanager(selectedItem->ToString());
				 MessageBox::Show("manager succefully deleted");
				 fillcombo();
				 }
			 }
	private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Application :: Restart();
				 this->Close();
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 dat=gcnew database;
				 int userid = this->dat->user_id(Customer_Name);
				 dat = gcnew database;
				 if(this->dat->change_password(userid,this->Old_Password->Text,this->New_Password->Text))
					 MessageBox::Show("Password Has been Changed");
				 else
					 MessageBox::Show("Error : Please Check the Old Password");
			 }
	};
#pragma  endregion
}
