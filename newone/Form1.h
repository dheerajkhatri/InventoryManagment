#pragma once
#include "Customer.h"
#include "Manager.h"
#include "Retailer1.h"
#include "database.h"
#include "SignUp1.h"
#include "Admin.h"
namespace newone {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected: 
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TableLayoutPanel^  Password_Panel;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TextBox^  User_ID;
	private: System::Windows::Forms::TextBox^  Password;


	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Password_Panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->User_ID = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->Password_Panel->SuspendLayout();
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
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 85)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(728, 462);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->Password_Panel, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 72);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(722, 387);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 4;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				25)));
			this->tableLayoutPanel3->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox3, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox4, 3, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(716, 303);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(173, 297);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(182, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(173, 297);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(361, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(173, 297);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(540, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(173, 297);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// Password_Panel
			// 
			this->Password_Panel->BackColor = System::Drawing::Color::DodgerBlue;
			this->Password_Panel->ColumnCount = 1;
			this->Password_Panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->Password_Panel->Controls->Add(this->splitContainer1, 0, 0);
			this->Password_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Password_Panel->Location = System::Drawing::Point(3, 312);
			this->Password_Panel->Name = L"Password_Panel";
			this->Password_Panel->RowCount = 1;
			this->Password_Panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->Password_Panel->Size = System::Drawing::Size(716, 72);
			this->Password_Panel->TabIndex = 1;
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
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer1->Size = System::Drawing::Size(710, 66);
			this->splitContainer1->SplitterDistance = 345;
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
			this->splitContainer2->Panel1->Controls->Add(this->User_ID);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->Password);
			this->splitContainer2->Size = System::Drawing::Size(345, 66);
			this->splitContainer2->SplitterDistance = 29;
			this->splitContainer2->TabIndex = 0;
			// 
			// User_ID
			// 
			this->User_ID->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->User_ID->Location = System::Drawing::Point(0, 9);
			this->User_ID->Name = L"User_ID";
			this->User_ID->Size = System::Drawing::Size(345, 20);
			this->User_ID->TabIndex = 0;
			this->User_ID->Text = L"User ID";
			this->User_ID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->User_ID->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::User_ID_MouseClick);
			// 
			// Password
			// 
			this->Password->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Password->Location = System::Drawing::Point(0, 13);
			this->Password->Name = L"Password";
			this->Password->PasswordChar = '*';
			this->Password->Size = System::Drawing::Size(345, 20);
			this->Password->TabIndex = 0;
			this->Password->Text = L"Password";
			this->Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Password->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Password_MouseClick);
			this->Password->TextChanged += gcnew System::EventHandler(this, &Form1::Password_TextChanged);
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->button2);
			this->splitContainer3->Size = System::Drawing::Size(361, 66);
			this->splitContainer3->SplitterDistance = 29;
			this->splitContainer3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Location = System::Drawing::Point(0, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(361, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button2->Location = System::Drawing::Point(0, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(361, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DodgerBlue;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(722, 69);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inventory Manager";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 462);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Form1";
			this->Text = L"Inventory Manager";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->Password_Panel->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private : int User;
	private : database^ user;
			  String^ password;
	private : SignUp^ ss;
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox2->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox3->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox4->BorderStyle = BorderStyle::FixedSingle;
				 //log in coding is there...
				 ss->user_type = "customer";
				 this->pictureBox1->BorderStyle = BorderStyle::Fixed3D;
				 this->Password_Panel->Show();
				 User=1;
			 }			 
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox2->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox3->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox4->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox2->BorderStyle = BorderStyle::Fixed3D;
				 this->Password_Panel->Show();
				 ss->user_type="retailer";
				 User=2;
			 }
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox2->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox3->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox4->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox3->BorderStyle = BorderStyle::Fixed3D;
				 this->Password_Panel->Show();
				 ss->user_type="manager";
				 User=3;
			 }
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox2->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox3->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox4->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox4->BorderStyle = BorderStyle::Fixed3D;
				 this->Password_Panel->Show();
				 ss->user_type="admin";
				 User=4;
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox2->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox3->BorderStyle = BorderStyle::FixedSingle;
				 this->pictureBox4->BorderStyle = BorderStyle::FixedSingle;
				 this->Password_Panel->Hide();
				 user = gcnew database;
				 ss = gcnew SignUp;

				 password="";
				 User=-1;
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 user= gcnew database;
				 Customer^ Cus;
				 Manager^ Manag;
				 Retailer1^ Retail;
				 Admin^ Adm;
				 if(this->User_ID->Text=="")
					 MessageBox::Show("Please Enter Your Id");
				 else if(this->Password->Text=="")
					 MessageBox::Show("Please Enter Your Password");
				 else
				 {
					 switch(User)
					 {
					 case 1:
						 if(this->user->verify_user(this->User_ID->Text->ToString(),this->Password->Text->ToString(),"customer"))
						 {	
							 this->button2->Enabled = true;
							 Cus=gcnew Customer;
							 Cus->Show();
							 Cus->Customer_Name = this->User_ID->Text->ToString();
							 this->Hide();
						 }
						 else
							 MessageBox::Show("User_Name And Password Is Not Correct");
						 break;
					 case 2:
						 if(this->user->verify_user(this->User_ID->Text->ToString(),this->Password->Text->ToString(),"retailer"))
						 {	
							 this->button2->Enabled = true;
							 Retail=gcnew Retailer1;
							 Retail->Show();
							 Retail->Customer_Name = this->User_ID->Text->ToString();
							 this->Hide();
						 }
						 else
							 MessageBox::Show("User_Name And Password Is Not Correct");
						 break;
					 case 3:
						 if(this->user->verify_user(this->User_ID->Text->ToString(),this->Password->Text->ToString(),"manager"))
						 {		
							 this->button2->Enabled = false;

							 Manag=gcnew Manager;
							 Manag->Show();
							 Manag->Customer_Name = this->User_ID->Text->ToString();
							 this->Hide();
						 }
						 else
							 MessageBox::Show("User_Name And Password Is Not Correct");
						 break;
					 case 4:
						 if(this->user->verify_user(this->User_ID->Text->ToString(),this->Password->Text->ToString(),"admin"))
						 {	
							 this->button2->Enabled = false;
							 Adm=gcnew Admin;
							 Adm->Show();
							 Adm->Customer_Name = this->User_ID->Text->ToString();
							 this->Hide();
						 }
						 else
							 MessageBox::Show("User_Name And Password Is Not Correct");
						 break;
					 default:
						 MessageBox::Show("Error Has Occurred Please Report To Software Team");
						 break;
					 }
				 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 ss->Show();
				 this->Hide();
			 }

	private: System::Void Password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void User_ID_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 }
	private: System::Void Password_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 }
	};
}

