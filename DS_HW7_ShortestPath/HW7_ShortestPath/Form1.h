#pragma once
#define INF 99999

namespace CppCLRWinFormsProject {

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

			if (graph) {
				for (int i = 0; i < n; ++i)
					delete[] graph[i];
				delete[] graph;
			}

		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;

	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		int** graph;   // adjacency matrix
		array<array<int>^>^ distAllPairs;
		array<array<int>^>^ next;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;

		int n;         // number of nodes

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(336, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1006, 706);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox6);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(998, 677);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"G\'s Adjacent Matrix";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// richTextBox6
			// 
			this->richTextBox6->Location = System::Drawing::Point(6, 4);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(987, 666);
			this->richTextBox6->TabIndex = 12;
			this->richTextBox6->Text = L"";
			this->richTextBox6->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox6_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(998, 677);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Graph in Adjacent Matrix";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(986, 664);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(998, 677);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"SSAD Tables";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(986, 664);
			this->dataGridView2->TabIndex = 15;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView2_CellContentClick);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(998, 677);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"All Pairs";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(6, 6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 27;
			this->dataGridView3->Size = System::Drawing::Size(986, 664);
			this->dataGridView3->TabIndex = 16;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView3_CellContentClick);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(998, 677);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"All Paurs Table";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->tabPage5->Click += gcnew System::EventHandler(this, &Form1::tabPage5_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(6, 6);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 27;
			this->dataGridView4->Size = System::Drawing::Size(986, 664);
			this->dataGridView4->TabIndex = 17;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView4_CellContentClick);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dataGridView5);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(998, 677);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Transitive Closure";
			this->tabPage6->UseVisualStyleBackColor = true;
			this->tabPage6->Click += gcnew System::EventHandler(this, &Form1::tabPage6_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(6, 6);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 27;
			this->dataGridView5->Size = System::Drawing::Size(986, 664);
			this->dataGridView5->TabIndex = 18;
			this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView5_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->richTextBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->richTextBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->richTextBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(10, 81);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(324, 353);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Randomly Generated";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(37, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Generate G";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(168, 216);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(104, 35);
			this->richTextBox5->TabIndex = 10;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(33, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 23);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Scouce no. =";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(168, 170);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(104, 35);
			this->richTextBox4->TabIndex = 8;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(33, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 23);
			this->label5->TabIndex = 9;
			this->label5->Text = L"w(e) =";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(168, 124);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(104, 35);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(33, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"if w(e) >";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(168, 76);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(104, 35);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(33, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"range(w(e)) =";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(168, 31);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(104, 35);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(33, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"n =";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(173, 309);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(147, 27);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Echo Print G";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 309);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(152, 27);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Undirected G";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(10, 449);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(324, 247);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Shortest Path Solution";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(37, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(235, 35);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Transitive Closure";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(37, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(235, 35);
			this->button4->TabIndex = 13;
			this->button4->Text = L"All Pairs";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"新細明體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(37, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 35);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Single Source All Destination";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(15, 43);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(143, 27);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Print Results";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(22, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"G = (V, E)";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1345, 708);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// allPath
	String^ getPath(int u, int v) {
		if (next[u][v] == -1) return "-";
		System::Text::StringBuilder^ path = gcnew System::Text::StringBuilder();
		path->Append(u);
		while (u != v) {
			u = next[u][v];
			path->Append(" -> " + u);
		}
		return path->ToString();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	// Generate Grpah
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		n = Convert::ToInt32(richTextBox1->Text);
		int max_w = Convert::ToInt32(richTextBox2->Text);
		int threshold = Convert::ToInt32(richTextBox3->Text);
		int weight_cap = Convert::ToInt32(richTextBox4->Text);
		bool undirected = checkBox1->Checked;
		bool echo_print = checkBox2->Checked;

		// init graph
		graph = new int* [n];
		for (int i = 0; i < n; ++i)
			graph[i] = new int[n];

		Random^ rnd = gcnew Random();

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (i == j) {
					graph[i][j] = 0;  // self->self =  0
				}
				else {
					int rand_weight = rnd->Next(1, max_w + 1);
					if (rand_weight > threshold) {
						graph[i][j] = rand_weight % weight_cap + 1;
						if (undirected) graph[j][i] = graph[i][j];  // 對稱
					}
					else {
						graph[i][j] = INF;
						if (undirected) graph[j][i] = INF;
					}
				}
			}
		}

		if (echo_print) {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->Append("\t");
			for (int j = 0; j < n; ++j)
				sb->Append(j.ToString() + "\t");
			sb->AppendLine();

			for (int i = 0; i < n; ++i) {
				sb->Append(i.ToString() + "\t");
				for (int j = 0; j < n; ++j) {
					if (graph[i][j] == INF)
						sb->Append("INF\t");
					else
						sb->Append(graph[i][j].ToString() + "\t");
				}
				sb->AppendLine();
			}

			richTextBox6->Font = gcnew System::Drawing::Font("Consolas", 10);
			richTextBox6->Text = sb->ToString();
		}

		MessageBox::Show("Graph generated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		dataGridView1->Columns->Clear();
		dataGridView1->Rows->Clear();

		dataGridView1->ColumnCount = n;
		for (int j = 0; j < n; ++j) {
			dataGridView1->Columns[j]->Name = j.ToString(); // show column title
			dataGridView1->Columns[j]->Width = 60;
		}

		// add row
		for (int i = 0; i < n; ++i) {
			array<String^>^ row = gcnew array<String^>(n);
			for (int j = 0; j < n; ++j) {
				row[j] = (graph[i][j] == INF) ? "INF" : graph[i][j].ToString();
			}
			dataGridView1->Rows->Add(row);
			dataGridView1->Rows[i]->HeaderCell->Value = i.ToString(); // show row title
		}

		dataGridView1->AllowUserToAddRows = false;
		dataGridView1->ReadOnly = true;
		dataGridView1->RowHeadersWidth = 60;
		dataGridView1->Font = gcnew System::Drawing::Font("Consolas", 10);

	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	//  Dijkstra
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int source = Convert::ToInt32(richTextBox5->Text);

		array<int>^ dist = gcnew array<int>(n);
		array<bool>^ visited = gcnew array<bool>(n);
		array<int>^ from = gcnew array<int>(n);
		for (int i = 0; i < n; ++i) {
			dist[i] = graph[source][i];
			visited[i] = false;
			from[i] = (graph[source][i] < INF && i != source) ? source : -1;
		}
		dist[source] = 0;
		visited[source] = true;
		from[source] = -1;

		dataGridView2->Columns->Clear();
		dataGridView2->Rows->Clear();
		dataGridView2->ColumnCount = n;
		for (int j = 0; j < n; ++j) {
			dataGridView2->Columns[j]->Name = j.ToString();
			dataGridView2->Columns[j]->Width = 60;
		}
		dataGridView2->RowHeadersWidth = 60;
		dataGridView2->Font = gcnew System::Drawing::Font("Consolas", 10);

		DataGridViewRow^ initRow = gcnew DataGridViewRow();
		initRow->CreateCells(dataGridView2);
		for (int j = 0; j < n; ++j)
			initRow->Cells[j]->Value = (dist[j] >= INF) ? "99999" : dist[j].ToString();
		dataGridView2->Rows->Add(initRow);

		for (int i = 1; i < n; ++i) {
			int u = -1, minDist = INF;
			for (int j = 0; j < n; ++j) {
				if (!visited[j] && dist[j] < minDist) {
					minDist = dist[j];
					u = j;
				}
			}
			if (u == -1) break;
			visited[u] = true;

			for (int v = 0; v < n; ++v) {
				if (!visited[v] && graph[u][v] < INF && dist[u] + graph[u][v] < dist[v]) {
					dist[v] = dist[u] + graph[u][v];
					from[v] = u;
				}
			}

			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView2);
			for (int j = 0; j < n; ++j)
				row->Cells[j]->Value = (dist[j] >= INF) ? "99999" : dist[j].ToString();
			if (u != -1)
				row->Cells[u]->Style->BackColor = Color::Yellow;
			dataGridView2->Rows->Add(row);
		}

		DataGridViewRow^ fromRow = gcnew DataGridViewRow();
		fromRow->CreateCells(dataGridView2);
		for (int j = 0; j < n; ++j)
			fromRow->Cells[j]->Value = (from[j] == -1) ? "-" : from[j].ToString();
		fromRow->HeaderCell->Value = "from";
		dataGridView2->Rows->Add(fromRow);

		if (checkBox3->Checked) {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			for (int i = 0; i < n; ++i) {
				if (i == source) continue;
				if (dist[i] >= INF) {
					sb->AppendLine("No path from " + source + " to " + i);
					continue;
				}
				sb->Append("The shortest distance from " + source + " to " + i + " is " + dist[i] + " with path ");
				System::Collections::Generic::Stack<int>^ path = gcnew System::Collections::Generic::Stack<int>();
				int v = i;
				while (v != -1) {
					path->Push(v);
					if (from[v] == v) break;
					v = from[v];
				}
				while (path->Count > 0) {
					sb->Append(path->Pop());
					if (path->Count > 0) sb->Append(" --> ");
				}
				sb->AppendLine();
			}
			richTextBox6->Font = gcnew System::Drawing::Font("Consolas", 10);
			richTextBox6->Text = sb->ToString();
			tabControl1->SelectedTab = tabPage1;
		}
		tabControl1->SelectedTab = tabPage3;
	}
	// Floyd-Warshall
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		
		distAllPairs = gcnew array<array<int>^>(n);
		next = gcnew array<array<int>^>(n);
		for (int i = 0; i < n; ++i) {
			distAllPairs[i] = gcnew array<int>(n);
			next[i] = gcnew array<int>(n);
			for (int j = 0; j < n; ++j) {
				distAllPairs[i][j] = graph[i][j];
				next[i][j] = (graph[i][j] < INF && i != j) ? j : -1;
			}
		}

		for (int k = 0; k < n; ++k) {
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					if (distAllPairs[i][k] < INF && distAllPairs[k][j] < INF && distAllPairs[i][k] + distAllPairs[k][j] < distAllPairs[i][j]) {
						distAllPairs[i][j] = distAllPairs[i][k] + distAllPairs[k][j];
						next[i][j] = next[i][k];
					}
				}
			}
		}

		dataGridView3->Columns->Clear();
		dataGridView3->Rows->Clear();
		dataGridView3->ColumnCount = n;
		for (int j = 0; j < n; ++j) {
			dataGridView3->Columns[j]->Name = j.ToString();
			dataGridView3->Columns[j]->Width = 60;
		}
		dataGridView3->RowHeadersWidth = 60;
		dataGridView3->Font = gcnew System::Drawing::Font("Consolas", 10);

		for (int i = 0; i < n; ++i) {
			array<String^>^ row = gcnew array<String^>(n);
			for (int j = 0; j < n; ++j) {
				row[j] = (distAllPairs[i][j] >= INF) ? "INF" : distAllPairs[i][j].ToString();
			}
			dataGridView3->Rows->Add(row);
			dataGridView3->Rows[i]->HeaderCell->Value = i.ToString();
		}

		dataGridView4->Columns->Clear();
		dataGridView4->Rows->Clear();

		dataGridView4->ColumnCount = n;
		for (int j = 0; j < n; ++j) {
			dataGridView4->Columns[j]->Name = j.ToString();
			dataGridView4->Columns[j]->Width = 60;
		}

		dataGridView4->RowHeadersWidth = 60;
		dataGridView4->Font = gcnew System::Drawing::Font("Consolas", 10);

		for (int i = 0; i < n; ++i) {
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView4);

			for (int j = 0; j < n; ++j) {
				row->Cells[j]->Value = (next[i][j] == -1) ? "-" : next[i][j].ToString();
			}

			row->HeaderCell->Value = i.ToString();
			dataGridView4->Rows->Add(row);
		}

		tabControl1->SelectedTab = tabPage4;
	}
	// transitive closure
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// init reach[][] : 0/1
		array<array<int>^>^ reach = gcnew array<array<int>^>(n);
		for (int i = 0; i < n; ++i) {
			reach[i] = gcnew array<int>(n);
			for (int j = 0; j < n; ++j) {
				reach[i][j] = (graph[i][j] < INF) ? 1 : 0;
			}
			reach[i][i] = 1;  // self->self = 1
		}

		for (int k = 0; k < n; ++k) {
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					if (reach[i][k] && reach[k][j])
						reach[i][j] = 1;
				}
			}
		}

		dataGridView5->Columns->Clear();
		dataGridView5->Rows->Clear();

		dataGridView5->ColumnCount = n;
		for (int j = 0; j < n; ++j) {
			dataGridView5->Columns[j]->Name = j.ToString();
			dataGridView5->Columns[j]->Width = 50;
		}
		dataGridView5->RowHeadersWidth = 60;
		dataGridView5->Font = gcnew System::Drawing::Font("Consolas", 10);

		for (int i = 0; i < n; ++i) {
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView5);
			for (int j = 0; j < n; ++j)
				row->Cells[j]->Value = reach[i][j].ToString();
			row->HeaderCell->Value = i.ToString();
			dataGridView5->Rows->Add(row);
		}

		tabControl1->SelectedTab = tabPage6;
	}
	private: System::Void tabPage5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
