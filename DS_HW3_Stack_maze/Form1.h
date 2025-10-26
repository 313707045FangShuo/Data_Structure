#include <iostream>
#include <sstream>
#include <vector>

#define MAXSIZE 1000
#define S 4 //	define 4 directions

#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO;

	struct position { // 2D coordinates
		int x, y;
	};
	struct cood {
		int dx, dy; // 2D offsets
	};

	class Stack {
	private:
		int top;
		struct position stack[200]; // Define stack array
	public:
		Stack() {
			top = -1;
		}

		bool isEmpty() {
			return top == -1;
		}

		bool push(struct position step) {
			if (top < 199) {
				stack[++top] = step;
				return true;
			}
			return false; // stack is full
		}

		struct position pop() {
			if (isEmpty()) {
				cout << "Stack is empty!" << endl;
				return {}; // return empty position
			}
			return stack[top--];
		}

		struct position topp() {
			if (top >= 0) return stack[top];
			return {}; // return empty position
		}
	};

	struct position step, next;
	struct cood f1[S];
	struct cood f2[S];
	int** w;
	int top = -1, d;

	void initiation(int width, int height) {
		w = new int* [height];
		f1[0].dx = 0; f1[0].dy = 1;
		f1[1].dx = -1; f1[1].dy = 0;
		f1[2].dx = 0; f1[2].dy = -1;
		f1[3].dx = 1; f1[3].dy = 0;
		f2[0].dx = 0; f2[0].dy = 2;
		f2[1].dx = -2; f2[1].dy = 0;
		f2[2].dx = 0; f2[2].dy = -2;
		f2[3].dx = 2; f2[3].dy = 0;
		for (int i = 0; i < height; i++) {
			w[i] = new int[width]; // Allocate memory for each row
		}

		// Initialize maze with boundaries and walls
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
					w[i][j] = 2; // Boundary
				}
				else {
					w[i][j] = 1; // Wall
				}
			}
		}
		// Set an exit at the bottom middle of the maze (for example)
		int exit_x = height - 1;    // Bottom row
		int exit_y = width - 2;     // Middle column
		w[exit_x][exit_y] = 0;      // Make this exit a path (0)
		w[exit_x - 1][exit_y] = 0;
	}

	// Check if the next move is valid
	int NextMove(position step, int width, int height) {
		for (int i = 0; i < S; i++) {
			int newX = step.x + f2[i].dx;
			int newY = step.y + f2[i].dy;

			if (newX > 0 && newX < height - 1 && newY > 0 && newY < width - 1 && w[newX][newY] == 1) {
				return 1;  // Can move
			}
		}
		return 0;  // Can't move
	}

	Stack myStack;
	// DFS to generate the maze
	void MazeDFS(position step, int width, int height) {
		Stack myStack;
		myStack.push(step);
		w[step.x][step.y] = 0;  // Set the starting point as a path (0)

		while (!myStack.isEmpty()) {
			step = myStack.pop();

			while (NextMove(step, width, height)) {
				int d = rand() % S;  // Randomly select a direction

				position next;
				next.x = step.x + f2[d].dx;
				next.y = step.y + f2[d].dy;

				// Ensure the exit is included in the path
				if (next.x >= 0 && next.x < height && next.y >= 0 && next.y < width) {
					if (w[next.x][next.y] == 1) {
						w[step.x + f1[d].dx][step.y + f1[d].dy] = 0;  // Carve the wall
						myStack.push(next);
						w[next.x][next.y] = 0;  // Mark the next position as a path
						step = next;
					}
				}
			}
		}
	}

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
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::RichTextBox^ richTextBox8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(243, 19);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(667, 625);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox4);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(659, 596);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"maze_text";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(5, 6);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(649, 588);
			this->richTextBox4->TabIndex = 0;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(659, 596);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"datagrid";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(5, 5);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(649, 588);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Size = System::Drawing::Size(659, 596);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"path";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(5, 6);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(649, 588);
			this->richTextBox5->TabIndex = 0;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox5_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->richTextBox3);
			this->groupBox1->Controls->Add(this->richTextBox6);
			this->groupBox1->Controls->Add(this->richTextBox7);
			this->groupBox1->Controls->Add(this->richTextBox8);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->ForeColor = System::Drawing::Color::Navy;
			this->groupBox1->Location = System::Drawing::Point(12, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(226, 631);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Control Box";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(18, 571);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 38);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Open File";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(18, 529);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 38);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Find a Path";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(19, 485);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 38);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Save Maze File";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(18, 444);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Generate Maze";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(13, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Start X:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(13, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Start Y:";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(13, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Exit X:";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(13, 246);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Exit Y:";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox3->Location = System::Drawing::Point(116, 156);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(91, 34);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"0";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// richTextBox6
			// 
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox6->Location = System::Drawing::Point(116, 114);
			this->richTextBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(91, 34);
			this->richTextBox6->TabIndex = 4;
			this->richTextBox6->Text = L"5";
			this->richTextBox6->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox6_TextChanged);
			// 
			// richTextBox7
			// 
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox7->Location = System::Drawing::Point(116, 243);
			this->richTextBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(91, 34);
			this->richTextBox7->TabIndex = 4;
			this->richTextBox7->Text = L"14";
			this->richTextBox7->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox7_TextChanged);
			// 
			// richTextBox8
			// 
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox8->Location = System::Drawing::Point(116, 199);
			this->richTextBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(91, 34);
			this->richTextBox8->TabIndex = 4;
			this->richTextBox8->Text = L"13";
			this->richTextBox8->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox8_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(13, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Height:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox2->Location = System::Drawing::Point(116, 76);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(91, 34);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"15";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(13, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Width:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox1->Location = System::Drawing::Point(116, 35);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(91, 34);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"15";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(923, 750);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"DFS, Maze Generation by Shuo, Fang 2025/03/18 Ver.0.2";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region Utility Methods

	int width = 0, height = 0, GridSize = 0;
	int entranceX = 0, entranceY = 0;
	int exitX = 0, exitY = 0;

	private: System::Void findPath(position step, int width, int height, int exitX, int exitY) {

		Stack myStack;
		myStack.push(step);

		// Mark the starting position as visited (set to 2 or any value that represents visited cells)
		w[step.x][step.y] = 2;

		// Exit coordinates (assuming exit is at the bottom row, middle column)
		int exit_x = exitX;
		int exit_y = exitY;

		// Start DFS traversal
		while (!myStack.isEmpty()) {
			step = myStack.pop();
			richTextBox5->AppendText("Pop: " + System::Convert::ToString(step.x) + ", " + System::Convert::ToString(step.y) + "\n");
			dataGridView1->Rows[step.x]->Cells[step.y]->Style->BackColor = Color::FromArgb(225, 149, 171);

			// Check if we've reached the exit
			if (step.x == exit_x && step.y == exit_y) {
				MessageBox::Show("Path found!");
				richTextBox5->AppendText("Path found!");
				break;
			}

			// Try moving in all directions
			for (int s = 0; s < S; s++) {
				position next;
				next.x = step.x + f1[s].dx;
				next.y = step.y + f1[s].dy;

				// Ensure the move is within bounds
				if (next.x >= 0 && next.x < height && next.y >= 0 && next.y < width) {
					// If it's an open space (path) and hasn't been visited
					if (w[next.x][next.y] == 0) {
						// Mark the next position as visited
						w[next.x][next.y] = 2;

						// Push the next valid position to the stack
						myStack.push(next);

						// Optionally, update the UI to show the path (e.g., change color)
						dataGridView1->Rows[next.x]->Cells[next.y]->Style->BackColor = Color::FromArgb(250, 208, 196);
						Application::DoEvents();
						richTextBox5->AppendText("Push: " + System::Convert::ToString(next.x) + ", " + System::Convert::ToString(next.y) + "\n");
					}
				}
			}
		}

		// If no path was found, show an alert
		if (myStack.isEmpty()) {
			MessageBox::Show("No path found!");
		}
	}
	
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		// Get input values from richTextBox controls
		width = System::Convert::ToInt32(richTextBox1->Text);  // Get maze width
		height = System::Convert::ToInt32(richTextBox2->Text); // Get maze height
		entranceX = System::Convert::ToInt32(richTextBox3->Text);
		entranceY = System::Convert::ToInt32(richTextBox6->Text);
		exitX = System::Convert::ToInt32(richTextBox7->Text);
		exitY = System::Convert::ToInt32(richTextBox8->Text);

	}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		richTextBox4->Clear();

		// Get input
		width = System::Convert::ToInt32(richTextBox1->Text);  // Get maze width
		height = System::Convert::ToInt32(richTextBox2->Text); // Get maze height
		entranceX = System::Convert::ToInt32(richTextBox3->Text);
		entranceY = System::Convert::ToInt32(richTextBox6->Text);
		exitX = System::Convert::ToInt32(richTextBox7->Text);
		exitY = System::Convert::ToInt32(richTextBox8->Text);

		richTextBox4->AppendText(System::Convert::ToString(width)+ " " + System::Convert::ToString(height)+"\n");	// show maze size

		// Initialize the maze
		initiation(width, height);

		// Call DFS to generate the maze
		position start = {entranceX, entranceY}; // Start from (1, 1) to avoid boundaries
		MazeDFS(start, width, height);  // Pass the starting position to the DFS function

		// Update DataGridView to display the maze
		dataGridView1->RowCount = height;
		dataGridView1->ColumnCount = width;
		dataGridView1->ColumnHeadersVisible = false;
		dataGridView1->RowHeadersVisible = false;
		dataGridView1->RowTemplate->Height = 30;
		for (int i = 0; i < dataGridView1->Columns->Count; i++) {
			dataGridView1->Columns[i]->Width = 30;
		}

		for (int i = 0; i < height; i++) {
			String^ row = "";
			for (int j = 0; j < width; j++) {
				if (w[i][j] == 2) {
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::FromArgb(197, 153, 182); // Boundary
					row += "2 ";
				}
				else if (w[i][j] == 1) {
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::FromArgb(230, 178, 186); // Wall
					row += "1 ";
				}
				else {
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::FromArgb(255, 247, 243); // Path
					row += "0 ";
				}
			}
			richTextBox4->AppendText(row + "\n");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		saveFileDialog->Title = "Save Maze As";

		// If user selects a file and clicks "Save"
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Create a StreamWriter to write to the file
			StreamWriter^ writer = gcnew StreamWriter(saveFileDialog->FileName);

			String^ size = System::Convert::ToString(width)+" "+ System::Convert::ToString(height);
			writer->WriteLine(size);
			// Loop through the maze and write it to the file
			for (int i = 0; i < height; i++) {
				String^ line = "";
				for (int j = 0; j < width; j++) {
					line += w[i][j].ToString() + " ";  // Append each element with a space
				}
				writer->WriteLine(line);  // Write the line to the file
			}

			writer->Close();  // Close the writer after writing the maze
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (w == nullptr) {
			MessageBox::Show("Generate a Maze First!");
		}

		width = System::Convert::ToInt32(richTextBox1->Text);  // Get maze width
		height = System::Convert::ToInt32(richTextBox2->Text); // Get maze height
		entranceX = System::Convert::ToInt32(richTextBox3->Text);
		entranceY = System::Convert::ToInt32(richTextBox6->Text);
		exitX = System::Convert::ToInt32(richTextBox7->Text);
		exitY = System::Convert::ToInt32(richTextBox8->Text);

		position start = { entranceX, entranceY};
		findPath(start, width, height, exitX, exitY);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->Title = "Select a File";

		String^ SS;
		int m, p, i, j, p1, p2, len;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox4->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
			
			SS = richTextBox4->Lines[0];
			p1 = SS->IndexOf(" ");
			m = int::Parse(SS->Substring(0, p1));
			p = int::Parse(SS->Substring(p1 + 1, SS->Length - p1 - 1));

			if (w != nullptr) {
				for (int i = 0; i < height; ++i)
					delete[] w[i];
				delete[] w;
			}

			int** maze;
			maze = new int* [m];
			for (i = 0; i < m; i++)
				maze[i] = new int[p];

			for (i = 1; i <= m; i++)
			{
				SS = richTextBox4->Lines[i];  // 讀取每一行迷宮數據
				for (j = 0; j < p; j++)
					maze[i - 1][j] = int::Parse(SS->Substring(2 * j, 1)); // 解析每一個數字
			}

			w = new int* [height];
			for (int i = 0; i < height; ++i)
				w[i] = new int[width];

			// 把 maze 的內容複製到 w 中
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < width; j++) {
					w[i][j] = maze[i][j];
				}
			}

			dataGridView1->RowCount = m;
			dataGridView1->ColumnCount = p;
			dataGridView1->ColumnHeadersVisible = false;
			dataGridView1->RowHeadersVisible = false;

			for (i = 0; i < m; i++)
			{
				for (j = 0; j < p; j++)
				{
					if (maze[i][j] == 2)
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::FromArgb(197, 153, 182); // 代表起點或終點
					else if (maze[i][j] == 1)
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::FromArgb(230, 178, 186); // 代表牆壁
					else
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::FromArgb(255, 247, 243); // 代表通道
				}
			}

			for (i = 0; i < m; i++)
			{
				delete maze[i];
			}
			delete maze;
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
#pragma endregion

};


}
