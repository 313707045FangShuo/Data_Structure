#pragma once
#include "BST.h"

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
		Form1(void);

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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(210, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(821, 747);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(813, 718);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Recursive";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(801, 708);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox6);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(813, 718);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Non-Recursively";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox6
			// 
			this->richTextBox6->Location = System::Drawing::Point(6, 5);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(801, 708);
			this->richTextBox6->TabIndex = 1;
			this->richTextBox6->Text = L"";
			this->richTextBox6->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox6_TextChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox7);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(813, 718);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Draw";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox7
			// 
			this->richTextBox7->Location = System::Drawing::Point(6, 5);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(801, 708);
			this->richTextBox7->TabIndex = 1;
			this->richTextBox7->Text = L"";
			this->richTextBox7->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox7_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(78, 27);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(73, 32);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 32);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(12, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(171, 186);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Basic Function";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Number";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->richTextBox5);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->richTextBox4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->richTextBox3);
			this->groupBox2->Location = System::Drawing::Point(12, 245);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(171, 187);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Random Integers";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Num";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(70, 100);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(73, 32);
			this->richTextBox5->TabIndex = 9;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox5_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Min";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(70, 62);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(73, 32);
			this->richTextBox4->TabIndex = 7;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Max";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(22, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 32);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Random Generate";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(70, 24);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(73, 32);
			this->richTextBox3->TabIndex = 5;
			this->richTextBox3->Text = L"";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Location = System::Drawing::Point(12, 453);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(171, 204);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Traverse";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(32, 126);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(90, 19);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Levelorder";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(32, 96);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(82, 19);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Postorder";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(32, 65);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(77, 19);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Preorder";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(32, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 19);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Inorder";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(22, 157);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 32);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Traverse";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(34, 668);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 32);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Draw BST";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(34, 711);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(119, 32);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 768);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Binary Search Tree by Shuo Fang 2025/05/12";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
		}

	private: 
		BST* tree;

#pragma endregion
	// Insert
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int val = Convert::ToInt32(richTextBox2->Text);
		tree->Insert(val);
		richTextBox1->AppendText("Inserted: " + val + "\n");
		System::String^ result = "";
		result = "Inorder: " + tree->Inorder();
		richTextBox1->AppendText(result + "\n");

		richTextBox6->Clear();
		richTextBox6->AppendText("[Inorder Non-Recursive]: " + tree->InorderNonRecursive() + "\n");
		richTextBox6->AppendText("[Preorder Non-Recursive]: " + tree->PreorderNonRecursive() + "\n");
		richTextBox6->AppendText("[Postorder Non-Recursive]: " + tree->PostorderNonRecursive() + "\n");
	}

	// Delete
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int val = Convert::ToInt32(richTextBox2->Text);
		tree->Delete(val);
		richTextBox1->AppendText("Deleted: " + val + "\n");

		System::String^ result = "";
		result = "Inorder: " + tree->Inorder();
		richTextBox1->AppendText(result + "\n");

		richTextBox6->AppendText("[Inorder Non-Recursive]: " + tree->InorderNonRecursive() + "\n");
		richTextBox6->AppendText("[Preorder Non-Recursive]: " + tree->PreorderNonRecursive() + "\n");
		richTextBox6->AppendText("[Postorder Non-Recursive]: " + tree->PostorderNonRecursive() + "\n");
	}

	// Search
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int val = Convert::ToInt32(richTextBox2->Text);
		bool found = tree->Search(val);
		richTextBox1->AppendText("Search " + val + ": " + (found ? "Found\n" : "Not Found\n"));
	}

	// Traverse
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ result = "";
		if (radioButton1->Checked)
			result = "Inorder: " + tree->Inorder();
		else if (radioButton2->Checked)
			result = "Preorder: " + tree->Preorder();
		else if (radioButton3->Checked)
			result = "Postorder: " + tree->Postorder();
		else if (radioButton4->Checked)
			result = "Levelorder: " + tree->Levelorder();

		richTextBox1->AppendText(result + "\n");
	}
    // RandomGenerate
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		int max = Convert::ToInt32(richTextBox3->Text);
		int min = Convert::ToInt32(richTextBox4->Text);
		int num = Convert::ToInt32(richTextBox5->Text);

		Random^ rand = gcnew Random();
		System::String^ log = "";

		for (int i = 0; i < num; i++) {
			int val = rand->Next(min, max + 1); 
			tree->Insert(val);
			log += "Inserted: " + val + "\n";
		}

		richTextBox1->AppendText(log);

		System::String^ result = "";
		result = "Inorder: " + tree->Inorder();
		richTextBox1->AppendText(result + "\n");

		richTextBox6->Clear();
		richTextBox6->AppendText("[Inorder Non-Recursive]: " + tree->InorderNonRecursive() + "\n");
		richTextBox6->AppendText("[Preorder Non-Recursive]: " + tree->PreorderNonRecursive() + "\n");
		richTextBox6->AppendText("[Postorder Non-Recursive]: " + tree->PostorderNonRecursive() + "\n");
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	// Clear
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		richTextBox6->Clear();
		richTextBox7->Clear();
	}
	// Draw
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ drawing = tree->Draw();
		richTextBox7->Clear();
		richTextBox7->AppendText(drawing);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
};
}
