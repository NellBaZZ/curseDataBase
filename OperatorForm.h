#pragma once
#include "MainForm.h"



namespace curseFormSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для OperatorForm
	/// </summary>
	public ref class OperatorForm : public System::Windows::Forms::Form
	{
	public:
		OperatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~OperatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewTable;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ labelPost;

	private: System::Windows::Forms::Label^ labelLogin;
	private: System::Windows::Forms::Label^ labelP;
	private: System::Windows::Forms::Label^ labelL;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonRedactClient;

	private: System::Windows::Forms::Button^ buttonCheckBook;
	private: System::Windows::Forms::Button^ buttonCheckClient;

	private: System::Windows::Forms::Button^ buttonSearchClient;
	private: System::Windows::Forms::Button^ buttonSearchIndexBook;

	private: System::Windows::Forms::TextBox^ textBoxCodeClient;

	private: System::Windows::Forms::TextBox^ textBoxNameBook;

	private: System::Windows::Forms::TextBox^ textBoxIndexBook;

	private: System::Windows::Forms::Button^ buttonCheckSub;
	private: System::Windows::Forms::Button^ buttonRedactSub;
	private: System::Windows::Forms::Button^ buttonSearchSub;
	private: System::Windows::Forms::TextBox^ textBoxNumberSub;


	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TextBox^ textBoxPriceBook;
	private: System::Windows::Forms::TextBox^ textBoxTypeBook;
	private: System::Windows::Forms::TextBox^ textBoxAddressClient;
	private: System::Windows::Forms::TextBox^ textBoxFIOClient;
	private: System::Windows::Forms::TextBox^ textBoxIndexSub;
	private: System::Windows::Forms::Button^ buttonSearchNameBook;

	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBoxCodeSub;
	private: System::Windows::Forms::Button^ buttonSearchPriceBook;
	private: System::Windows::Forms::Button^ buttonSearchTypeBook;
	private: System::Windows::Forms::Button^ buttonSearchAddressClient;
	private: System::Windows::Forms::Button^ buttonSearchFIOClient;
	private: System::Windows::Forms::Button^ buttonSearchTimeSub;
	private: System::Windows::Forms::Button^ buttonSearchYearSub;
	private: System::Windows::Forms::Button^ buttonSearchMonthSub;
	private: System::Windows::Forms::Button^ buttonSearchCodeSub;
	private: System::Windows::Forms::Button^ buttonSearchIndexSub;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewTable = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelPost = (gcnew System::Windows::Forms::Label());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->labelP = (gcnew System::Windows::Forms::Label());
			this->labelL = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonRedactClient = (gcnew System::Windows::Forms::Button());
			this->buttonCheckBook = (gcnew System::Windows::Forms::Button());
			this->buttonCheckClient = (gcnew System::Windows::Forms::Button());
			this->buttonSearchClient = (gcnew System::Windows::Forms::Button());
			this->buttonSearchIndexBook = (gcnew System::Windows::Forms::Button());
			this->textBoxCodeClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNameBook = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIndexBook = (gcnew System::Windows::Forms::TextBox());
			this->buttonCheckSub = (gcnew System::Windows::Forms::Button());
			this->buttonRedactSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchSub = (gcnew System::Windows::Forms::Button());
			this->textBoxNumberSub = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchPriceBook = (gcnew System::Windows::Forms::Button());
			this->buttonSearchTypeBook = (gcnew System::Windows::Forms::Button());
			this->buttonSearchNameBook = (gcnew System::Windows::Forms::Button());
			this->textBoxPriceBook = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTypeBook = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchAddressClient = (gcnew System::Windows::Forms::Button());
			this->buttonSearchFIOClient = (gcnew System::Windows::Forms::Button());
			this->textBoxAddressClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFIOClient = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchTimeSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchYearSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchMonthSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchCodeSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchIndexSub = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBoxCodeSub = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIndexSub = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewTable
			// 
			this->dataGridViewTable->AllowUserToAddRows = false;
			this->dataGridViewTable->AllowUserToDeleteRows = false;
			this->dataGridViewTable->BackgroundColor = System::Drawing::Color::Azure;
			this->dataGridViewTable->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridViewTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTable->GridColor = System::Drawing::SystemColors::WindowText;
			this->dataGridViewTable->Location = System::Drawing::Point(31, 282);
			this->dataGridViewTable->Name = L"dataGridViewTable";
			this->dataGridViewTable->ReadOnly = true;
			this->dataGridViewTable->RowHeadersWidth = 51;
			this->dataGridViewTable->RowTemplate->Height = 24;
			this->dataGridViewTable->Size = System::Drawing::Size(1322, 392);
			this->dataGridViewTable->TabIndex = 0;
			this->dataGridViewTable->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OperatorForm::dataGridViewTable_CellContentDoubleClick);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Azure;
			this->groupBox1->Controls->Add(this->labelPost);
			this->groupBox1->Controls->Add(this->labelLogin);
			this->groupBox1->Controls->Add(this->labelP);
			this->groupBox1->Controls->Add(this->labelL);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1054, 63);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 110);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Данные пользователя";
			// 
			// labelPost
			// 
			this->labelPost->AutoSize = true;
			this->labelPost->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPost->Location = System::Drawing::Point(97, 70);
			this->labelPost->Name = L"labelPost";
			this->labelPost->Size = System::Drawing::Size(205, 18);
			this->labelPost->TabIndex = 3;
			this->labelPost->Text = L"тут должность пользователя";
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLogin->Location = System::Drawing::Point(97, 36);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(169, 18);
			this->labelLogin->TabIndex = 2;
			this->labelLogin->Text = L"тут логин пользователя";
			// 
			// labelP
			// 
			this->labelP->AutoSize = true;
			this->labelP->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelP->ForeColor = System::Drawing::Color::Purple;
			this->labelP->Location = System::Drawing::Point(6, 70);
			this->labelP->Name = L"labelP";
			this->labelP->Size = System::Drawing::Size(85, 18);
			this->labelP->TabIndex = 1;
			this->labelP->Text = L"Должность:";
			// 
			// labelL
			// 
			this->labelL->AutoSize = true;
			this->labelL->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelL->ForeColor = System::Drawing::Color::Purple;
			this->labelL->Location = System::Drawing::Point(7, 36);
			this->labelL->Name = L"labelL";
			this->labelL->Size = System::Drawing::Size(49, 18);
			this->labelL->TabIndex = 0;
			this->labelL->Text = L"Логин:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LavenderBlush;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выйтиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(1390, 31);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(81, 27);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &OperatorForm::выйтиToolStripMenuItem_Click);
			// 
			// buttonRedactClient
			// 
			this->buttonRedactClient->BackColor = System::Drawing::Color::Azure;
			this->buttonRedactClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedactClient->Location = System::Drawing::Point(310, 102);
			this->buttonRedactClient->Name = L"buttonRedactClient";
			this->buttonRedactClient->Size = System::Drawing::Size(300, 80);
			this->buttonRedactClient->TabIndex = 3;
			this->buttonRedactClient->Text = L"Редактировать клиента";
			this->buttonRedactClient->UseVisualStyleBackColor = false;
			this->buttonRedactClient->Click += gcnew System::EventHandler(this, &OperatorForm::buttonRedactClient_Click);
			// 
			// buttonCheckBook
			// 
			this->buttonCheckBook->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckBook->Location = System::Drawing::Point(3, 3);
			this->buttonCheckBook->Name = L"buttonCheckBook";
			this->buttonCheckBook->Size = System::Drawing::Size(301, 179);
			this->buttonCheckBook->TabIndex = 5;
			this->buttonCheckBook->Text = L"Просмотреть список изданий";
			this->buttonCheckBook->UseVisualStyleBackColor = false;
			this->buttonCheckBook->Click += gcnew System::EventHandler(this, &OperatorForm::buttonCheckBook_Click);
			// 
			// buttonCheckClient
			// 
			this->buttonCheckClient->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckClient->Location = System::Drawing::Point(310, 4);
			this->buttonCheckClient->Name = L"buttonCheckClient";
			this->buttonCheckClient->Size = System::Drawing::Size(300, 92);
			this->buttonCheckClient->TabIndex = 6;
			this->buttonCheckClient->Text = L"Просмотреть список клиентов";
			this->buttonCheckClient->UseVisualStyleBackColor = false;
			this->buttonCheckClient->Click += gcnew System::EventHandler(this, &OperatorForm::buttonCheckClient_Click);
			// 
			// buttonSearchClient
			// 
			this->buttonSearchClient->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchClient->Location = System::Drawing::Point(6, 73);
			this->buttonSearchClient->Name = L"buttonSearchClient";
			this->buttonSearchClient->Size = System::Drawing::Size(260, 109);
			this->buttonSearchClient->TabIndex = 8;
			this->buttonSearchClient->Text = L"Поиск по коду";
			this->buttonSearchClient->UseVisualStyleBackColor = false;
			this->buttonSearchClient->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchClient_Click);
			// 
			// buttonSearchIndexBook
			// 
			this->buttonSearchIndexBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchIndexBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchIndexBook->Location = System::Drawing::Point(3, 74);
			this->buttonSearchIndexBook->Name = L"buttonSearchIndexBook";
			this->buttonSearchIndexBook->Size = System::Drawing::Size(206, 108);
			this->buttonSearchIndexBook->TabIndex = 9;
			this->buttonSearchIndexBook->Text = L"Поиск по индексу";
			this->buttonSearchIndexBook->UseVisualStyleBackColor = false;
			this->buttonSearchIndexBook->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchIndexBook_Click);
			// 
			// textBoxCodeClient
			// 
			this->textBoxCodeClient->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxCodeClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCodeClient->Location = System::Drawing::Point(6, 44);
			this->textBoxCodeClient->Name = L"textBoxCodeClient";
			this->textBoxCodeClient->Size = System::Drawing::Size(260, 23);
			this->textBoxCodeClient->TabIndex = 10;
			// 
			// textBoxNameBook
			// 
			this->textBoxNameBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxNameBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxNameBook->Location = System::Drawing::Point(215, 45);
			this->textBoxNameBook->Name = L"textBoxNameBook";
			this->textBoxNameBook->Size = System::Drawing::Size(254, 23);
			this->textBoxNameBook->TabIndex = 11;
			// 
			// textBoxIndexBook
			// 
			this->textBoxIndexBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxIndexBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxIndexBook->Location = System::Drawing::Point(6, 45);
			this->textBoxIndexBook->Name = L"textBoxIndexBook";
			this->textBoxIndexBook->Size = System::Drawing::Size(203, 23);
			this->textBoxIndexBook->TabIndex = 12;
			// 
			// buttonCheckSub
			// 
			this->buttonCheckSub->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckSub->Location = System::Drawing::Point(616, 3);
			this->buttonCheckSub->Name = L"buttonCheckSub";
			this->buttonCheckSub->Size = System::Drawing::Size(310, 93);
			this->buttonCheckSub->TabIndex = 13;
			this->buttonCheckSub->Text = L"Просмотреть список подписок";
			this->buttonCheckSub->UseVisualStyleBackColor = false;
			this->buttonCheckSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonCheckSub_Click);
			// 
			// buttonRedactSub
			// 
			this->buttonRedactSub->BackColor = System::Drawing::Color::Azure;
			this->buttonRedactSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedactSub->Location = System::Drawing::Point(616, 102);
			this->buttonRedactSub->Name = L"buttonRedactSub";
			this->buttonRedactSub->Size = System::Drawing::Size(307, 83);
			this->buttonRedactSub->TabIndex = 14;
			this->buttonRedactSub->Text = L"Редактировать подписку";
			this->buttonRedactSub->UseVisualStyleBackColor = false;
			this->buttonRedactSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonRedactSub_Click);
			// 
			// buttonSearchSub
			// 
			this->buttonSearchSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchSub->Location = System::Drawing::Point(3, 78);
			this->buttonSearchSub->Name = L"buttonSearchSub";
			this->buttonSearchSub->Size = System::Drawing::Size(159, 107);
			this->buttonSearchSub->TabIndex = 15;
			this->buttonSearchSub->Text = L"Поиск по номеру подписки";
			this->buttonSearchSub->UseVisualStyleBackColor = false;
			this->buttonSearchSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchSub_Click);
			// 
			// textBoxNumberSub
			// 
			this->textBoxNumberSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxNumberSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxNumberSub->Location = System::Drawing::Point(3, 49);
			this->textBoxNumberSub->Name = L"textBoxNumberSub";
			this->textBoxNumberSub->Size = System::Drawing::Size(159, 23);
			this->textBoxNumberSub->TabIndex = 16;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(31, 34);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(937, 221);
			this->tabControl1->TabIndex = 18;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPage1->Controls->Add(this->buttonRedactClient);
			this->tabPage1->Controls->Add(this->buttonRedactSub);
			this->tabPage1->Controls->Add(this->buttonCheckSub);
			this->tabPage1->Controls->Add(this->buttonCheckClient);
			this->tabPage1->Controls->Add(this->buttonCheckBook);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(929, 188);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основное меню";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->buttonSearchPriceBook);
			this->tabPage2->Controls->Add(this->buttonSearchTypeBook);
			this->tabPage2->Controls->Add(this->buttonSearchNameBook);
			this->tabPage2->Controls->Add(this->textBoxPriceBook);
			this->tabPage2->Controls->Add(this->textBoxTypeBook);
			this->tabPage2->Controls->Add(this->buttonSearchIndexBook);
			this->tabPage2->Controls->Add(this->textBoxIndexBook);
			this->tabPage2->Controls->Add(this->textBoxNameBook);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(929, 188);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Поиск среди каталога изданий";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(700, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 18);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Введите цену издания:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(472, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 18);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Введите тип издания:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(228, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 18);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Введите название издания:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(166, 18);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Введите индекс издания:";
			// 
			// buttonSearchPriceBook
			// 
			this->buttonSearchPriceBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchPriceBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchPriceBook->Location = System::Drawing::Point(703, 74);
			this->buttonSearchPriceBook->Name = L"buttonSearchPriceBook";
			this->buttonSearchPriceBook->Size = System::Drawing::Size(203, 108);
			this->buttonSearchPriceBook->TabIndex = 17;
			this->buttonSearchPriceBook->Text = L"Поиск по цене";
			this->buttonSearchPriceBook->UseVisualStyleBackColor = false;
			this->buttonSearchPriceBook->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchPriceBook_Click);
			// 
			// buttonSearchTypeBook
			// 
			this->buttonSearchTypeBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchTypeBook->Location = System::Drawing::Point(475, 74);
			this->buttonSearchTypeBook->Name = L"buttonSearchTypeBook";
			this->buttonSearchTypeBook->Size = System::Drawing::Size(222, 108);
			this->buttonSearchTypeBook->TabIndex = 16;
			this->buttonSearchTypeBook->Text = L"Поиск по типу издания";
			this->buttonSearchTypeBook->UseVisualStyleBackColor = false;
			this->buttonSearchTypeBook->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchTypeBook_Click);
			// 
			// buttonSearchNameBook
			// 
			this->buttonSearchNameBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchNameBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchNameBook->Location = System::Drawing::Point(215, 74);
			this->buttonSearchNameBook->Name = L"buttonSearchNameBook";
			this->buttonSearchNameBook->Size = System::Drawing::Size(254, 108);
			this->buttonSearchNameBook->TabIndex = 15;
			this->buttonSearchNameBook->Text = L"Поиск по названию";
			this->buttonSearchNameBook->UseVisualStyleBackColor = false;
			this->buttonSearchNameBook->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchNameBook_Click);
			// 
			// textBoxPriceBook
			// 
			this->textBoxPriceBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxPriceBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPriceBook->Location = System::Drawing::Point(703, 45);
			this->textBoxPriceBook->Name = L"textBoxPriceBook";
			this->textBoxPriceBook->Size = System::Drawing::Size(203, 23);
			this->textBoxPriceBook->TabIndex = 14;
			// 
			// textBoxTypeBook
			// 
			this->textBoxTypeBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTypeBook->Location = System::Drawing::Point(475, 45);
			this->textBoxTypeBook->Name = L"textBoxTypeBook";
			this->textBoxTypeBook->Size = System::Drawing::Size(222, 23);
			this->textBoxTypeBook->TabIndex = 13;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->buttonSearchAddressClient);
			this->tabPage3->Controls->Add(this->buttonSearchFIOClient);
			this->tabPage3->Controls->Add(this->textBoxAddressClient);
			this->tabPage3->Controls->Add(this->textBoxFIOClient);
			this->tabPage3->Controls->Add(this->buttonSearchClient);
			this->tabPage3->Controls->Add(this->textBoxCodeClient);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(929, 188);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Поиск среди клиентов";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(624, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 18);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Введите адрес клиента:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(268, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 18);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Введите ФИО клиента:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 18);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Введите код клиента:";
			// 
			// buttonSearchAddressClient
			// 
			this->buttonSearchAddressClient->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchAddressClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchAddressClient->Location = System::Drawing::Point(627, 73);
			this->buttonSearchAddressClient->Name = L"buttonSearchAddressClient";
			this->buttonSearchAddressClient->Size = System::Drawing::Size(299, 109);
			this->buttonSearchAddressClient->TabIndex = 17;
			this->buttonSearchAddressClient->Text = L"Поиск по адресу";
			this->buttonSearchAddressClient->UseVisualStyleBackColor = false;
			this->buttonSearchAddressClient->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchAddressClient_Click);
			// 
			// buttonSearchFIOClient
			// 
			this->buttonSearchFIOClient->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchFIOClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchFIOClient->Location = System::Drawing::Point(271, 73);
			this->buttonSearchFIOClient->Name = L"buttonSearchFIOClient";
			this->buttonSearchFIOClient->Size = System::Drawing::Size(349, 109);
			this->buttonSearchFIOClient->TabIndex = 16;
			this->buttonSearchFIOClient->Text = L"Поиск по ФИО";
			this->buttonSearchFIOClient->UseVisualStyleBackColor = false;
			this->buttonSearchFIOClient->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchFIOClient_Click);
			// 
			// textBoxAddressClient
			// 
			this->textBoxAddressClient->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddressClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddressClient->Location = System::Drawing::Point(627, 44);
			this->textBoxAddressClient->Name = L"textBoxAddressClient";
			this->textBoxAddressClient->Size = System::Drawing::Size(299, 23);
			this->textBoxAddressClient->TabIndex = 13;
			// 
			// textBoxFIOClient
			// 
			this->textBoxFIOClient->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxFIOClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxFIOClient->Location = System::Drawing::Point(272, 44);
			this->textBoxFIOClient->Name = L"textBoxFIOClient";
			this->textBoxFIOClient->Size = System::Drawing::Size(349, 23);
			this->textBoxFIOClient->TabIndex = 12;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->buttonSearchTimeSub);
			this->tabPage4->Controls->Add(this->buttonSearchYearSub);
			this->tabPage4->Controls->Add(this->buttonSearchMonthSub);
			this->tabPage4->Controls->Add(this->buttonSearchCodeSub);
			this->tabPage4->Controls->Add(this->buttonSearchIndexSub);
			this->tabPage4->Controls->Add(this->listBox3);
			this->tabPage4->Controls->Add(this->listBox2);
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Controls->Add(this->textBoxCodeSub);
			this->tabPage4->Controls->Add(this->textBoxIndexSub);
			this->tabPage4->Controls->Add(this->textBoxNumberSub);
			this->tabPage4->Controls->Add(this->buttonSearchSub);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(929, 188);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Поиск среди подписок";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(759, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(133, 18);
			this->label14->TabIndex = 41;
			this->label14->Text = L"действия подписки:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(504, 26);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(180, 18);
			this->label13->TabIndex = 40;
			this->label13->Text = L"начала действия подписки:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(759, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(103, 18);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Выберите срок";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(504, 10);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 18);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Выберите месяц или год";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(350, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 18);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Введите код клиента:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(178, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 18);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Введите индекс издания:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(169, 18);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Введите номер подписки:";
			// 
			// buttonSearchTimeSub
			// 
			this->buttonSearchTimeSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchTimeSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchTimeSub->Location = System::Drawing::Point(762, 78);
			this->buttonSearchTimeSub->Name = L"buttonSearchTimeSub";
			this->buttonSearchTimeSub->Size = System::Drawing::Size(155, 106);
			this->buttonSearchTimeSub->TabIndex = 26;
			this->buttonSearchTimeSub->Text = L"Поиск по сроку действия";
			this->buttonSearchTimeSub->UseVisualStyleBackColor = false;
			this->buttonSearchTimeSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchTimeSub_Click);
			// 
			// buttonSearchYearSub
			// 
			this->buttonSearchYearSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchYearSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchYearSub->Location = System::Drawing::Point(636, 77);
			this->buttonSearchYearSub->Name = L"buttonSearchYearSub";
			this->buttonSearchYearSub->Size = System::Drawing::Size(120, 108);
			this->buttonSearchYearSub->TabIndex = 25;
			this->buttonSearchYearSub->Text = L"Поиск по нач. году";
			this->buttonSearchYearSub->UseVisualStyleBackColor = false;
			this->buttonSearchYearSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchYearSub_Click);
			// 
			// buttonSearchMonthSub
			// 
			this->buttonSearchMonthSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchMonthSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchMonthSub->Location = System::Drawing::Point(510, 78);
			this->buttonSearchMonthSub->Name = L"buttonSearchMonthSub";
			this->buttonSearchMonthSub->Size = System::Drawing::Size(120, 107);
			this->buttonSearchMonthSub->TabIndex = 24;
			this->buttonSearchMonthSub->Text = L"Поиск по нач. месяцу";
			this->buttonSearchMonthSub->UseVisualStyleBackColor = false;
			this->buttonSearchMonthSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchMonthSub_Click);
			// 
			// buttonSearchCodeSub
			// 
			this->buttonSearchCodeSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchCodeSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchCodeSub->Location = System::Drawing::Point(353, 78);
			this->buttonSearchCodeSub->Name = L"buttonSearchCodeSub";
			this->buttonSearchCodeSub->Size = System::Drawing::Size(148, 107);
			this->buttonSearchCodeSub->TabIndex = 23;
			this->buttonSearchCodeSub->Text = L"Поиск по коду клиента";
			this->buttonSearchCodeSub->UseVisualStyleBackColor = false;
			this->buttonSearchCodeSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchCodeSub_Click);
			// 
			// buttonSearchIndexSub
			// 
			this->buttonSearchIndexSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchIndexSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchIndexSub->Location = System::Drawing::Point(168, 78);
			this->buttonSearchIndexSub->Name = L"buttonSearchIndexSub";
			this->buttonSearchIndexSub->Size = System::Drawing::Size(176, 107);
			this->buttonSearchIndexSub->TabIndex = 22;
			this->buttonSearchIndexSub->Text = L"Поиск по индексу издания";
			this->buttonSearchIndexSub->UseVisualStyleBackColor = false;
			this->buttonSearchIndexSub->Click += gcnew System::EventHandler(this, &OperatorForm::buttonSearchIndexSub_Click);
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1 месяц", L"3 месяца", L"6 месяцев" });
			this->listBox3->Location = System::Drawing::Point(762, 47);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(155, 44);
			this->listBox3->TabIndex = 21;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &OperatorForm::listBox3_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"2022", L"2023", L"2024", L"2025", L"2026", L"2027",
					L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038", L"2039", L"2040", L"2041",
					L"2042", L"2043", L"2044", L"2045", L"2046", L"2047", L"2048", L"2049", L"2050"
			});
			this->listBox2->Location = System::Drawing::Point(633, 47);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(123, 44);
			this->listBox2->TabIndex = 20;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &OperatorForm::listBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->listBox1->Location = System::Drawing::Point(507, 49);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 44);
			this->listBox1->TabIndex = 19;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &OperatorForm::listBox1_SelectedIndexChanged);
			// 
			// textBoxCodeSub
			// 
			this->textBoxCodeSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxCodeSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCodeSub->Location = System::Drawing::Point(353, 49);
			this->textBoxCodeSub->Name = L"textBoxCodeSub";
			this->textBoxCodeSub->Size = System::Drawing::Size(148, 23);
			this->textBoxCodeSub->TabIndex = 18;
			// 
			// textBoxIndexSub
			// 
			this->textBoxIndexSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxIndexSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxIndexSub->Location = System::Drawing::Point(168, 49);
			this->textBoxIndexSub->Name = L"textBoxIndexSub";
			this->textBoxIndexSub->Size = System::Drawing::Size(176, 23);
			this->textBoxIndexSub->TabIndex = 17;
			// 
			// OperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(1390, 718);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridViewTable);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"OperatorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OperatorForm";
			this->Load += gcnew System::EventHandler(this, &OperatorForm::OperatorForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void OperatorForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonRedactClient_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonRedactSub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void table_OperatorBook(int count, book_data* data);

	private: System::Void buttonCheckBook_Click(System::Object^ sender, System::EventArgs^ e);


	private: System::Void table_OperatorClient(int count, client_data* data);


	private: System::Void buttonCheckClient_Click(System::Object^ sender, System::EventArgs^ e);


	private: System::Void table_OperatorSub(int count, sub_data* data);

	private: System::Void buttonCheckSub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonSearchIndexBook_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchNameBook_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchTypeBook_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchPriceBook_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonSearchClient_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchFIOClient_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchAddressClient_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);


	private: System::Void buttonSearchSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchIndexSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchCodeSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchMonthSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchYearSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchTimeSub_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void dataGridViewTable_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
