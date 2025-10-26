#pragma once
# define SWAP(x, y, t) (t=x, x=y, y=t)

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Diagnostics;
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox9;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(285, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(882, 713);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(874, 684);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Diagrams";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(3, 6);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(865, 675);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox5);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(874, 684);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Data";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(6, 6);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(862, 675);
			this->richTextBox5->TabIndex = 1;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox5_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->richTextBox4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->richTextBox3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 147);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Input";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(10, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Range 1~N";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(118, 110);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(136, 33);
			this->richTextBox4->TabIndex = 5;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(13, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"N =";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(118, 72);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(136, 33);
			this->richTextBox3->TabIndex = 3;
			this->richTextBox3->Text = L"";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(13, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Times =";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(118, 33);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(136, 33);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox9);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->checkBox8);
			this->groupBox2->Controls->Add(this->checkBox7);
			this->groupBox2->Controls->Add(this->checkBox6);
			this->groupBox2->Controls->Add(this->checkBox5);
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(16, 165);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(267, 323);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sorting";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(51, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw Diagram";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox8->ForeColor = System::Drawing::Color::Black;
			this->checkBox8->Location = System::Drawing::Point(17, 218);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(112, 26);
			this->checkBox8->TabIndex = 7;
			this->checkBox8->Text = L"Heap Sort";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox7->ForeColor = System::Drawing::Color::Black;
			this->checkBox7->Location = System::Drawing::Point(17, 192);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(245, 26);
			this->checkBox7->TabIndex = 6;
			this->checkBox7->Text = L"Merge Sort (non-recursive)";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox6->ForeColor = System::Drawing::Color::Black;
			this->checkBox6->Location = System::Drawing::Point(17, 168);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(207, 26);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->Text = L"Merge Sort (recursive)";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox5->ForeColor = System::Drawing::Color::Black;
			this->checkBox5->Location = System::Drawing::Point(17, 142);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(237, 26);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Quick Sort (non-recursive)";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
			this->checkBox4->Location = System::Drawing::Point(17, 115);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(199, 26);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Quick Sort (recursive)";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(17, 87);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(125, 26);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Bubble Sort";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(17, 60);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(139, 26);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Insertion Sort";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(17, 33);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(142, 26);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Selection Sort";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->richTextBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(11, 494);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(267, 209);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Check";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(1, 24);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(260, 179);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox9->ForeColor = System::Drawing::Color::Black;
			this->checkBox9->Location = System::Drawing::Point(17, 243);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(112, 26);
			this->checkBox9->TabIndex = 8;
			this->checkBox9->Text = L"Radix Sort";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox9_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1170, 715);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Performance Evaluation for Sorting Algorithms, by Shuo Fang, ver 0.2";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void selectionSort(array<int>^ data, int n) // parameter: data[], value number
	{
		int i, j, min, temp;
		for (i = 0; i < n; i++)
		{
			min = i; // i store min value position
			for (j = (i + 1); j < n; j++)
			{
				if (data[j] < data[min]) // if find smaller value -> replace min value position
					min = j;
			}
			SWAP(data[i], data[min], temp); // swap now position and min value position 
		}
	}

	private: System::Void insertionSort(array<int>^ data, int n)
	{
		int i, key, j;

		for (i = 1; i < n; i++)
		{
			key = data[i];
			j = i - 1;

			// move larger value to the key's left side
			while (j >= 0 && data[j] > key)
			{
				data[j + 1] = data[j];
				j--;
			}
			data[j + 1] = key;  // insert to correct place
		}
	}

	private: System::Void bubbleSort(array<int>^ data, int n) // parameter: data[], value number
	{
		int i, j, temp;
		bool swapped; // check swaped or not
		for (i = 0; i < n - 1; i++)
		{
			swapped = false;
			for (j = 0; j < n - i - 1; j++)
			{
				if (data[j] > data[j + 1]) // if next value is bigger than this value -> swap
				{
					SWAP(data[j], data[j + 1], temp);
					swapped = true;
				}
			}
			if (!swapped) break; // if didn't swap -> data has been sorted -> break
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

	private: System::Void quickSort_Recursive(array<int>^ data, int low, int high) // parameter: data[], quick sort low position, quick sort high position 
	{
		if (low < high)
		{
			// get pivot
			int pivotIndex = quickSort_partition(data, low, high);

			// recursive
			quickSort_Recursive(data, low, pivotIndex - 1);
			quickSort_Recursive(data, pivotIndex + 1, high);
		}
	}

	private: System::Void quickSort_Iterative(array<int>^ data, int low, int high)
	{
		System::Collections::Generic::Stack<int>^ stack = gcnew System::Collections::Generic::Stack<int>();

		// init stack
		stack->Push(low);
		stack->Push(high);

		while (stack->Count > 0)
		{
			int h = stack->Pop();
			int l = stack->Pop();

			int pivot = data[h];
			int i = l - 1, temp;

			for (int j = l; j < h; j++)
			{
				if (data[j] < pivot)
				{
					i++;
					SWAP(data[i], data[j], temp);
				}
			}
			SWAP(data[i + 1], data[h], temp);
			int p = i + 1;

			if (p - 1 > l)
			{
				stack->Push(l);
				stack->Push(p - 1);
			}
			if (p + 1 < h)
			{
				stack->Push(p + 1);
				stack->Push(h);
			}
		}
	}

	private: System::Void mergeSort_merge(array<int>^ data, int front, int end) // parameter: data[], merge sort front position, merge sort end position 
	{
		int mid = (front + end) / 2;

		int LeftSize = mid - front + 1;
		int RightSize = end - mid;

		//create new array to store temp data (left array, right array) 
		array<int>^ leftArr = gcnew array<int>(LeftSize);
		array<int>^ rightArr = gcnew array<int>(RightSize);

		//copy data into temp array
		for (int i = 0; i < LeftSize; i++)
		{
			leftArr[i] = data[front + i];
		}
		for (int j = 0; j < RightSize; j++)
		{
			rightArr[j] = data[j + mid + 1];
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

	private: System::Void mergeSort_Recursive(array<int>^ data, int front, int end) // parameter: data[], merge sort front position, merge sort end position 
	{
		if (front < end) //haven't complete sorting
		{
			int mid = front + (end - front) / 2;

			// recursive
			mergeSort_Recursive(data, front, mid);	//Left: front - mid
			mergeSort_Recursive(data, mid + 1, end);	//Right: mid+1 - end
			mergeSort_merge(data, front, end);
		}
	}

	private: System::Void mergeSort_Iterative(array<int>^ data, int n)
	{
		// temp array
		array<int>^ temp = gcnew array<int>(n);

		for (int curr_size = 1; curr_size <= n - 1; curr_size *= 2)
		{
			for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size)
			{
				int mid = Math::Min(left_start + curr_size - 1, n - 1);
				int right_end = Math::Min(left_start + 2 * curr_size - 1, n - 1);

				// merge left_start ~ mid & mid+1 ~ right_end
				int i = left_start;
				int j = mid + 1;
				int k = left_start;

				while (i <= mid && j <= right_end)
				{
					if (data[i] <= data[j])
						temp[k++] = data[i++];
					else
						temp[k++] = data[j++];
				}
				while (i <= mid)
					temp[k++] = data[i++];
				while (j <= right_end)
					temp[k++] = data[j++];

				// temp result write to array
				for (int i = left_start; i <= right_end; i++)
					data[i] = temp[i];
			}
		}
	}

	private: System::Void heapify(array<int>^ data, int n, int root)
	{
		int largest = root;       // MAX value
		int left = 2 * root + 1;  // leftchild
		int right = 2 * root + 2; // rightchild
		int temp;

		// if leftchild larger than root
		if (left < n && data[left] > data[largest])
			largest = left;

		// if rightchild larger than root
		if (right < n && data[right] > data[largest])
			largest = right;

		// heapify
		if (largest != root)
		{
			SWAP(data[root], data[largest], temp);
			heapify(data, n, largest);
		}
	}

	private: System::Void heapSort(array<int>^ data, int n)
	{
		int i, temp;

		// MAX heap
		for (i = n / 2 - 1; i >= 0; i--)
			heapify(data, n, i);

		for (i = n - 1; i > 0; i--)
		{
			SWAP(data[0], data[i], temp);
			heapify(data, i, 0); // i is the size of heap
		}
	}

	private: System::Void radixSort(array<int>^ data, int n) {
		int max = data[0];
		for (int i = 1; i < n; i++)
			if (data[i] > max) max = data[i];

		for (int exp = 1; max / exp > 0; exp *= 10)
			countSortForRadix(data, n, exp);
	}

	private: System::Void countSortForRadix(array<int>^ data, int n, int exp) {
		array<int>^ output = gcnew array<int>(n);
		array<int>^ count = gcnew array<int>(10);

		for (int i = 0; i < n; i++)
			count[(data[i] / exp) % 10]++;

		for (int i = 1; i < 10; i++)
			count[i] += count[i - 1];

		for (int i = n - 1; i >= 0; i--) {
			int idx = (data[i] / exp) % 10;
			output[--count[idx]] = data[i];
		}

		for (int i = 0; i < n; i++)
			data[i] = output[i];
	}


	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int times = Convert::ToInt32(richTextBox2->Text);
		int base_n = Convert::ToInt32(richTextBox3->Text);
		int range = Convert::ToInt32(richTextBox4->Text);
		int repeat = 5; // 每輪平均次數

		array<String^>^ sortNames = {
			"Selection Sort", "Insertion Sort", "Bubble Sort",
			"Quick Sort (Rec)", "Quick Sort (Iter)",
			"Merge Sort (Rec)", "Merge Sort (Iter)", "Heap Sort",
			"Radix Sort"
		};

		array<CheckBox^>^ checkboxes = {
			checkBox1, checkBox2, checkBox3, checkBox4,
			checkBox5, checkBox6, checkBox7, checkBox8
		};

		richTextBox5->Clear();
		richTextBox1->Clear();
		chart1->Series->Clear();
		chart1->ChartAreas[0]->AxisX->Title = "n (Data Size)";
		chart1->ChartAreas[0]->AxisY->Title = "Time (ms)";
		chart1->ChartAreas[0]->RecalculateAxesScale();

		array<Color>^ colors = {
			Color::Red, Color::Green, Color::Blue, Color::Orange,
			Color::Purple, Color::Brown, Color::Teal, Color::Magenta,
			Color::DarkCyan
		};

		for (int algoIdx = 0; algoIdx <= 8; algoIdx++) {
			if (algoIdx < 8 && !checkboxes[algoIdx]->Checked) continue;

			Series^ series = gcnew Series(sortNames[algoIdx]);
			series->ChartType = SeriesChartType::Line;
			series->BorderWidth = 3;
			series->MarkerStyle = MarkerStyle::Circle;
			series->MarkerSize = 6;
			series->Color = colors[algoIdx];

			for (int t = 1; t <= times; t++) {
				int n = base_n * t;
				double total = 0;
				array<int>^ lastData;

				for (int r = 0; r < repeat; r++) {
					array<int>^ data = gcnew array<int>(n);
					Random^ rand = gcnew Random();
					for (int i = 0; i < n; i++) {
						data[i] = rand->Next(1, range + 1);
					}
					lastData = data;

					Stopwatch^ sw = Stopwatch::StartNew();
					switch (algoIdx) {
					case 0: selectionSort(data, n); break;
					case 1: insertionSort(data, n); break;
					case 2: bubbleSort(data, n); break;
					case 3: quickSort_Recursive(data, 0, n - 1); break;
					case 4: quickSort_Iterative(data, 0, n - 1); break;
					case 5: mergeSort_Recursive(data, 0, n - 1); break;
					case 6: mergeSort_Iterative(data, n); break;
					case 7: heapSort(data, n); break;
					case 8: radixSort(data, n); break;
					}
					sw->Stop();
					total += sw->Elapsed.TotalMilliseconds;
				}

				double avg = total / repeat;
				series->Points->AddXY(n, avg);
				richTextBox1->AppendText(sortNames[algoIdx] + " n=" + n + " → " + avg.ToString("F4") + " ms\n");

				if (t == times) {
					richTextBox5->AppendText("[" + sortNames[algoIdx] + " n=" + n + "]\n");
					for (int k = 0; k < n; k++) {
						richTextBox5->AppendText(lastData[k].ToString() + " ");
					}
					richTextBox5->AppendText("\n\n");
				}
			}
			chart1->Series->Add(series);
		}
	}

};
}
