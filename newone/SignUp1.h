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
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
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
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  User_Name;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  User_ID;
	private: System::Windows::Forms::TextBox^  Password;
	private: System::Windows::Forms::TextBox^  Password_Confirm;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->User_Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->User_ID = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->Password_Confirm = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(262, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignUp::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(139, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			// 
			// User_Name
			// 
			this->User_Name->Location = System::Drawing::Point(422, 68);
			this->User_Name->Name = L"User_Name";
			this->User_Name->Size = System::Drawing::Size(100, 20);
			this->User_Name->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"UserID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(139, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Confirm Password";
			// 
			// User_ID
			// 
			this->User_ID->Location = System::Drawing::Point(422, 100);
			this->User_ID->Name = L"User_ID";
			this->User_ID->Size = System::Drawing::Size(100, 20);
			this->User_ID->TabIndex = 6;
			// 
			// Password
			// 
			this->Password->Location = System::Drawing::Point(422, 133);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(100, 20);
			this->Password->TabIndex = 7;
			// 
			// Password_Confirm
			// 
			this->Password_Confirm->Location = System::Drawing::Point(422, 168);
			this->Password_Confirm->Name = L"Password_Confirm";
			this->Password_Confirm->Size = System::Drawing::Size(100, 20);
			this->Password_Confirm->TabIndex = 8;
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 303);
			this->Controls->Add(this->Password_Confirm);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->User_ID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->User_Name);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->Load += gcnew System::EventHandler(this, &SignUp::SignUp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public : String^ user_type;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //MessageBox::Show(user_type);
				 if(this->User_Name->Text=="")
					 MessageBox::Show("Please Enter A Name!");
				 else if(this->User_ID->Text=="")
					 MessageBox::Show("Please Enter A Valid user Id!");
				 else if(this->Password->Text=="")
					 MessageBox::Show("Please Enter A Valid Password!");
				 else if(this->Password->Text!=this->Password_Confirm->Text)
					 MessageBox::Show("Password Doesn't Match Please Check!");
				 else
				 {
					 database^ dat = gcnew database;
					 bool data = dat->is_register(this->User_Name->Text,this->User_ID->Text,this->Password->Text,user_type);
					 if(data)
					 {
						 MessageBox::Show("Welcome To Inventory Manager Mr./Mrs. "+User_Name->Text+". You Are Successfully Registered");
						 System::Windows::Forms::Application::Restart();
					 }
					 else
						 MessageBox::Show("Please Select Another UserId,"+User_ID->Text+" Id Already Exist");
				 }
			 }
	private: System::Void SignUp_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
