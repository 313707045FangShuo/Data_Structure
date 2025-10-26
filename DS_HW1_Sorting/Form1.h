# define SWAP(x, y, t) (t=x, x=y, y=t)
#include <stdlib.h>
#include <time.h>
#include <string.h>

#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ta;







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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1000,
				0.091));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(20000,
				0.369));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(30000,
				0.795));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint4 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(40000,
				1.466));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint5 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(50000,
				2.283));
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint6 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(10000,
				0.3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint7 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(20000,
				1.22));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint8 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(30000,
				2.859));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint9 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(40000,
				5.411));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint10 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(50000,
				8.373));
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint11 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(10000,
				0.002));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint12 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(20000,
				0.01));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint13 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(30000,
				0.01));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint14 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(40000,
				0.01));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint15 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(50000,
				0.013));
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint16 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(10000,
				0.003));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint17 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(20000,
				0.004));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint18 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(30000,
				0.004));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint19 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(40000,
				0.006));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint20 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(50000,
				0.009));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(20, 126);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"RandomData";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12));
			this->textBox1->Location = System::Drawing::Point(173, 47);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 23);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"10";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox1->Location = System::Drawing::Point(20, 169);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(135, 250);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12));
			this->textBox2->Location = System::Drawing::Point(173, 86);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 23);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"1000";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(173, 126);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Selection Sort";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8));
			this->richTextBox2->Location = System::Drawing::Point(173, 169);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(135, 250);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(331, 53);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 20);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Echo Print";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(331, 91);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(84, 20);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"Self Check";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(328, 126);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Bubble Sort";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8));
			this->richTextBox3->Location = System::Drawing::Point(328, 169);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(135, 250);
			this->richTextBox3->TabIndex = 10;
			this->richTextBox3->Text = L"";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12));
			this->textBox3->Location = System::Drawing::Point(431, 83);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 23);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"1000";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8));
			this->richTextBox4->Location = System::Drawing::Point(478, 169);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(135, 250);
			this->richTextBox4->TabIndex = 13;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(631, 126);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Quick Sort";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8));
			this->richTextBox5->Location = System::Drawing::Point(631, 169);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(135, 250);
			this->richTextBox5->TabIndex = 15;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox5_TextChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(478, 126);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Merge Sort";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(-127, 2);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Data Amount";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(-127, 41);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Max Value";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(277, -32);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 21);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Search Value";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(-127, -32);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 21);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Randomly Generate Data";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// richTextBox6
			// 
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8));
			this->richTextBox6->Location = System::Drawing::Point(577, 13);
			this->richTextBox6->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(188, 94);
			this->richTextBox6->TabIndex = 20;
			this->richTextBox6->Text = L"";
			this->richTextBox6->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox6_TextChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(431, 47);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Binary Search";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabControl1->Location = System::Drawing::Point(-2, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(793, 479);
			this->tabControl1->TabIndex = 23;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->richTextBox6);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->richTextBox2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->richTextBox5);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->richTextBox4);
			this->tabPage1->Controls->Add(this->richTextBox3);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(785, 450);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Sorting Algorithms";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(429, 13);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 21);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Search Data";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(21, 13);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 21);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Create Data Randomly";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(22, 89);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Max Data Value";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(22, 48);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Data Amount";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(785, 450);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Comparison Table";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"微軟正黑體 Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(42, 151);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 16);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Seconds";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"微軟正黑體 Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(604, 418);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 16);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Value Amount";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(253, 151);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(184, 21);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Algorithm Comparison";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(21, 161);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->BorderWidth = 4;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Selection Sort";
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			series1->Points->Add(dataPoint3);
			series1->Points->Add(dataPoint4);
			series1->Points->Add(dataPoint5);
			series2->BorderWidth = 4;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Bubble Sort";
			series2->Points->Add(dataPoint6);
			series2->Points->Add(dataPoint7);
			series2->Points->Add(dataPoint8);
			series2->Points->Add(dataPoint9);
			series2->Points->Add(dataPoint10);
			series3->BorderWidth = 4;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Merge Sort";
			series3->Points->Add(dataPoint11);
			series3->Points->Add(dataPoint12);
			series3->Points->Add(dataPoint13);
			series3->Points->Add(dataPoint14);
			series3->Points->Add(dataPoint15);
			series4->BorderWidth = 4;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Quick Sort";
			series4->Points->Add(dataPoint16);
			series4->Points->Add(dataPoint17);
			series4->Points->Add(dataPoint18);
			series4->Points->Add(dataPoint19);
			series4->Points->Add(dataPoint20);
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(739, 288);
			this->chart1->TabIndex = 1;
			this->chart1->TabStop = false;
			this->chart1->Text = L"Line Table";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column5, this->Column2, this->Column3, this->Column4, this->ta
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 8);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 50;
			this->dataGridView1->RowTemplate->Height = 25;
			this->dataGridView1->Size = System::Drawing::Size(532, 136);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Algo. \\ N.";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 130;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"10000";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"20000";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"30000";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 80;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"40000";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// ta
			// 
			this->ta->HeaderText = L"50000";
			this->ta->MinimumWidth = 8;
			this->ta->Name = L"ta";
			this->ta->Width = 80;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(785, 467);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Selection v.s. Bubble sorts by Shuo, Fang 2025/02/28 Ver. 0.9";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region Utility Methods
	
	array<int>^ data = gcnew array<int>(50000);
	int n, range;
	array<int>^ s_sortedData = gcnew array<int>(data->Length);

	private: System::Void RandData(array<int>^ data, int n, int range) // parameter: data[], value number, value range
	{
		int i;
		for (i = 0; i < n; i++)
		{
			data[i] = rand() % range + 1; //create random value
		}
	}

	private: System::Void TextBox_OnlyNumbers(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// check "Input Only Number" & backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b')
		{
			e->Handled = true;
			MessageBox::Show("Input Only Number!", "Input Error!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void Form1::printData(array<int>^ data, int box, int n, float time) // parameter: data[], richTextBox number, value number, time
	{
		// box number array
		array<System::Windows::Forms::RichTextBox^>^ textBoxes =
		{ this->richTextBox1, this->richTextBox2, this->richTextBox3, this->richTextBox4, this->richTextBox5 };

		// ensure box_number is between 1-5
		if (box < 1 || box > 5) return;

		System::Windows::Forms::RichTextBox^ outputBox = textBoxes[box - 1];

		outputBox->Clear();

		int i;
		if (checkBox1->Checked) {
			for (i = 0; i < n; i++)
			{
				outputBox->AppendText("data[" + i.ToString() + "] = " + data[i].ToString() + "\r\n");
			}
		}
		outputBox->AppendText("CPU time (sec.) = " + time.ToString());
	}

	private: System::Void selfCheck(array<int>^ data, int n, int box)  // parameter: data[], value number, richTextBox number
	{	
		// box number array
		array<System::Windows::Forms::RichTextBox^>^ textBoxes =
		{ this->richTextBox1, this->richTextBox2, this->richTextBox3, this->richTextBox4, this->richTextBox5 };

		// ensure box_number is between 1-5
		if (box < 1 || box > 5) return;

		System::Windows::Forms::RichTextBox^ outputBox = textBoxes[box - 1];

		// if data[i+1] is bigger than data[i] -> error
		int check = 0;
		for (int i = 0; i < n; i++) 
		{
			if (data[i] > data[i + 1]) check= -1;
		}
		check= 1;

		if (check > 0) outputBox->AppendText("\r\ndata is sorted correctly");
		else outputBox->AppendText("\r\ndata isn't sorted correctly");
	}

	private: System::Void selectionSort(array<int>^ data, int n) // parameter: data[], value number
	{
		int i, j, min, temp;
		for(i= 0; i< n; i++)
		{
			min = i; // i store min value position
			for(j= (i+1); j<n; j++)
			{
				if (data[j] < data[min]) // if find smaller value -> replace min value position
					min = j;
			}
			SWAP(data[i], data[min], temp); // swap now position and min value position 
		}
	}

	private: System::Void bubbleSort(array<int>^ data, int n) // parameter: data[], value number
	{
		int i, j, temp;
		bool swapped; // check swaped or not
		for (i = 0; i < n-1; i++)
		{
			swapped = false;
			for (j = 0; j < n-i-1; j++)
			{
				if (data[j] > data[j+1]) // if next value is bigger than this value -> swap
				{
					SWAP(data[j], data[j+1], temp);
					swapped = true;
				}
			}
			if (!swapped) break; // if didn't swap -> data has been sorted -> break
		}
	}
	

	private: System::Void mergeSort_merge(array<int>^ data, int front, int end) // parameter: data[], merge sort front position, merge sort end position 
	{
		int mid = (front + end) / 2;

		int LeftSize = mid- front + 1;
		int RightSize = end - mid;

		//create new array to store temp data (left array, right array) 
		array<int>^ leftArr = gcnew array<int>(LeftSize);
		array<int>^ rightArr = gcnew array<int>(RightSize);

		//copy data into temp array
		for(int i = 0; i < LeftSize; i++)
		{
			leftArr[i] = data[front + i];
		}
		for (int j = 0; j < RightSize; j++)
		{
			rightArr[j] = data[j+ mid+ 1];
		}

		int i = 0, j = 0, k = front;

		// merge two sorted array
		while (i < LeftSize && j < RightSize)
		{
			if (leftArr[i] <= rightArr[j])
			{
				data[k] = leftArr[i];
				i++;
			}
			else
			{
				data[k] = rightArr[j];
				j++;
			}
			k++;
		}

		// (if there's left number)
		while (i < LeftSize)
		{
			data[k] = leftArr[i];
			i++;
			k++;
		}
		while (j < RightSize)
		{
			data[k] = rightArr[j];
			j++;
			k++;
		}
	}

	private: System::Void mergeSort(array<int>^ data, int front, int end) // parameter: data[], merge sort front position, merge sort end position 
	{
		if (front < end) //haven't complete sorting
		{
			int mid = front + (end - front) / 2;
			
			// recursive
			mergeSort(data, front, mid);	//Left: front - mid
			mergeSort(data, mid + 1, end);	//Right: mid+1 - end
			mergeSort_merge(data, front, end);
		}
	}

	private: int quickSort_partition(array<int>^ data, int low, int high) // parameter: data[], quick sort low position, quick sort high position 
	{
		int pivot = data[high];  // last number -> pivot
		int i = low - 1, temp;  // i point < pivot region

		for (int j = low; j < high; j++)
		{
			if (data[j] < pivot)  // if < pivot
			{
				i++;
				SWAP(data[i], data[j], temp);
			}
		}

		int Temp;
		SWAP(data[i + 1], data[high], Temp);

		return i + 1;  // return pivot
	}

	private: System::Void quickSort(array<int>^ data, int low, int high) // parameter: data[], quick sort low position, quick sort high position 
	{
		if (low < high)
		{
			// get pivot
			int pivotIndex = quickSort_partition(data, low, high);

			// recursive
			quickSort(data, low, pivotIndex - 1);
			quickSort(data, pivotIndex + 1, high);
		}
	}

	private: int BinarySearch(array<int>^ data, int value, int start, int end) // parameter: data[], searching value, BinarySearch start position, BinarySearch end position 
	{
		if (start > end) return -1;
		int mid = (start + end) / 2;
		if (data[mid] == value) return mid;		// find target value
		else if (data[mid] > value) return BinarySearch(data, value, start, (mid - 1));		// value is bigger than mid -> searching the left part
		else if (data[mid] < value) return BinarySearch(data, value, mid+ 1, end);				// value is smaller than mid -> searching the left part
	}

	private: System::Void Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->richTextBox1->Clear(); // clear richTextBox1
		clock_t t_begin, t_end; // caculate time consuming
		float time;
		t_begin = clock();
		n = System::Convert::ToInt32(textBox1->Text);
		range = System::Convert::ToInt32(textBox2->Text);
		RandData(data, n, range); // create dandom data
		t_end = clock();
		time = (float)(t_end - t_begin) / CLOCKS_PER_SEC; // caculate time consuming
		printData(data, 1, n, time); // show data at richTextBox1
	}

	private: System::Void Form1::button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->richTextBox2->Clear(); // clear richTextBox2
		clock_t t_begin, t_end; // caculate time consuming
		float time;
		t_begin = clock();
		Array::Copy(data, s_sortedData, data->Length);
		n = System::Convert::ToInt32(textBox1->Text);
		selectionSort(s_sortedData, n); // run selection sort
		t_end = clock();
		time = (float)(t_end - t_begin) / CLOCKS_PER_SEC; // caculate time consuming
		printData(s_sortedData, 2, n, time); // show data at richTextBox2

		if (checkBox2->Checked) selfCheck(s_sortedData, n, 2); // check if sorting correctly 
	}

	private: System::Void Form1::button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->richTextBox3->Clear(); // clear richTextBox3
		clock_t t_begin, t_end; // caculate time consuming
		float time;
		t_begin = clock();
		array<int>^ b_sortedData = gcnew array<int>(data->Length);
		Array::Copy(data, b_sortedData, data->Length);
		n = System::Convert::ToInt32(textBox1->Text);
		bubbleSort(b_sortedData, n);  // run bubble sort
		t_end = clock();
		time = (float)(t_end - t_begin) / CLOCKS_PER_SEC; // caculate time consuming
		printData(b_sortedData, 3, n, time); // show data at richTextBox3

		if (checkBox2->Checked) selfCheck(s_sortedData, n, 3); // check if sorting correctly 
	}

	private: System::Void Form1::button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->richTextBox4->Clear(); // clear richTextBox4
		clock_t t_begin, t_end; // caculate time consuming
		float time;
		t_begin = clock();
		array<int>^ m_sortedData = gcnew array<int>(data->Length);
		Array::Copy(data, m_sortedData, data->Length);
		n = System::Convert::ToInt32(textBox1->Text);
		int front = 0, end = n - 1;
		mergeSort(m_sortedData, front, end); // run merge sort
		t_end = clock();
		time = (float)(t_end - t_begin) / CLOCKS_PER_SEC; // caculate time consuming
		printData(m_sortedData, 4, n, time); // show data at richTextBox4
		if (checkBox2->Checked) selfCheck(s_sortedData, n, 4); // check if sorting correctly
	}

	private: System::Void Form1::button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->richTextBox5->Clear(); // clear richTextBox5
		clock_t t_begin, t_end; // caculate time consuming
		float time;
		t_begin = clock();
		array<int>^ q_sortedData = gcnew array<int>(data->Length);
		Array::Copy(data, q_sortedData, data->Length);
		n = System::Convert::ToInt32(textBox1->Text);
		int front = 0, end = n - 1;
		quickSort(q_sortedData, front, end); // run quick sort
		t_end = clock();
		time = (float)(t_end - t_begin) / CLOCKS_PER_SEC; // caculate time consuming
		printData(q_sortedData, 5, n, time); // show data at richTextBox5
		if (checkBox2->Checked) selfCheck(s_sortedData, n, 5); // check if sorting correctly
	}

	private: System::Void Form1::button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		clock_t t_begin, t_end; // caculate time consuming
		float time;
		t_begin = clock();
		array<int>^ bs_sortedData = gcnew array<int>(data->Length);
		Array::Copy(s_sortedData, bs_sortedData, data->Length);
		n = System::Convert::ToInt32(textBox1->Text);
		int value = System::Convert::ToInt32(textBox3->Text);
		int start = 0, end = n - 1;
		int position = BinarySearch(bs_sortedData, value, start, end);  // run binary search to get value position (selection sort)
		t_end = clock();
		time = (float)(t_end - t_begin) / CLOCKS_PER_SEC; // caculate time consuming
		
		if (position == -1) {
			this->richTextBox6->AppendText( value.ToString() + " has NOT been found.\r\n");
		}
		else {
			this->richTextBox6->AppendText(value.ToString() + " has been found at data[" + position.ToString() + "].\r\n");
		}
		
	}

	private: System::Void Form1::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1::richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1::richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
		// input check
		this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox_OnlyNumbers);
		this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox_OnlyNumbers);
		this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox_OnlyNumbers);

		// set X,Y range 
		this->chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = 10000;
		this->chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = 50000;
		this->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 10000;

		this->chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
		this->chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = 9;
		this->chart1->ChartAreas["ChartArea1"]->AxisY->Interval = 1.5;


		// table data
		array<String^>^ sortingNames = { "Selection Sort", "Bubble Sort", "Merge Sort", "Quick Sort" };
		array<String^>^ timeResults_1 = { "0.091s", "0.300s", "0.002s", "0.003s" };
		array<String^>^ timeResults_2 = { "0.369s", "1.220s", "0.010s", "0.004s" };
		array<String^>^ timeResults_3 = { "0.795s", "2.859s", "0.007s", "0.004s" };
		array<String^>^ timeResults_4 = { "1.466s", "5.411s", "0.010s", "0.006s" };
		array<String^>^ timeResults_5 = { "2.283s", "8.373s", "0.013s", "0.009s" };
		// array<String^>^ complexity = { "O(n^2)", "O(n^2)", "O(n log n)", "O(n log n)" };

		// fill in table
		for (int i = 0; i < sortingNames->Length; i++)
		{
			this->dataGridView1->Rows->Add(sortingNames[i], timeResults_1[i], timeResults_2[i], timeResults_3[i], timeResults_4[i], timeResults_5[i]);
		}
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};

#pragma endregion
}

