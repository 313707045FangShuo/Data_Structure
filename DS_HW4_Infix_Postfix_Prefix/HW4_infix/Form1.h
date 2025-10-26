#pragma once
# define MAXSIZE 100

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class Stack{
	private:
		cli::array<String^>^ data;
		int top;
	public:
		Stack() {
			data = gcnew cli::array<String^>(MAXSIZE);
			top = -1;
		}

		int isEmpty() {
			if (top == -1) return 1;
			else return 0;
		}
		int isFull() {
			if (top == MAXSIZE - 1) return 1;
			else return 0;
		}
		void Push(String^ value) {
			if (isFull()==0) {
				data[++top] = value;
			}
		}
		String^ Pop() {
			if (isEmpty() == 0) {
				return data[top--];
			}
			else return "";
		}
		String^ Peek() {
			if (!isEmpty()) {
				return data[top];
			}
			else {
				return "";
			}
		}
	};

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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(106, 59);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(602, 36);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(106, 114);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(218, 121);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Input Type";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(19, 28);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 23);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Prefix";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(19, 57);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 23);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Infix";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(19, 86);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->radioButton3->Size = System::Drawing::Size(76, 23);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Postfix";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(358, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"CONVERT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(106, 255);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(602, 36);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(106, 321);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(602, 36);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(106, 374);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(602, 36);
			this->richTextBox4->TabIndex = 5;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 23);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Input:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(12, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 23);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Prefix:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(21, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 23);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Infix:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(12, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Postfix:";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(107, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(293, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Only binary operation are be considered.";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 453);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form1";
			this->Text = L"Prefix, Infix, Postfix Convertor by Shuo Fang on 2025/04/10 Ver 0.1.0";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int precedence(String^ op) {	// according to slides
		if (op == "(") return 0; 
		else if (op == "^" || op == "**") return 7;
		else if (op == "*" || op == "/" || op == "%") return 6;
		else if (op == "+" || op == "-") return 5;
		else if (op == "&&") return 4;
		else if (op == "||") return 3;
		else if (op == "#") return 2; 
		else return -1;
	}

	bool isOperator(String^ ch) {	// determin if it's operator or not
		if (
			ch == "+" || ch == "-" ||
			ch == "*" || ch == "/" || ch == "\\" || ch == "%" ||
			ch == "^" ||
			ch == "&&" || ch == "||" || ch == "**" ||
			ch == "#"
			) return true;
		else return false;
	}

	List<String^>^ tokenize(String^ expr, bool strictChar) {
		List<String^>^ tokens = gcnew List<String^>();
		String^ current = "";

		for (int i = 0; i < expr->Length; i++) {
			wchar_t ch = expr[i];

			if (Char::IsWhiteSpace(ch)) continue;

			if (strictChar) {
				tokens->Add(expr[i].ToString());
			}
			else if (Char::IsLetterOrDigit(ch)) {
				current += ch;
			}
			else {
				if (current->Length > 0) {
					tokens->Add(current);
					current = "";
				}
				if (i + 1 < expr->Length) {
					String^ twoChar = expr->Substring(i, 2);
					if (twoChar == "&&" || twoChar == "||" || twoChar == "**") {
						tokens->Add(twoChar);
						i++;
						continue;
					}
				}
				tokens->Add(expr[i].ToString());
			}
		}

		if (current->Length > 0)
			tokens->Add(current);

		return tokens;
	}

	String^ get_prefix(Stack^ opnStack, String^ op, List<String^>^ output) {
		if (opnStack->isEmpty()) return "";
		String^ left = opnStack->Pop();
		if (opnStack->isEmpty()) return "";
		String^ right = opnStack->Pop();
		String^ result = op + left + right;
		output->Add(result);
		return result;
	}

	String^ infix2prefix(String^ text, List<String^>^ steps) {

		List<String^>^ tokens = tokenize(text, false);
		Stack^ stack = gcnew Stack();
		Stack^ opn_stack = gcnew Stack();
		stack->Push("#");	// pop alert
		String^ output = "";	// declare output to store the context that popped from stack

		for (int i = tokens->Count - 1; i >= 0; i--) {
			String^ s = tokens[i];

			if (!isOperator(s) && s != "(" && s != ")") {
				opn_stack->Push(s);
			}
			else if (s == ")") {
				stack->Push(s); 
			}
			else if (s == "(") {
				String^ x = stack->Pop();
				while (x != ")") { 
					opn_stack->Push(get_prefix(opn_stack, x, steps));
					x = stack->Pop();
				}
			}

			else {
				while (precedence(s) < precedence(stack->Peek())) {
					String^ x = stack->Pop();
					opn_stack->Push(get_prefix(opn_stack, x, steps));
				}
				stack->Push(s);
			}
		}
		// MessageBox::Show("AAA");
		while (stack->Peek() != "#") {
			String^ x = stack->Pop();
			opn_stack->Push(get_prefix(opn_stack, x, steps));
		}
		String^ x = stack->Pop();	// pop #
		String^ prefix = opn_stack->Pop();
		return prefix->Trim();
	}

	String^ infix2postfix(String^ text) {
		List<String^>^ tokens = tokenize(text, false);
		Stack^ stack = gcnew Stack();
		stack->Push("#");  // bottom sentinel
		String^ output = "";

		for each(String ^ s in tokens) {
			if (!isOperator(s) && s != "(" && s != ")") {
				output += s;
			}
			else if (s == "(") {
				stack->Push(s);  
			}
			else if (s == ")") {
				String^ x = stack->Pop();
				while (x != "(") {
					output += x;
					x = stack->Pop();
				}
			}
			else {
				while (precedence(s) <= precedence(stack->Peek())) {
					output += stack->Pop();
				}
				stack->Push(s);
			}
		}

		while (stack->Peek() != "#") {
			output += stack->Pop();
		}
		stack->Pop();

		return output->Trim();
	}


	String^ prefix2infix(String^ text) {
		List<String^>^ tokens = tokenize(text, true);
		tokens->Reverse();
		Stack^ stack = gcnew Stack();

		for each(String ^ token in tokens) {
			if (!isOperator(token)) {
				stack->Push(token);
			}
			else {
				String^ op1 = stack->Pop();
				String^ op2 = stack->Pop();
				String^ expr = "(" + op1 + token + op2 + ")";
				stack->Push(expr);
			}
		}

		return stack->Pop()->Trim(); 
	}

	String^ postfix2infix(String^ text) {
		List<String^>^ tokens = tokenize(text, true);
		Stack^ stack = gcnew Stack();

		for each(String ^ token in tokens) {
			if (!isOperator(token)) {
				stack->Push(token);
			}
			else {
				String^ op2 = stack->Pop(); 
				String^ op1 = stack->Pop();
				String^ expr = "(" + op1 + token + op2 + ")";
				stack->Push(expr);
			}
		}

		return stack->Pop()->Trim();
	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ input = richTextBox1->Text; 
		richTextBox2->Clear();
		richTextBox3->Clear();
		richTextBox4->Clear();

		if (radioButton1->Checked) {
			String^ infix = prefix2infix(input);
			List<String^>^ steps = gcnew List<String^>();
			String^ postfix = infix2postfix(infix);
			// String^ postfix = prefix2postfix(input);
			richTextBox2->Text = input;
			richTextBox3->Text = infix;
			richTextBox4->Text = postfix;
		}
		else if (radioButton2->Checked) {

			List<String^>^ steps = gcnew List<String^>();
			String^ prefix = infix2prefix(input, steps);
			String^ postfix = infix2postfix(input);
			richTextBox2->Text = prefix;
			richTextBox3->Text = input;
			richTextBox4->Text = postfix; 
		}
		else if (radioButton3->Checked) {  // Postfix
			String^ infix = postfix2infix(input);
			List<String^>^ steps = gcnew List<String^>();
			String^ prefix = infix2prefix(infix, steps);
			// String^ prefix = postfix2prefix(input);
			richTextBox2->Text = prefix;
			richTextBox3->Text = infix;
			richTextBox4->Text = input;
		}

	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
