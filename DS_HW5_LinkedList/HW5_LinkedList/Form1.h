#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Singly Linked List node
	struct Node {
		int data;
		Node* next;
	};

	// Doubly Linked List node
	struct DNode {
		int data;
		DNode* next;
		DNode* prev;
	};

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			InitSinglyCircularList();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ txtElement;
	private: System::Windows::Forms::TextBox^ txtOutput;
	private: System::Windows::Forms::Button^ btnInsertFirst;
	private: System::Windows::Forms::Button^ btnInsertLast;
	private: System::Windows::Forms::Button^ btnFind;
	private: System::Windows::Forms::Button^ btnInsertAfter;
	private: System::Windows::Forms::Button^ btnInsertBefore;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnRandomInsert;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnReverse;
	private: System::Windows::Forms::TextBox^ txtN;
	private: System::Windows::Forms::TextBox^ txtMin;
	private: System::Windows::Forms::TextBox^ txtMax;
	private: System::Windows::Forms::Label^ labelN;
	private: System::Windows::Forms::Label^ labelMin;
	private: System::Windows::Forms::Label^ labelMax;
	private: System::Windows::Forms::TextBox^ txtElement2;
	private: System::Windows::Forms::TextBox^ txtOutput2;
	private: System::Windows::Forms::Button^ btnPushStack;
	private: System::Windows::Forms::Button^ btnPopStack;
	private: System::Windows::Forms::Button^ btnInsertQueue;
	private: System::Windows::Forms::Button^ btnDeleteQueue;
	// Doubly Linked List
	private: System::Windows::Forms::TextBox^ txtElement3;
	private: System::Windows::Forms::TextBox^ txtOutput3;
	private: System::Windows::Forms::Button^ btnDInsertFirst;
	private: System::Windows::Forms::Button^ btnDInsertLast;
	private: System::Windows::Forms::Button^ btnDFind;
	private: System::Windows::Forms::Button^ btnDInsertBefore;
	private: System::Windows::Forms::Button^ btnDInsertAfter;
	private: System::Windows::Forms::Button^ btnDDelete;
	private: System::Windows::Forms::Button^ btnDRandomInsert;
	private: System::Windows::Forms::Button^ btnDClear;
	private: System::Windows::Forms::Button^ btnDReverse;
	private: System::Windows::Forms::TextBox^ txtDN;
	private: System::Windows::Forms::TextBox^ txtDMin;
	private: System::Windows::Forms::TextBox^ txtDMax;
	private: System::Windows::Forms::Label^ labelDN;
	private: System::Windows::Forms::Label^ labelDMin;
	private: System::Windows::Forms::Label^ labelDMax;

	private: System::ComponentModel::Container^ components;

		   // Pointer
		   Node* header;
		   Node* last;
		   Node* stackHeader;
		   Node* queueHeader;
		   Node* queueRear;
		   DNode* dHeader;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
		   DNode* dLast;

#pragma region Windows Form Designer generated code
#pragma region Windows Form Designer generated code
	void InitializeComponent(void)
	{
		this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
		this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->txtElement = (gcnew System::Windows::Forms::TextBox());
		this->txtOutput = (gcnew System::Windows::Forms::TextBox());
		this->btnInsertFirst = (gcnew System::Windows::Forms::Button());
		this->btnInsertLast = (gcnew System::Windows::Forms::Button());
		this->btnFind = (gcnew System::Windows::Forms::Button());
		this->btnInsertAfter = (gcnew System::Windows::Forms::Button());
		this->btnInsertBefore = (gcnew System::Windows::Forms::Button());
		this->btnDelete = (gcnew System::Windows::Forms::Button());
		this->btnRandomInsert = (gcnew System::Windows::Forms::Button());
		this->btnClear = (gcnew System::Windows::Forms::Button());
		this->btnReverse = (gcnew System::Windows::Forms::Button());
		this->txtN = (gcnew System::Windows::Forms::TextBox());
		this->txtMin = (gcnew System::Windows::Forms::TextBox());
		this->txtMax = (gcnew System::Windows::Forms::TextBox());
		this->labelN = (gcnew System::Windows::Forms::Label());
		this->labelMin = (gcnew System::Windows::Forms::Label());
		this->labelMax = (gcnew System::Windows::Forms::Label());
		this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
		this->txtElement2 = (gcnew System::Windows::Forms::TextBox());
		this->btnPushStack = (gcnew System::Windows::Forms::Button());
		this->btnPopStack = (gcnew System::Windows::Forms::Button());
		this->btnInsertQueue = (gcnew System::Windows::Forms::Button());
		this->btnDeleteQueue = (gcnew System::Windows::Forms::Button());
		this->txtOutput2 = (gcnew System::Windows::Forms::TextBox());
		this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->labelDN = (gcnew System::Windows::Forms::Label());
		this->labelDMin = (gcnew System::Windows::Forms::Label());
		this->labelDMax = (gcnew System::Windows::Forms::Label());
		this->txtElement3 = (gcnew System::Windows::Forms::TextBox());
		this->btnDInsertFirst = (gcnew System::Windows::Forms::Button());
		this->btnDInsertLast = (gcnew System::Windows::Forms::Button());
		this->btnDFind = (gcnew System::Windows::Forms::Button());
		this->btnDInsertBefore = (gcnew System::Windows::Forms::Button());
		this->btnDInsertAfter = (gcnew System::Windows::Forms::Button());
		this->btnDDelete = (gcnew System::Windows::Forms::Button());
		this->btnDRandomInsert = (gcnew System::Windows::Forms::Button());
		this->btnDClear = (gcnew System::Windows::Forms::Button());
		this->btnDReverse = (gcnew System::Windows::Forms::Button());
		this->txtOutput3 = (gcnew System::Windows::Forms::TextBox());
		this->txtDN = (gcnew System::Windows::Forms::TextBox());
		this->txtDMin = (gcnew System::Windows::Forms::TextBox());
		this->txtDMax = (gcnew System::Windows::Forms::TextBox());
		this->tabControl1->SuspendLayout();
		this->tabPage1->SuspendLayout();
		this->tabPage2->SuspendLayout();
		this->tabPage3->SuspendLayout();
		this->SuspendLayout();
		// 
		// tabControl1
		// 
		this->tabControl1->Controls->Add(this->tabPage1);
		this->tabControl1->Controls->Add(this->tabPage2);
		this->tabControl1->Controls->Add(this->tabPage3);
		this->tabControl1->Location = System::Drawing::Point(1, 7);
		this->tabControl1->Name = L"tabControl1";
		this->tabControl1->SelectedIndex = 0;
		this->tabControl1->Size = System::Drawing::Size(1062, 617);
		this->tabControl1->TabIndex = 0;
		// 
		// tabPage1
		// 
		this->tabPage1->Controls->Add(this->label1);
		this->tabPage1->Controls->Add(this->txtElement);
		this->tabPage1->Controls->Add(this->txtOutput);
		this->tabPage1->Controls->Add(this->btnInsertFirst);
		this->tabPage1->Controls->Add(this->btnInsertLast);
		this->tabPage1->Controls->Add(this->btnFind);
		this->tabPage1->Controls->Add(this->btnInsertAfter);
		this->tabPage1->Controls->Add(this->btnInsertBefore);
		this->tabPage1->Controls->Add(this->btnDelete);
		this->tabPage1->Controls->Add(this->btnRandomInsert);
		this->tabPage1->Controls->Add(this->btnClear);
		this->tabPage1->Controls->Add(this->btnReverse);
		this->tabPage1->Controls->Add(this->txtN);
		this->tabPage1->Controls->Add(this->txtMin);
		this->tabPage1->Controls->Add(this->txtMax);
		this->tabPage1->Controls->Add(this->labelN);
		this->tabPage1->Controls->Add(this->labelMin);
		this->tabPage1->Controls->Add(this->labelMax);
		this->tabPage1->Location = System::Drawing::Point(4, 25);
		this->tabPage1->Name = L"tabPage1";
		this->tabPage1->Size = System::Drawing::Size(1054, 588);
		this->tabPage1->TabIndex = 0;
		this->tabPage1->Text = L"Singly Linked List";
		this->tabPage1->UseVisualStyleBackColor = true;
		// 
		// label1
		// 
		this->label1->Location = System::Drawing::Point(22, 48);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(98, 20);
		this->label1->TabIndex = 17;
		this->label1->Text = L"Element Value";
		this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
		// 
		// txtElement
		// 
		this->txtElement->Location = System::Drawing::Point(20, 20);
		this->txtElement->Name = L"txtElement";
		this->txtElement->Size = System::Drawing::Size(100, 25);
		this->txtElement->TabIndex = 0;
		// 
		// txtOutput
		// 
		this->txtOutput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->txtOutput->Location = System::Drawing::Point(20, 123);
		this->txtOutput->Multiline = true;
		this->txtOutput->Name = L"txtOutput";
		this->txtOutput->ReadOnly = true;
		this->txtOutput->Size = System::Drawing::Size(1000, 397);
		this->txtOutput->TabIndex = 1;
		// 
		// btnInsertFirst
		// 
		this->btnInsertFirst->Location = System::Drawing::Point(150, 20);
		this->btnInsertFirst->Name = L"btnInsertFirst";
		this->btnInsertFirst->Size = System::Drawing::Size(100, 30);
		this->btnInsertFirst->TabIndex = 2;
		this->btnInsertFirst->Text = L"Insert First";
		this->btnInsertFirst->Click += gcnew System::EventHandler(this, &Form1::btnInsertFirst_Click);
		// 
		// btnInsertLast
		// 
		this->btnInsertLast->Location = System::Drawing::Point(260, 20);
		this->btnInsertLast->Name = L"btnInsertLast";
		this->btnInsertLast->Size = System::Drawing::Size(100, 30);
		this->btnInsertLast->TabIndex = 3;
		this->btnInsertLast->Text = L"Insert Last";
		this->btnInsertLast->Click += gcnew System::EventHandler(this, &Form1::btnInsertLast_Click);
		// 
		// btnFind
		// 
		this->btnFind->Location = System::Drawing::Point(370, 20);
		this->btnFind->Name = L"btnFind";
		this->btnFind->Size = System::Drawing::Size(100, 30);
		this->btnFind->TabIndex = 4;
		this->btnFind->Text = L"Find Target";
		this->btnFind->Click += gcnew System::EventHandler(this, &Form1::btnFind_Click);
		// 
		// btnInsertAfter
		// 
		this->btnInsertAfter->Location = System::Drawing::Point(480, 20);
		this->btnInsertAfter->Name = L"btnInsertAfter";
		this->btnInsertAfter->Size = System::Drawing::Size(100, 30);
		this->btnInsertAfter->TabIndex = 5;
		this->btnInsertAfter->Text = L"Insert After";
		this->btnInsertAfter->Click += gcnew System::EventHandler(this, &Form1::btnInsertAfter_Click);
		// 
		// btnInsertBefore
		// 
		this->btnInsertBefore->Location = System::Drawing::Point(590, 20);
		this->btnInsertBefore->Name = L"btnInsertBefore";
		this->btnInsertBefore->Size = System::Drawing::Size(100, 30);
		this->btnInsertBefore->TabIndex = 6;
		this->btnInsertBefore->Text = L"Insert Before";
		this->btnInsertBefore->Click += gcnew System::EventHandler(this, &Form1::btnInsertBefore_Click);
		// 
		// btnDelete
		// 
		this->btnDelete->Location = System::Drawing::Point(700, 20);
		this->btnDelete->Name = L"btnDelete";
		this->btnDelete->Size = System::Drawing::Size(100, 30);
		this->btnDelete->TabIndex = 7;
		this->btnDelete->Text = L"Delete Target";
		this->btnDelete->Click += gcnew System::EventHandler(this, &Form1::btnDelete_Click);
		// 
		// btnRandomInsert
		// 
		this->btnRandomInsert->Location = System::Drawing::Point(150, 65);
		this->btnRandomInsert->Name = L"btnRandomInsert";
		this->btnRandomInsert->Size = System::Drawing::Size(100, 30);
		this->btnRandomInsert->TabIndex = 8;
		this->btnRandomInsert->Text = L"Random Insert";
		this->btnRandomInsert->Click += gcnew System::EventHandler(this, &Form1::btnRandomInsert_Click);
		// 
		// btnClear
		// 
		this->btnClear->Location = System::Drawing::Point(920, 20);
		this->btnClear->Name = L"btnClear";
		this->btnClear->Size = System::Drawing::Size(100, 30);
		this->btnClear->TabIndex = 9;
		this->btnClear->Text = L"Clear List";
		this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
		// 
		// btnReverse
		// 
		this->btnReverse->Location = System::Drawing::Point(810, 20);
		this->btnReverse->Name = L"btnReverse";
		this->btnReverse->Size = System::Drawing::Size(100, 30);
		this->btnReverse->TabIndex = 10;
		this->btnReverse->Text = L"Reverse List";
		this->btnReverse->Click += gcnew System::EventHandler(this, &Form1::btnReverse_Click);
		// 
		// txtN
		// 
		this->txtN->Location = System::Drawing::Point(260, 70);
		this->txtN->Name = L"txtN";
		this->txtN->Size = System::Drawing::Size(50, 25);
		this->txtN->TabIndex = 11;
		// 
		// txtMin
		// 
		this->txtMin->Location = System::Drawing::Point(370, 70);
		this->txtMin->Name = L"txtMin";
		this->txtMin->Size = System::Drawing::Size(50, 25);
		this->txtMin->TabIndex = 12;
		// 
		// txtMax
		// 
		this->txtMax->Location = System::Drawing::Point(480, 70);
		this->txtMax->Name = L"txtMax";
		this->txtMax->Size = System::Drawing::Size(50, 25);
		this->txtMax->TabIndex = 13;
		// 
		// labelN
		// 
		this->labelN->Location = System::Drawing::Point(260, 100);
		this->labelN->Name = L"labelN";
		this->labelN->Size = System::Drawing::Size(50, 20);
		this->labelN->TabIndex = 14;
		this->labelN->Text = L"n";
		// 
		// labelMin
		// 
		this->labelMin->Location = System::Drawing::Point(370, 100);
		this->labelMin->Name = L"labelMin";
		this->labelMin->Size = System::Drawing::Size(50, 20);
		this->labelMin->TabIndex = 15;
		this->labelMin->Text = L"min";
		// 
		// labelMax
		// 
		this->labelMax->Location = System::Drawing::Point(480, 100);
		this->labelMax->Name = L"labelMax";
		this->labelMax->Size = System::Drawing::Size(50, 20);
		this->labelMax->TabIndex = 16;
		this->labelMax->Text = L"max";
		// 
		// tabPage2
		// 
		this->tabPage2->Controls->Add(this->txtElement2);
		this->tabPage2->Controls->Add(this->btnPushStack);
		this->tabPage2->Controls->Add(this->btnPopStack);
		this->tabPage2->Controls->Add(this->btnInsertQueue);
		this->tabPage2->Controls->Add(this->btnDeleteQueue);
		this->tabPage2->Controls->Add(this->txtOutput2);
		this->tabPage2->Location = System::Drawing::Point(4, 25);
		this->tabPage2->Name = L"tabPage2";
		this->tabPage2->Size = System::Drawing::Size(1054, 588);
		this->tabPage2->TabIndex = 1;
		this->tabPage2->Text = L"Stack & Queue";
		this->tabPage2->UseVisualStyleBackColor = true;
		// 
		// txtElement2
		// 
		this->txtElement2->Location = System::Drawing::Point(20, 20);
		this->txtElement2->Name = L"txtElement2";
		this->txtElement2->Size = System::Drawing::Size(100, 25);
		this->txtElement2->TabIndex = 0;
		// 
		// btnPushStack
		// 
		this->btnPushStack->Location = System::Drawing::Point(150, 20);
		this->btnPushStack->Name = L"btnPushStack";
		this->btnPushStack->Size = System::Drawing::Size(100, 30);
		this->btnPushStack->TabIndex = 1;
		this->btnPushStack->Text = L"Push Stack";
		this->btnPushStack->Click += gcnew System::EventHandler(this, &Form1::btnPushStack_Click);
		// 
		// btnPopStack
		// 
		this->btnPopStack->Location = System::Drawing::Point(260, 20);
		this->btnPopStack->Name = L"btnPopStack";
		this->btnPopStack->Size = System::Drawing::Size(100, 30);
		this->btnPopStack->TabIndex = 2;
		this->btnPopStack->Text = L"Pop Stack";
		this->btnPopStack->Click += gcnew System::EventHandler(this, &Form1::btnPopStack_Click);
		// 
		// btnInsertQueue
		// 
		this->btnInsertQueue->Location = System::Drawing::Point(370, 20);
		this->btnInsertQueue->Name = L"btnInsertQueue";
		this->btnInsertQueue->Size = System::Drawing::Size(100, 30);
		this->btnInsertQueue->TabIndex = 3;
		this->btnInsertQueue->Text = L"Insert Queue";
		this->btnInsertQueue->Click += gcnew System::EventHandler(this, &Form1::btnInsertQueue_Click);
		// 
		// btnDeleteQueue
		// 
		this->btnDeleteQueue->Location = System::Drawing::Point(480, 20);
		this->btnDeleteQueue->Name = L"btnDeleteQueue";
		this->btnDeleteQueue->Size = System::Drawing::Size(100, 30);
		this->btnDeleteQueue->TabIndex = 4;
		this->btnDeleteQueue->Text = L"Delete Queue";
		this->btnDeleteQueue->Click += gcnew System::EventHandler(this, &Form1::btnDeleteQueue_Click);
		// 
		// txtOutput2
		// 
		this->txtOutput2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->txtOutput2->Location = System::Drawing::Point(20, 70);
		this->txtOutput2->Multiline = true;
		this->txtOutput2->Name = L"txtOutput2";
		this->txtOutput2->ReadOnly = true;
		this->txtOutput2->Size = System::Drawing::Size(1000, 400);
		this->txtOutput2->TabIndex = 5;
		// 
		// tabPage3
		// 
		this->tabPage3->Controls->Add(this->label2);
		this->tabPage3->Controls->Add(this->labelDN);
		this->tabPage3->Controls->Add(this->labelDMin);
		this->tabPage3->Controls->Add(this->labelDMax);
		this->tabPage3->Controls->Add(this->txtElement3);
		this->tabPage3->Controls->Add(this->btnDInsertFirst);
		this->tabPage3->Controls->Add(this->btnDInsertLast);
		this->tabPage3->Controls->Add(this->btnDFind);
		this->tabPage3->Controls->Add(this->btnDInsertBefore);
		this->tabPage3->Controls->Add(this->btnDInsertAfter);
		this->tabPage3->Controls->Add(this->btnDDelete);
		this->tabPage3->Controls->Add(this->btnDRandomInsert);
		this->tabPage3->Controls->Add(this->btnDClear);
		this->tabPage3->Controls->Add(this->btnDReverse);
		this->tabPage3->Controls->Add(this->txtOutput3);
		this->tabPage3->Controls->Add(this->txtDN);
		this->tabPage3->Controls->Add(this->txtDMin);
		this->tabPage3->Controls->Add(this->txtDMax);
		this->tabPage3->Location = System::Drawing::Point(4, 25);
		this->tabPage3->Name = L"tabPage3";
		this->tabPage3->Size = System::Drawing::Size(1054, 588);
		this->tabPage3->TabIndex = 2;
		this->tabPage3->Text = L"Doubly Linked List";
		this->tabPage3->UseVisualStyleBackColor = true;
		// 
		// label2
		// 
		this->label2->Location = System::Drawing::Point(22, 48);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(98, 20);
		this->label2->TabIndex = 18;
		this->label2->Text = L"Element Value";
		this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
		// 
		// labelDN
		// 
		this->labelDN->Location = System::Drawing::Point(260, 97);
		this->labelDN->Name = L"labelDN";
		this->labelDN->Size = System::Drawing::Size(50, 20);
		this->labelDN->TabIndex = 0;
		this->labelDN->Text = L"n";
		this->labelDN->Click += gcnew System::EventHandler(this, &Form1::labelDN_Click);
		// 
		// labelDMin
		// 
		this->labelDMin->Location = System::Drawing::Point(370, 97);
		this->labelDMin->Name = L"labelDMin";
		this->labelDMin->Size = System::Drawing::Size(50, 20);
		this->labelDMin->TabIndex = 1;
		this->labelDMin->Text = L"min";
		this->labelDMin->Click += gcnew System::EventHandler(this, &Form1::labelDMin_Click);
		// 
		// labelDMax
		// 
		this->labelDMax->Location = System::Drawing::Point(480, 97);
		this->labelDMax->Name = L"labelDMax";
		this->labelDMax->Size = System::Drawing::Size(50, 20);
		this->labelDMax->TabIndex = 2;
		this->labelDMax->Text = L"max";
		this->labelDMax->Click += gcnew System::EventHandler(this, &Form1::labelDMax_Click);
		// 
		// txtElement3
		// 
		this->txtElement3->Location = System::Drawing::Point(20, 20);
		this->txtElement3->Name = L"txtElement3";
		this->txtElement3->Size = System::Drawing::Size(100, 25);
		this->txtElement3->TabIndex = 3;
		// 
		// btnDInsertFirst
		// 
		this->btnDInsertFirst->Location = System::Drawing::Point(150, 20);
		this->btnDInsertFirst->Name = L"btnDInsertFirst";
		this->btnDInsertFirst->Size = System::Drawing::Size(100, 30);
		this->btnDInsertFirst->TabIndex = 4;
		this->btnDInsertFirst->Text = L"Insert First";
		this->btnDInsertFirst->Click += gcnew System::EventHandler(this, &Form1::btnDInsertFirst_Click);
		// 
		// btnDInsertLast
		// 
		this->btnDInsertLast->Location = System::Drawing::Point(260, 20);
		this->btnDInsertLast->Name = L"btnDInsertLast";
		this->btnDInsertLast->Size = System::Drawing::Size(100, 30);
		this->btnDInsertLast->TabIndex = 5;
		this->btnDInsertLast->Text = L"Insert Last";
		this->btnDInsertLast->Click += gcnew System::EventHandler(this, &Form1::btnDInsertLast_Click);
		// 
		// btnDFind
		// 
		this->btnDFind->Location = System::Drawing::Point(370, 20);
		this->btnDFind->Name = L"btnDFind";
		this->btnDFind->Size = System::Drawing::Size(100, 30);
		this->btnDFind->TabIndex = 6;
		this->btnDFind->Text = L"Find";
		this->btnDFind->Click += gcnew System::EventHandler(this, &Form1::btnDFind_Click);
		// 
		// btnDInsertBefore
		// 
		this->btnDInsertBefore->Location = System::Drawing::Point(480, 20);
		this->btnDInsertBefore->Name = L"btnDInsertBefore";
		this->btnDInsertBefore->Size = System::Drawing::Size(100, 30);
		this->btnDInsertBefore->TabIndex = 7;
		this->btnDInsertBefore->Text = L"Insert Before";
		this->btnDInsertBefore->Click += gcnew System::EventHandler(this, &Form1::btnDInsertBefore_Click);
		// 
		// btnDInsertAfter
		// 
		this->btnDInsertAfter->Location = System::Drawing::Point(590, 20);
		this->btnDInsertAfter->Name = L"btnDInsertAfter";
		this->btnDInsertAfter->Size = System::Drawing::Size(100, 30);
		this->btnDInsertAfter->TabIndex = 8;
		this->btnDInsertAfter->Text = L"Insert After";
		this->btnDInsertAfter->Click += gcnew System::EventHandler(this, &Form1::btnDInsertAfter_Click);
		// 
		// btnDDelete
		// 
		this->btnDDelete->Location = System::Drawing::Point(700, 20);
		this->btnDDelete->Name = L"btnDDelete";
		this->btnDDelete->Size = System::Drawing::Size(100, 30);
		this->btnDDelete->TabIndex = 9;
		this->btnDDelete->Text = L"Delete";
		this->btnDDelete->Click += gcnew System::EventHandler(this, &Form1::btnDDelete_Click);
		// 
		// btnDRandomInsert
		// 
		this->btnDRandomInsert->Location = System::Drawing::Point(150, 70);
		this->btnDRandomInsert->Name = L"btnDRandomInsert";
		this->btnDRandomInsert->Size = System::Drawing::Size(100, 30);
		this->btnDRandomInsert->TabIndex = 10;
		this->btnDRandomInsert->Text = L"Random Insert";
		this->btnDRandomInsert->Click += gcnew System::EventHandler(this, &Form1::btnDRandomInsert_Click);
		// 
		// btnDClear
		// 
		this->btnDClear->Location = System::Drawing::Point(920, 20);
		this->btnDClear->Name = L"btnDClear";
		this->btnDClear->Size = System::Drawing::Size(100, 30);
		this->btnDClear->TabIndex = 11;
		this->btnDClear->Text = L"Clear List";
		this->btnDClear->Click += gcnew System::EventHandler(this, &Form1::btnDClear_Click);
		// 
		// btnDReverse
		// 
		this->btnDReverse->Location = System::Drawing::Point(810, 20);
		this->btnDReverse->Name = L"btnDReverse";
		this->btnDReverse->Size = System::Drawing::Size(100, 30);
		this->btnDReverse->TabIndex = 12;
		this->btnDReverse->Text = L"Reverse List";
		this->btnDReverse->Click += gcnew System::EventHandler(this, &Form1::btnDReverse_Click);
		// 
		// txtOutput3
		// 
		this->txtOutput3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->txtOutput3->Location = System::Drawing::Point(20, 120);
		this->txtOutput3->Multiline = true;
		this->txtOutput3->Name = L"txtOutput3";
		this->txtOutput3->ReadOnly = true;
		this->txtOutput3->Size = System::Drawing::Size(1000, 400);
		this->txtOutput3->TabIndex = 13;
		// 
		// txtDN
		// 
		this->txtDN->Location = System::Drawing::Point(260, 70);
		this->txtDN->Name = L"txtDN";
		this->txtDN->Size = System::Drawing::Size(50, 25);
		this->txtDN->TabIndex = 14;
		this->txtDN->TextChanged += gcnew System::EventHandler(this, &Form1::txtDN_TextChanged);
		// 
		// txtDMin
		// 
		this->txtDMin->Location = System::Drawing::Point(370, 70);
		this->txtDMin->Name = L"txtDMin";
		this->txtDMin->Size = System::Drawing::Size(50, 25);
		this->txtDMin->TabIndex = 15;
		// 
		// txtDMax
		// 
		this->txtDMax->Location = System::Drawing::Point(480, 70);
		this->txtDMax->Name = L"txtDMax";
		this->txtDMax->Size = System::Drawing::Size(50, 25);
		this->txtDMax->TabIndex = 16;
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1064, 626);
		this->Controls->Add(this->tabControl1);
		this->Name = L"Form1";
		this->Text = L"Linked List by Shuo Fang 2024/4/29 ver. 0.5";
		this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
		this->tabControl1->ResumeLayout(false);
		this->tabPage1->ResumeLayout(false);
		this->tabPage1->PerformLayout();
		this->tabPage2->ResumeLayout(false);
		this->tabPage2->PerformLayout();
		this->tabPage3->ResumeLayout(false);
		this->tabPage3->PerformLayout();
		this->ResumeLayout(false);

	}
#pragma endregion
private:
	// init
	void InitSinglyCircularList()
	{
		header = new Node;
		header->next = header; // circular
		last = header;
	}

	//
	//	Singlely Linked List
	//
	// InsertFirst
	void InsertFirst(int x)
	{
		Node* newNode = new Node{ x, header->next };
		header->next = newNode;
		if (last == header) last = newNode;
		last->next = header;
		PrintSinglyList();
	}

	// InsertLast
	void InsertLast(int x)
	{
		Node* newNode = new Node{ x, header };
		last->next = newNode;
		last = newNode;
		PrintSinglyList();
	}

	// Find target
	Node* Find(int target)
	{
		Node* curr = header->next;
		while (curr != header)
		{
			if (curr->data == target) return curr;
			curr = curr->next;
		}
		return nullptr;
	}

	// InsertAfterTarget
	void InsertAfterTarget(int target, int x)
	{
		Node* targetNode = Find(target);
		if (targetNode != nullptr)
		{
			Node* newNode = new Node{ x, targetNode->next };
			targetNode->next = newNode;
			if (targetNode == last) last = newNode;
			PrintSinglyList();
		}
		else
		{
			MessageBox::Show("Target not found, cannot insert after.");
		}
	}

	// InsertBeforeTarget
	void InsertBeforeTarget(int target, int x)
	{
		Node* prev = header;
		Node* curr = header->next;
		while (curr != header)
		{
			if (curr->data == target)
			{
				Node* newNode = new Node{ x, curr };
				prev->next = newNode;
				PrintSinglyList();
				return;
			}
			prev = curr;
			curr = curr->next;
		}
		MessageBox::Show("Target not found, cannot insert before.");
	}

	// DeleteTarget
	void DeleteTarget(int target)
	{
		Node* prev = header;
		Node* curr = header->next;
		while (curr != header)
		{
			if (curr->data == target)
			{
				prev->next = curr->next;
				if (curr == last) last = prev;
				delete curr;
				PrintSinglyList();
				return;
			}
			prev = curr;
			curr = curr->next;
		}
		MessageBox::Show("Target not found, cannot delete.");
	}

	// RandomInsert n elements
	void RandomInsert(int n, int minVal, int maxVal)
	{
		Random^ rand = gcnew Random();
		for (int i = 0; i < n; ++i)
		{
			int val = rand->Next(minVal, maxVal + 1);
			InsertLast(val);
		}
		PrintSinglyList();
	}

	// ClearList (w/o header)
	void ClearList()
	{
		Node* curr = header->next;
		while (curr != header)
		{
			Node* temp = curr;
			curr = curr->next;
			delete temp;
		}
		header->next = header;
		last = header;
		PrintSinglyList();
	}

	// ReverseSinglyList
	void ReverseSinglyList()
	{
		Node* prev = header;
		Node* curr = header->next;
		Node* next = nullptr;
		while (curr != header)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		last = header->next;
		header->next = prev;
		PrintSinglyList();
	}

	// PrintSinglyList
	void PrintSinglyList()
	{
		txtOutput->Clear();
		Node* curr = header->next;
		while (curr != header)
		{
			txtOutput->AppendText(curr->data.ToString() + " => ");
			curr = curr->next;
		}
		txtOutput->AppendText("<");
	}

	private: System::Void btnInsertFirst_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement->Text != "")
		{
			int x = Int32::Parse(txtElement->Text);
			InsertFirst(x);
		}
	}

	private: System::Void btnInsertLast_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement->Text != "")
		{
			int x = Int32::Parse(txtElement->Text);
			InsertLast(x);
		}
	}

	private: System::Void btnFind_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement->Text != "")
		{
			int target = Int32::Parse(txtElement->Text);
			Node* found = Find(target);
			if (found != nullptr)
				MessageBox::Show("Target found!");
			else
				MessageBox::Show("Target not found.");
		}
	}

	private: System::Void btnInsertAfter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement->Text != "")
		{
			int target = Int32::Parse(txtElement->Text);
			InsertAfterTarget(target, target + 1);
		}
	}

	private: System::Void btnInsertBefore_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement->Text != "")
		{
			int target = Int32::Parse(txtElement->Text);
			InsertBeforeTarget(target, target - 1);
		}
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement->Text != "")
		{
			int target = Int32::Parse(txtElement->Text);
			DeleteTarget(target);
		}
	}

	private: System::Void btnRandomInsert_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtN->Text != "" && txtMin->Text != "" && txtMax->Text != "")
		{
			int n = Int32::Parse(txtN->Text);
			int minVal = Int32::Parse(txtMin->Text);
			int maxVal = Int32::Parse(txtMax->Text);

			if (minVal > maxVal)
			{
				MessageBox::Show("Error: min value cannot be greater than max value.");
				return;
			}
			RandomInsert(n, minVal, maxVal);
		}
		else
		{
			MessageBox::Show("Please input n, min, and max values.");
		}
	}

	//
	//	Stack/Queue
	//
	void PrintStackAndQueue()
	{
		txtOutput2->Clear();

		// Print Stack
		txtOutput2->AppendText("Stack (Top->Bottom):\r\n");
		Node* curr = stackHeader->next;
		while (curr != nullptr)
		{
			txtOutput2->AppendText(curr->data.ToString() + " -> ");
			curr = curr->next;
		}
		txtOutput2->AppendText("null\r\n\r\n");

		// Print Queue
		txtOutput2->AppendText("Queue (Front->Rear):\r\n");
		curr = queueHeader->next;
		while (curr != nullptr)
		{
			txtOutput2->AppendText(curr->data.ToString() + " -> ");
			curr = curr->next;
		}
		txtOutput2->AppendText("null");
	}

	private: System::Void btnPushStack_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement2->Text != "")
		{
			int val = Int32::Parse(txtElement2->Text);
			Node* newNode = new Node{ val, stackHeader->next };
			stackHeader->next = newNode;
			PrintStackAndQueue();
		}
	}

	private: System::Void btnPopStack_Click(System::Object^ sender, System::EventArgs^ e) {
		if (stackHeader->next == nullptr)
		{
			MessageBox::Show("Stack is empty.");
		}
		else
		{
			Node* temp = stackHeader->next;
			stackHeader->next = temp->next;
			delete temp;
			PrintStackAndQueue();
		}
	}

	private: System::Void btnInsertQueue_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtElement2->Text != "")
		{
			int val = Int32::Parse(txtElement2->Text);
			Node* newNode = new Node{ val, nullptr };
			queueRear->next = newNode;
			queueRear = newNode;
			PrintStackAndQueue();
		}
	}
	
	private: System::Void btnDeleteQueue_Click(System::Object^ sender, System::EventArgs^ e) {
		if (queueHeader->next == nullptr)
		{
			MessageBox::Show("Queue is empty.");
		}
		else
		{
			Node* temp = queueHeader->next;
			queueHeader->next = temp->next;
			if (queueRear == temp) queueRear = queueHeader; //	if delete last element
			delete temp;
			PrintStackAndQueue();
		}
	}

	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearList();
	}

	private: System::Void btnReverse_Click(System::Object^ sender, System::EventArgs^ e) {
		ReverseSinglyList();
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		PrintSinglyList();
		InitStack();
		InitQueue();
		InitDoublyList();
	}

	void InitStack()
	{
		stackHeader = new Node;
		stackHeader->next = nullptr;
	}

	void InitQueue()
	{
		queueHeader = new Node;
		queueHeader->next = nullptr;
		queueRear = queueHeader;
	}

	// ===== Doubly Linked List 初始化 =====
	void InitDoublyList()
	{
		dHeader = new DNode;
		dHeader->next = dHeader;
		dHeader->prev = dHeader;
		dLast = dHeader;
	}

	//
	// Double Linked List
	//
	void DInsertFirst(int x)
	{
		DNode* newNode = new DNode{ x, dHeader->next, dHeader };
		dHeader->next->prev = newNode;
		dHeader->next = newNode;
		if (dLast == dHeader) dLast = newNode;
		PrintDoublyList();
	}

	void DInsertLast(int x)
	{
		DNode* newNode = new DNode{ x, dHeader, dLast };
		dLast->next = newNode;
		dHeader->prev = newNode;
		dLast = newNode;
		PrintDoublyList();
	}

	DNode* DFind(int target)
	{
		DNode* curr = dHeader->next;
		while (curr != dHeader)
		{
			if (curr->data == target)
				return curr;
			curr = curr->next;
		}
		return nullptr;
	}

	void DInsertBefore(int target, int x)
	{
		DNode* targetNode = DFind(target);
		if (targetNode != nullptr)
		{
			DNode* newNode = new DNode{ x, targetNode, targetNode->prev };
			targetNode->prev->next = newNode;
			targetNode->prev = newNode;
			PrintDoublyList();
		}
		else
		{
			MessageBox::Show("Target not found, cannot insert before.");
		}
	}

	void DInsertAfter(int target, int x)
	{
		DNode* targetNode = DFind(target);
		if (targetNode != nullptr)
		{
			DNode* newNode = new DNode{ x, targetNode->next, targetNode };
			targetNode->next->prev = newNode;
			targetNode->next = newNode;
			if (targetNode == dLast) dLast = newNode;
			PrintDoublyList();
		}
		else
		{
			MessageBox::Show("Target not found, cannot insert after.");
		}
	}

	void DDelete(int target)
	{
		DNode* targetNode = DFind(target);
		if (targetNode != nullptr)
		{
			targetNode->prev->next = targetNode->next;
			targetNode->next->prev = targetNode->prev;
			if (targetNode == dLast) dLast = targetNode->prev;
			delete targetNode;
			PrintDoublyList();
		}
		else
		{
			MessageBox::Show("Target not found, cannot delete.");
		}
	}

	void DRandomInsert(int n, int minVal, int maxVal)
	{
		Random^ rand = gcnew Random();
		for (int i = 0; i < n; ++i)
		{
			int val = rand->Next(minVal, maxVal + 1);
			DInsertLast(val);
		}
		PrintDoublyList();
	}

	void DClearList()
	{
		DNode* curr = dHeader->next;
		while (curr != dHeader)
		{
			DNode* temp = curr;
			curr = curr->next;
			delete temp;
		}
		dHeader->next = dHeader;
		dHeader->prev = dHeader;
		dLast = dHeader;
		PrintDoublyList();
	}

	void DReverseList()
	{
		DNode* curr = dHeader;
		do
		{
			DNode* temp = curr->next;
			curr->next = curr->prev;
			curr->prev = temp;
			curr = temp;
		} while (curr != dHeader);

		// 重新設定 dLast
		dLast = dHeader->next;
		while (dLast->next != dHeader)
		{
			dLast = dLast->next;
		}
		PrintDoublyList();
	}

	void PrintDoublyList()
	{
		txtOutput3->Clear();
		DNode* curr = dHeader->next;
		while (curr != dHeader)
		{
			txtOutput3->AppendText(curr->data.ToString() + " <-> ");
			curr = curr->next;
		}
		txtOutput3->AppendText("<>");
	}

// Insert First_DLL
private: System::Void btnDInsertFirst_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElement3->Text != "")
	{
		int x = Int32::Parse(txtElement3->Text);
		DInsertFirst(x);
	}
}

// Insert Last_DLL
private: System::Void btnDInsertLast_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElement3->Text != "")
	{
		int x = Int32::Parse(txtElement3->Text);
		DInsertLast(x);
	}
}

// Find_DLL
private: System::Void btnDFind_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElement3->Text != "")
	{
		int target = Int32::Parse(txtElement3->Text);
		DNode* found = DFind(target);
		if (found != nullptr)
			MessageBox::Show("Target found!");
		else
			MessageBox::Show("Target not found.");
	}
}

// Insert Before_DLL
private: System::Void btnDInsertBefore_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElement3->Text != "")
	{
		int target = Int32::Parse(txtElement3->Text);
		DInsertBefore(target, target - 1);
	}
}

// Insert After_DLL
private: System::Void btnDInsertAfter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElement3->Text != "")
	{
		int target = Int32::Parse(txtElement3->Text);
		DInsertAfter(target, target + 1);
	}
}

// Delete_DLL
private: System::Void btnDDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElement3->Text != "")
	{
		int target = Int32::Parse(txtElement3->Text);
		DDelete(target);
	}
}

// Random Insert_DLL
private: System::Void btnDRandomInsert_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDN->Text != "" && txtDMin->Text != "" && txtDMax->Text != "")
	{
		int n = Int32::Parse(txtDN->Text);
		int minVal = Int32::Parse(txtDMin->Text);
		int maxVal = Int32::Parse(txtDMax->Text);

		if (minVal > maxVal)
		{
			MessageBox::Show("Error: min value cannot be greater than max value.");
			return;
		}
		DRandomInsert(n, minVal, maxVal);
	}
	else
	{
		MessageBox::Show("Please input n, min, and max values.");
	}
}

	private: System::Void btnDClear_Click(System::Object^ sender, System::EventArgs^ e) {
		DClearList();
	}

	private: System::Void btnDReverse_Click(System::Object^ sender, System::EventArgs^ e) {
		DReverseList();
	}

	private: System::Void txtDN_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelDMax_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelDMin_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelDN_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
