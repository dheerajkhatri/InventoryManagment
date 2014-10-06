#pragma once
#include "database.h"
#include <vector>

namespace newone {

#pragma  region namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma  endregion

#pragma region Manager class
	/// <summary>
	/// Summary for Manager
	/// </summary>
	public ref class Manager : public System::Windows::Forms::Form
	{

#pragma  region Constructor
	public:
		Manager(void)
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
		~Manager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int* orderlist;

	protected: 
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage2;



	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage4;
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






	private: System::ComponentModel::IContainer^  components;

	protected: 

#pragma  endregion

#pragma  region Members


	protected: 

	protected: 
	protected: 
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma  endregion

#pragma region Form Designer
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::StripLine^  stripLine1 = (gcnew System::Windows::Forms::DataVisualization::Charting::StripLine());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0, 
				L"0,0,0"));
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(772, 476);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Change";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 3);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->BackColor = System::Drawing::Color::MistyRose;
			this->splitContainer3->Panel1->Controls->Add(this->label14);
			this->splitContainer3->Panel1->Controls->Add(this->numericUpDown2);
			this->splitContainer3->Panel1->Controls->Add(this->numericUpDown1);
			this->splitContainer3->Panel1->Controls->Add(this->button4);
			this->splitContainer3->Panel1->Controls->Add(this->comboBox1);
			this->splitContainer3->Panel1->Controls->Add(this->label7);
			this->splitContainer3->Panel1->Controls->Add(this->button3);
			this->splitContainer3->Panel1->Controls->Add(this->label6);
			this->splitContainer3->Panel1->Controls->Add(this->label5);
			this->splitContainer3->Panel1->Controls->Add(this->label4);
			this->splitContainer3->Panel1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->splitContainer3->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Manager::splitContainer3_Panel1_Paint);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->BackColor = System::Drawing::Color::Linen;
			this->splitContainer3->Panel2->Controls->Add(this->label15);
			this->splitContainer3->Panel2->Controls->Add(this->numericUpDown5);
			this->splitContainer3->Panel2->Controls->Add(this->button5);
			this->splitContainer3->Panel2->Controls->Add(this->numericUpDown4);
			this->splitContainer3->Panel2->Controls->Add(this->numericUpDown3);
			this->splitContainer3->Panel2->Controls->Add(this->textBox8);
			this->splitContainer3->Panel2->Controls->Add(this->textBox5);
			this->splitContainer3->Panel2->Controls->Add(this->label13);
			this->splitContainer3->Panel2->Controls->Add(this->label12);
			this->splitContainer3->Panel2->Controls->Add(this->label11);
			this->splitContainer3->Panel2->Controls->Add(this->label10);
			this->splitContainer3->Panel2->Controls->Add(this->label9);
			this->splitContainer3->Panel2->Controls->Add(this->label8);
			this->splitContainer3->Size = System::Drawing::Size(766, 470);
			this->splitContainer3->SplitterDistance = 188;
			this->splitContainer3->TabIndex = 0;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(165, 158);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 11);
			this->label14->TabIndex = 14;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(564, 74);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 18);
			this->numericUpDown2->TabIndex = 12;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(351, 72);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 18);
			this->numericUpDown1->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button4->Location = System::Drawing::Point(556, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Set Max";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Manager::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(164, 68);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 19);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Manager::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkKhaki;
			this->label7->Location = System::Drawing::Point(47, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(433, 36);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Change Items Min-Max Value";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Location = System::Drawing::Point(340, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Set Min";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Manager::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(511, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Max";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(311, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 20);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Min";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(49, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Item name";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(288, 239);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 16;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(165, 188);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 20);
			this->numericUpDown5->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button5->Location = System::Drawing::Point(545, 230);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Add item in Databse";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Manager::button5_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(480, 93);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 14;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(480, 139);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 13;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(165, 92);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(164, 141);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 7;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(381, 139);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 20);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Max";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(381, 94);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 20);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Min";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(65, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 20);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Category";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(69, 188);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 20);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Barcode";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(65, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 20);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Item Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkKhaki;
			this->label8->Location = System::Drawing::Point(59, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(211, 33);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Add New Items";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(772, 476);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Retailer Orders";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel1->Controls->Add(this->splitContainer2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(766, 470);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->listBox1);
			this->splitContainer2->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Manager::splitContainer2_Panel1_Paint);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer2->Size = System::Drawing::Size(760, 417);
			this->splitContainer2->SplitterDistance = 176;
			this->splitContainer2->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(176, 417);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Manager::listBox1_SelectedIndexChanged_3);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(580, 417);
			this->dataGridView1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				30)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				30)));
			this->tableLayoutPanel2->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label3, 3, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 426);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(760, 41);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SandyBrown;
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(155, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Reject";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Manager::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Accept";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Manager::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Snow;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(307, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 41);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Total Cost";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(535, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 41);
			this->label3->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(772, 476);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Status of the Objects";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->chart1);
			this->splitContainer1->Size = System::Drawing::Size(766, 470);
			this->splitContainer1->SplitterDistance = 52;
			this->splitContainer1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Goldenrod;
			this->label1->Location = System::Drawing::Point(243, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Status of Items Available in Stock";
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"Items";
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			stripLine1->Text = L"sdsds";
			chartArea1->AxisX2->StripLines->Add(stripLine1);
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"checking legend";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->BackSecondaryColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->ChartArea = L"ChartArea1";
			series1->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series1->Legend = L"checking legend";
			series1->MarkerColor = System::Drawing::Color::Maroon;
			series1->MarkerSize = 10;
			series1->Name = L"Min";
			dataPoint1->IsValueShownAsLabel = false;
			dataPoint1->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataPoint1->LabelFormat = L"";
			series1->Points->Add(dataPoint1);
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series1->YValuesPerPoint = 3;
			series2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"checking legend";
			series2->MarkerSize = 10;
			series2->Name = L"Quantity";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series2->YValuesPerPoint = 3;
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"checking legend";
			series3->Name = L"Max";
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series3->YValuesPerPoint = 3;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(766, 414);
			this->chart1->TabIndex = 1;
			this->chart1->Tag = L"";
			this->chart1->Text = L"chart1";
			title1->Alignment = System::Drawing::ContentAlignment::BottomRight;
			title1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::BottomRight;
			title1->DockedToChartArea = L"ChartArea1";
			title1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			title1->Name = L"Title1";
			this->chart1->Titles->Add(title1);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(780, 502);
			this->tabControl1->TabIndex = 1;
			this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &Manager::tabControl1_Selected);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->name);
			this->tabPage4->Controls->Add(this->Naam);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->UserName);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->New_Password);
			this->tabPage4->Controls->Add(this->Old_Password);
			this->tabPage4->Controls->Add(this->logout);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(772, 476);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"profile";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(58, 53);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(35, 13);
			this->name->TabIndex = 20;
			this->name->Text = L"Name";
			// 
			// Naam
			// 
			this->Naam->AutoSize = true;
			this->Naam->Location = System::Drawing::Point(139, 53);
			this->Naam->Name = L"Naam";
			this->Naam->Size = System::Drawing::Size(35, 13);
			this->Naam->TabIndex = 19;
			this->Naam->Text = L"label3";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(58, 29);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"User Name";
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Location = System::Drawing::Point(139, 29);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(35, 13);
			this->UserName->TabIndex = 17;
			this->UserName->Text = L"label3";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(334, 53);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 13);
			this->label17->TabIndex = 16;
			this->label17->Text = L"New Password";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(340, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(72, 13);
			this->label18->TabIndex = 15;
			this->label18->Text = L"Old Password";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// New_Password
			// 
			this->New_Password->Location = System::Drawing::Point(446, 50);
			this->New_Password->Name = L"New_Password";
			this->New_Password->PasswordChar = '*';
			this->New_Password->Size = System::Drawing::Size(119, 20);
			this->New_Password->TabIndex = 14;
			// 
			// Old_Password
			// 
			this->Old_Password->Location = System::Drawing::Point(446, 84);
			this->Old_Password->Name = L"Old_Password";
			this->Old_Password->PasswordChar = '*';
			this->Old_Password->Size = System::Drawing::Size(119, 20);
			this->Old_Password->TabIndex = 13;
			// 
			// logout
			// 
			this->logout->Location = System::Drawing::Point(296, 158);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(54, 25);
			this->logout->TabIndex = 11;
			this->logout->Text = L"Log Out";
			this->logout->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &Manager::logout_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(372, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(54, 25);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Change Password";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Manager::button6_Click);
			// 
			// Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 502);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Manager";
			this->Text = L"Manager";
			this->Load += gcnew System::EventHandler(this, &Manager::Manager_Load);
			this->tabPage3->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region Event Handlers
	public : String^ Customer_Name;
	private : database^ dat;

	private: System::Void tableLayoutPanel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void tableLayoutPanel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void listBox1_SelectedIndexChanged_2(System::Object^  sender, System::EventArgs^  e) {
			 }



	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void Manager_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Schart1->Hide();
				 String^ itemname;
				 double min,max,quantity;
				 database^ dat = gcnew database;
				 MySqlDataReader^ data = dat->fill_chart();
				 data->Read();
				 while(data->Read()){
					 itemname=data->GetString(0);
					 min=data->GetDouble(1);
					 max=data->GetDouble(2);
					 quantity=data->GetDouble(3);
					 //this->chart1->da
					 //min=temp1*100/(temp1+temp2+temp3);
					 //max=temp2*100/(temp1+temp2+temp3);
					 //quantity=temp3*100/(temp1+temp2+temp3); 
					 if(quantity > min){

					 }
					// MessageBox::Show(System::Convert::ToString(min)+System::Convert::ToString(max)+System::Convert::ToString(quantity));
					 //MessageBox::Show(System::Convert::ToString(itemname));
					 //MessageBox::Show(System::Convert::ToString(quantity));
					 //MessageBox::Show(System::Convert::ToString(max));
					  this->chart1->Series["Min"]->Points->AddXY(itemname,min);
						this->chart1->Series["Quantity"]->Points->AddXY(itemname,quantity);
							this->chart1->Series["Max"]->Points->AddXY(itemname,max);
					 //this->chart1->Series["Series3"]->Points->AddY(quantity);

				 }
				 //this->chart1->ChartAreas[0]->AxisX->Minimum = 0;  			
				 //this->chart1->ChartAreas[0]->AxisX->Maximum = 360;  
				 // this->chart1->ChartAreas[0]->AxisX->Title="Name of the Object";
				 // this->chart1->ChartAreas[0]->AxisY>Title="Min-Max Values of Obejct";
				 //this->chart1->ChartAreas[0]->AxisY->Minimum = 0;  
				 //this->chart1->ChartAreas[0]->AxisY->Maximum = 100; 

			 }

	private: System::Void tabControl1_Selected(System::Object^  sender, System::Windows::Forms::TabControlEventArgs^  e) {
				 int userid;
				 String^ Naam2;

				 switch( e->TabPageIndex )
				 {
				 case 0:
					 this->chart1->Show();

					 break;

				 case 1:

					 this->fill_itemsinlist();


					 break;

				 case 2:

					 fillcombo();
					 break;

				 case 3: 
					 dat=gcnew database;
					 this->UserName->Text=Customer_Name;
					 userid = this->dat->user_id(Customer_Name);
					 dat = gcnew database;
					 Naam2 = this->dat->get_user_name(userid);
					 this->Naam->Text = Naam2;
					 //dat = gcnew database;
					 break;
				 default:

					 break;
				 }
			 }

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 }






#pragma  endregion
	private: System::Void splitContainer2_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }

	private: System::Void fill_itemsinlist(){
				 dataGridView1->Rows->Clear();
				 dataGridView1->Refresh();
				 dataGridView1->ColumnCount = 5;
				 dataGridView1->ColumnHeadersVisible = true;
				 DataGridViewCellStyle ^ columnHeaderStyle = gcnew DataGridViewCellStyle;
				 columnHeaderStyle->BackColor = Color::Aqua;
				 columnHeaderStyle->Font = gcnew System::Drawing::Font( "Verdana",10,FontStyle::Bold );
				 dataGridView1->ColumnHeadersDefaultCellStyle = columnHeaderStyle;

				 dataGridView1->Columns[ 0 ]->Name = "Order Id";
				 dataGridView1->Columns[ 1 ]->Name = "Name";
				 dataGridView1->Columns[ 2 ]->Name = "Quantity";
				 dataGridView1->Columns[ 3 ]->Name = "Price";
				 dataGridView1->Columns[ 4 ]->Name = "Total";


				 database^ dat = gcnew database;
				 MySqlDataReader^ data = dat->fill_list();
				 this->listBox1->Items->Clear();
				 Int32 sizeoflist=0;

				 while(data->Read()){														 						  
					 this->listBox1->Items->Add(data->GetString("name"));
					 sizeoflist++; 
				 }				 
				 int i=0;
				 dat = gcnew database;
				 data = dat->fill_list();
				 orderlist = new int[sizeoflist];
				 while(data->Read())
				 {
					 orderlist[i++]= data->GetInt32(0);

				 }

			 }

	private: System::Void listBox1_SelectedIndexChanged_3(System::Object^  sender, System::EventArgs^  e) {
				 String^ name;
				 dataGridView1->Rows->Clear();
				 int user_id,quantity,price;
				 int selectedindex =  this->listBox1->SelectedIndex;
				 //MessageBox::Show(System::Convert::ToString(orderlist[selectedindex]));
				 if(listBox1->SelectedItem){
					 String^ curItem = listBox1->SelectedItem->ToString();

					 database^ dat = gcnew database;
					 MySqlDataReader^ data = dat->find_griduserid(curItem);
					 data->Read(); user_id=data->GetInt32(0);
					 data->Close();

					 database^ dat1 = gcnew database;
					 MySqlDataReader^ data1 = dat1->get_orders(user_id);
					 data1->Read();
					 database^ dat2 = gcnew database;				 
					 MySqlDataReader^ data2 = dat2->order_detais(System::Convert::ToInt32(orderlist[selectedindex]));
					 int net_total=0;
					 while(data2->Read()){
						 name=data2->GetString("name"); price=data2->GetInt32("price"); quantity=data2->GetInt32("quantity");
						 //MessageBox::Show(name + price + quantity );
						 int idx=dataGridView1->Rows->Add();
						 DataGridViewRow^ row = dataGridView1->Rows[idx];
						 row->Cells["order id"]->Value= orderlist[selectedindex];
						 row->Cells["name"]->Value= name;
						 row->Cells["quantity"]->Value= quantity;
						 row->Cells["price"]->Value= price;
						 row->Cells["total"]->Value=price*quantity;
						 net_total+=price*quantity;

					 }

					 label3->Text=Convert::ToString(net_total);
					 this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
						 static_cast<System::Byte>(0)));

				 }
			 }

	private: System::Void splitContainer3_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 int selectedIndex = comboBox1->SelectedIndex;
				 Object^ selectedItem = comboBox1->SelectedItem;
				 database^ dat = gcnew database;
				 MySqlDataReader^ data= dat->retrieve_minmax(selectedItem->ToString());
				 data->Read();
				 if(comboBox1->SelectedIndex>=0){
					 //MessageBox::Show(selectedItem->ToString());
					 numericUpDown1->Value=(data->GetDecimal(0));
					 numericUpDown2->Value=(data->GetDecimal(1));
				 } 
			 }


	private:System :: Void fillcombo(){
				this->comboBox1->Items->Clear();
				database^ dat = gcnew database;
				MySqlDataReader^ data= dat->item_list();
				while(data->Read()){
					this->comboBox1->Items->Add(data->GetString(1));
				}
			}


	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 label14->Text="";
				 int selectedIndex = comboBox1->SelectedIndex;
				 Object^ selectedItem = comboBox1->SelectedItem;
				 if(comboBox1->SelectedIndex<0 ){
					 label14->Text="please select an item!";
				 } else{
					 database^ dat = gcnew database;
					 dat->setmin(selectedItem->ToString(),System::Convert::ToString(numericUpDown1->Value));  //numericUpDown2->Value->ToInt32()  ???????????
				 }
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 label14->Text="";
				 int selectedIndex = comboBox1->SelectedIndex;
				 Object^ selectedItem = comboBox1->SelectedItem;
				 if(comboBox1->SelectedIndex<0 ){
					 label14->Text="please select an item!";
				 } else {
					 database^ dat = gcnew database;
					 dat->setmax(selectedItem->ToString(),System::Convert::ToString(numericUpDown2->Value));   //numericUpDown2->Value->ToInt32()  ??????????????

				 }
			 }

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 label15->Text="";
				 if(textBox5->Text =="" ||  textBox8->Text ==""){
					 label15->Text = "please fill all values";
				 } else {
					 database^ dat = gcnew database;
					 dat->additem(textBox8->Text->ToString(),System::Convert::ToString(numericUpDown5->Value),textBox5->Text->ToString(),System::Convert::ToString(numericUpDown4->Value),System::Convert::ToString(numericUpDown3->Value));
					 //dat->additem(textBox8->Text->ToString(),14,textBox5->Text->ToString(),13,12);
					 MessageBox::Show("item succefully added in database!");
					 fillcombo();
				 }
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int selectedIndex = listBox1->SelectedIndex;
				 Object^ selectedItem = listBox1->SelectedItem;			 
				 database^ dat = gcnew database;

				 if(selectedIndex >= 0){
					 dat->changereview(orderlist[selectedIndex],"accepted");
					 // MessageBox::Show(System::Convert::ToString(orderlist[selectedIndex]));
					 fill_itemsinlist();
					 MessageBox::Show("request accepted!");
				 }

				 else {
					 MessageBox::Show("some error occured!");
				 }




			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 int selectedIndex = listBox1->SelectedIndex;
				 Object^ selectedItem = listBox1->SelectedItem;			 
				 database^ dat = gcnew database;

				 if(selectedIndex >= 0){
					 dat->changereview(orderlist[selectedIndex],"rejected");
					 // MessageBox::Show(System::Convert::ToString(orderlist[selectedIndex]));
					 fill_itemsinlist();
					 MessageBox::Show("request rejected!");
				 }

				 else {
					 MessageBox::Show("some error occured!");
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

