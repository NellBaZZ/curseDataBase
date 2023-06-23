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
	/// Сводка для ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBoxData;
	private: System::Windows::Forms::Label^ labelTextAddress;
	private: System::Windows::Forms::Label^ labelTextFio;
	private: System::Windows::Forms::Button^ buttonCheckSub;
	private: System::Windows::Forms::Button^ buttonCheckBook;
	private: System::Windows::Forms::DataGridView^ dataGridViewClient;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TextBox^ textBoxSubName;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonAddSub;
	private: System::Windows::Forms::ListBox^ listBoxClientSub;




	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;

	private: System::Windows::Forms::Label^ labelSubTime1;
	private: System::Windows::Forms::Label^ labelSubName;

	private: System::Windows::Forms::Label^ labelSubMonth;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ buttonSearchPriceBook;
	private: System::Windows::Forms::Button^ buttonSearchTypeBook;
	private: System::Windows::Forms::Button^ buttonSearchNameBook;
	private: System::Windows::Forms::TextBox^ textBoxSearchPriceBook;
	private: System::Windows::Forms::TextBox^ textBoxSearchTypeBook;
	private: System::Windows::Forms::TextBox^ textBoxSearchNameBook;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxSearchNameSub;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonSearchTimeSub;


	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Button^ buttonSearchNameSub;
	private: System::Windows::Forms::Button^ buttonSearchYearSub;
	private: System::Windows::Forms::Button^ buttonSearchMonthSub;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBoxData = (gcnew System::Windows::Forms::GroupBox());
			this->labelTextAddress = (gcnew System::Windows::Forms::Label());
			this->labelTextFio = (gcnew System::Windows::Forms::Label());
			this->buttonCheckSub = (gcnew System::Windows::Forms::Button());
			this->buttonCheckBook = (gcnew System::Windows::Forms::Button());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->textBoxSubName = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonAddSub = (gcnew System::Windows::Forms::Button());
			this->listBoxClientSub = (gcnew System::Windows::Forms::ListBox());
			this->labelSubTime1 = (gcnew System::Windows::Forms::Label());
			this->labelSubName = (gcnew System::Windows::Forms::Label());
			this->labelSubMonth = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttonSearchPriceBook = (gcnew System::Windows::Forms::Button());
			this->buttonSearchTypeBook = (gcnew System::Windows::Forms::Button());
			this->buttonSearchNameBook = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchPriceBook = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchTypeBook = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchNameBook = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchTimeSub = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->buttonSearchNameSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchYearSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchMonthSub = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxSearchNameSub = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->groupBoxData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Azure;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(55, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"labelFIO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Azure;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(55, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"labelAddess";
			// 
			// groupBoxData
			// 
			this->groupBoxData->AutoSize = true;
			this->groupBoxData->BackColor = System::Drawing::Color::Azure;
			this->groupBoxData->Controls->Add(this->labelTextAddress);
			this->groupBoxData->Controls->Add(this->labelTextFio);
			this->groupBoxData->Controls->Add(this->label1);
			this->groupBoxData->Controls->Add(this->label2);
			this->groupBoxData->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxData->Location = System::Drawing::Point(1008, 56);
			this->groupBoxData->Name = L"groupBoxData";
			this->groupBoxData->Size = System::Drawing::Size(236, 117);
			this->groupBoxData->TabIndex = 2;
			this->groupBoxData->TabStop = false;
			this->groupBoxData->Text = L"Данные пользователя";
			// 
			// labelTextAddress
			// 
			this->labelTextAddress->AutoSize = true;
			this->labelTextAddress->BackColor = System::Drawing::Color::Azure;
			this->labelTextAddress->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTextAddress->ForeColor = System::Drawing::Color::Purple;
			this->labelTextAddress->Location = System::Drawing::Point(0, 66);
			this->labelTextAddress->Name = L"labelTextAddress";
			this->labelTextAddress->Size = System::Drawing::Size(49, 18);
			this->labelTextAddress->TabIndex = 3;
			this->labelTextAddress->Text = L"Адрес:";
			// 
			// labelTextFio
			// 
			this->labelTextFio->AutoSize = true;
			this->labelTextFio->BackColor = System::Drawing::Color::Azure;
			this->labelTextFio->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTextFio->ForeColor = System::Drawing::Color::Purple;
			this->labelTextFio->Location = System::Drawing::Point(0, 35);
			this->labelTextFio->Name = L"labelTextFio";
			this->labelTextFio->Size = System::Drawing::Size(41, 18);
			this->labelTextFio->TabIndex = 2;
			this->labelTextFio->Text = L"ФИО:";
			// 
			// buttonCheckSub
			// 
			this->buttonCheckSub->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckSub->Location = System::Drawing::Point(473, 6);
			this->buttonCheckSub->Name = L"buttonCheckSub";
			this->buttonCheckSub->Size = System::Drawing::Size(478, 105);
			this->buttonCheckSub->TabIndex = 3;
			this->buttonCheckSub->Text = L"Посмотреть свои подписки";
			this->buttonCheckSub->UseVisualStyleBackColor = false;
			this->buttonCheckSub->Click += gcnew System::EventHandler(this, &ClientForm::buttonCheckSub_Click);
			// 
			// buttonCheckBook
			// 
			this->buttonCheckBook->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckBook->Location = System::Drawing::Point(3, 6);
			this->buttonCheckBook->Name = L"buttonCheckBook";
			this->buttonCheckBook->Size = System::Drawing::Size(464, 105);
			this->buttonCheckBook->TabIndex = 4;
			this->buttonCheckBook->Text = L"Посмотреть каталог изданий";
			this->buttonCheckBook->UseVisualStyleBackColor = false;
			this->buttonCheckBook->Click += gcnew System::EventHandler(this, &ClientForm::buttonCheckBook_Click);
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->AllowUserToAddRows = false;
			this->dataGridViewClient->AllowUserToDeleteRows = false;
			this->dataGridViewClient->AllowUserToResizeColumns = false;
			this->dataGridViewClient->AllowUserToResizeRows = false;
			this->dataGridViewClient->BackgroundColor = System::Drawing::Color::Azure;
			this->dataGridViewClient->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridViewClient->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClient->Location = System::Drawing::Point(12, 183);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->ReadOnly = true;
			this->dataGridViewClient->RowHeadersWidth = 51;
			this->dataGridViewClient->RowTemplate->Height = 24;
			this->dataGridViewClient->Size = System::Drawing::Size(958, 341);
			this->dataGridViewClient->TabIndex = 5;
			this->dataGridViewClient->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClientForm::dataGridViewClient_CellContentDoubleClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LavenderBlush;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выйтиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(1312, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &ClientForm::выйтиToolStripMenuItem_Click);
			// 
			// textBoxSubName
			// 
			this->textBoxSubName->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSubName->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSubName->Location = System::Drawing::Point(6, 24);
			this->textBoxSubName->Name = L"textBoxSubName";
			this->textBoxSubName->Size = System::Drawing::Size(224, 23);
			this->textBoxSubName->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(-19, -19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// buttonAddSub
			// 
			this->buttonAddSub->BackColor = System::Drawing::Color::Azure;
			this->buttonAddSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddSub->Location = System::Drawing::Point(6, 53);
			this->buttonAddSub->Name = L"buttonAddSub";
			this->buttonAddSub->Size = System::Drawing::Size(945, 58);
			this->buttonAddSub->TabIndex = 10;
			this->buttonAddSub->Text = L"Подписаться";
			this->buttonAddSub->UseVisualStyleBackColor = false;
			this->buttonAddSub->Click += gcnew System::EventHandler(this, &ClientForm::buttonAddSub_Click);
			// 
			// listBoxClientSub
			// 
			this->listBoxClientSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBoxClientSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxClientSub->FormattingEnabled = true;
			this->listBoxClientSub->ItemHeight = 18;
			this->listBoxClientSub->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1 месяц", L"3 месяца", L"6 месяцев" });
			this->listBoxClientSub->Location = System::Drawing::Point(632, 24);
			this->listBoxClientSub->Name = L"listBoxClientSub";
			this->listBoxClientSub->Size = System::Drawing::Size(319, 40);
			this->listBoxClientSub->TabIndex = 11;
			this->listBoxClientSub->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientForm::listBox1_SelectedIndexChanged);
			// 
			// labelSubTime1
			// 
			this->labelSubTime1->AutoSize = true;
			this->labelSubTime1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSubTime1->Location = System::Drawing::Point(629, 3);
			this->labelSubTime1->Name = L"labelSubTime1";
			this->labelSubTime1->Size = System::Drawing::Size(172, 18);
			this->labelSubTime1->TabIndex = 16;
			this->labelSubTime1->Text = L"Выберите срок действия:";
			// 
			// labelSubName
			// 
			this->labelSubName->AutoSize = true;
			this->labelSubName->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSubName->Location = System::Drawing::Point(3, 3);
			this->labelSubName->Name = L"labelSubName";
			this->labelSubName->Size = System::Drawing::Size(179, 18);
			this->labelSubName->TabIndex = 15;
			this->labelSubName->Text = L"Введите название издания:";
			// 
			// labelSubMonth
			// 
			this->labelSubMonth->AutoSize = true;
			this->labelSubMonth->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSubMonth->Location = System::Drawing::Point(248, 3);
			this->labelSubMonth->Name = L"labelSubMonth";
			this->labelSubMonth->Size = System::Drawing::Size(266, 18);
			this->labelSubMonth->TabIndex = 13;
			this->labelSubMonth->Text = L"Выберите месяц и год начала действия:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(15, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(965, 146);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->buttonCheckSub);
			this->tabPage1->Controls->Add(this->buttonCheckBook);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(957, 115);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основное меню";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->labelSubMonth);
			this->tabPage2->Controls->Add(this->labelSubTime1);
			this->tabPage2->Controls->Add(this->buttonAddSub);
			this->tabPage2->Controls->Add(this->labelSubName);
			this->tabPage2->Controls->Add(this->textBoxSubName);
			this->tabPage2->Controls->Add(this->listBoxClientSub);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(957, 115);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Оформить подписку";
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"2022", L"2023", L"2024", L"2025", L"2026", L"2027",
					L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038", L"2039", L"2040", L"2041",
					L"2042", L"2043", L"2044", L"2045", L"2046", L"2047", L"2048", L"2049", L"2050"
			});
			this->listBox2->Location = System::Drawing::Point(436, 24);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(190, 40);
			this->listBox2->TabIndex = 18;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientForm::listBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->listBox1->Location = System::Drawing::Point(251, 24);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(179, 40);
			this->listBox1->TabIndex = 17;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientForm::listBox1_SelectedIndexChanged_1);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPage3->Controls->Add(this->buttonSearchPriceBook);
			this->tabPage3->Controls->Add(this->buttonSearchTypeBook);
			this->tabPage3->Controls->Add(this->buttonSearchNameBook);
			this->tabPage3->Controls->Add(this->textBoxSearchPriceBook);
			this->tabPage3->Controls->Add(this->textBoxSearchTypeBook);
			this->tabPage3->Controls->Add(this->textBoxSearchNameBook);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(957, 115);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Поиск издания";
			// 
			// buttonSearchPriceBook
			// 
			this->buttonSearchPriceBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchPriceBook->Location = System::Drawing::Point(643, 50);
			this->buttonSearchPriceBook->Name = L"buttonSearchPriceBook";
			this->buttonSearchPriceBook->Size = System::Drawing::Size(308, 67);
			this->buttonSearchPriceBook->TabIndex = 19;
			this->buttonSearchPriceBook->Text = L"Поиск по цене издания:";
			this->buttonSearchPriceBook->UseVisualStyleBackColor = false;
			this->buttonSearchPriceBook->Click += gcnew System::EventHandler(this, &ClientForm::buttonSearchPriceBook_Click);
			// 
			// buttonSearchTypeBook
			// 
			this->buttonSearchTypeBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchTypeBook->Location = System::Drawing::Point(332, 47);
			this->buttonSearchTypeBook->Name = L"buttonSearchTypeBook";
			this->buttonSearchTypeBook->Size = System::Drawing::Size(305, 67);
			this->buttonSearchTypeBook->TabIndex = 19;
			this->buttonSearchTypeBook->Text = L"Поиск по типу издания:";
			this->buttonSearchTypeBook->UseVisualStyleBackColor = false;
			this->buttonSearchTypeBook->Click += gcnew System::EventHandler(this, &ClientForm::buttonSearchTypeBook_Click);
			// 
			// buttonSearchNameBook
			// 
			this->buttonSearchNameBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchNameBook->Location = System::Drawing::Point(3, 47);
			this->buttonSearchNameBook->Name = L"buttonSearchNameBook";
			this->buttonSearchNameBook->Size = System::Drawing::Size(323, 67);
			this->buttonSearchNameBook->TabIndex = 18;
			this->buttonSearchNameBook->Text = L"Поиск по названию";
			this->buttonSearchNameBook->UseVisualStyleBackColor = false;
			this->buttonSearchNameBook->Click += gcnew System::EventHandler(this, &ClientForm::buttonSearchNameBook_Click);
			// 
			// textBoxSearchPriceBook
			// 
			this->textBoxSearchPriceBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchPriceBook->Location = System::Drawing::Point(643, 19);
			this->textBoxSearchPriceBook->Name = L"textBoxSearchPriceBook";
			this->textBoxSearchPriceBook->Size = System::Drawing::Size(308, 25);
			this->textBoxSearchPriceBook->TabIndex = 17;
			// 
			// textBoxSearchTypeBook
			// 
			this->textBoxSearchTypeBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchTypeBook->Location = System::Drawing::Point(332, 19);
			this->textBoxSearchTypeBook->Name = L"textBoxSearchTypeBook";
			this->textBoxSearchTypeBook->Size = System::Drawing::Size(305, 25);
			this->textBoxSearchTypeBook->TabIndex = 16;
			// 
			// textBoxSearchNameBook
			// 
			this->textBoxSearchNameBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchNameBook->Location = System::Drawing::Point(3, 19);
			this->textBoxSearchNameBook->Name = L"textBoxSearchNameBook";
			this->textBoxSearchNameBook->Size = System::Drawing::Size(323, 25);
			this->textBoxSearchNameBook->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(640, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Введите стоимость издания:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(329, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Введите тип издания:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Введите название издания:";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->buttonSearchTimeSub);
			this->tabPage4->Controls->Add(this->listBox5);
			this->tabPage4->Controls->Add(this->buttonSearchNameSub);
			this->tabPage4->Controls->Add(this->buttonSearchYearSub);
			this->tabPage4->Controls->Add(this->buttonSearchMonthSub);
			this->tabPage4->Controls->Add(this->listBox4);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->listBox3);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->textBoxSearchNameSub);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage4->Location = System::Drawing::Point(4, 27);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(957, 115);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Поиск среди своих подписок";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(768, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 18);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Выберите срок действия:";
			// 
			// buttonSearchTimeSub
			// 
			this->buttonSearchTimeSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchTimeSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchTimeSub->Location = System::Drawing::Point(771, 47);
			this->buttonSearchTimeSub->Name = L"buttonSearchTimeSub";
			this->buttonSearchTimeSub->Size = System::Drawing::Size(180, 67);
			this->buttonSearchTimeSub->TabIndex = 25;
			this->buttonSearchTimeSub->Text = L"Поиск по сроку";
			this->buttonSearchTimeSub->UseVisualStyleBackColor = false;
			this->buttonSearchTimeSub->Click += gcnew System::EventHandler(this, &ClientForm::buttonSearchTimeSub_Click);
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 18;
			this->listBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1 месяц", L"3 месяца", L"6 месяцев" });
			this->listBox5->Location = System::Drawing::Point(771, 19);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(180, 58);
			this->listBox5->TabIndex = 24;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientForm::listBox5_SelectedIndexChanged);
			// 
			// buttonSearchNameSub
			// 
			this->buttonSearchNameSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchNameSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchNameSub->Location = System::Drawing::Point(6, 47);
			this->buttonSearchNameSub->Name = L"buttonSearchNameSub";
			this->buttonSearchNameSub->Size = System::Drawing::Size(257, 68);
			this->buttonSearchNameSub->TabIndex = 23;
			this->buttonSearchNameSub->Text = L"Поиск по названию";
			this->buttonSearchNameSub->UseVisualStyleBackColor = false;
			this->buttonSearchNameSub->Click += gcnew System::EventHandler(this, &ClientForm::buttonSearchNameSub_Click);
			// 
			// buttonSearchYearSub
			// 
			this->buttonSearchYearSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchYearSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchYearSub->Location = System::Drawing::Point(526, 47);
			this->buttonSearchYearSub->Name = L"buttonSearchYearSub";
			this->buttonSearchYearSub->Size = System::Drawing::Size(239, 67);
			this->buttonSearchYearSub->TabIndex = 22;
			this->buttonSearchYearSub->Text = L"Поиск по нач. году ";
			this->buttonSearchYearSub->UseVisualStyleBackColor = false;
			this->buttonSearchYearSub->Click += gcnew System::EventHandler(this, &ClientForm::buttonSearchYearSub_Click);
			// 
			// buttonSearchMonthSub
			// 
			this->buttonSearchMonthSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchMonthSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchMonthSub->Location = System::Drawing::Point(269, 47);
			this->buttonSearchMonthSub->Name = L"buttonSearchMonthSub";
			this->buttonSearchMonthSub->Size = System::Drawing::Size(251, 67);
			this->buttonSearchMonthSub->TabIndex = 21;
			this->buttonSearchMonthSub->Text = L"Поиск по нач. месяцу";
			this->buttonSearchMonthSub->UseVisualStyleBackColor = false;
			this->buttonSearchMonthSub->Click += gcnew System::EventHandler(this, &ClientForm::buttonSearchMonthSub_Click);
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 18;
			this->listBox4->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"2022", L"2023", L"2024", L"2025", L"2026", L"2027",
					L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038", L"2039", L"2040", L"2041",
					L"2042", L"2043", L"2044", L"2045", L"2046", L"2047", L"2048", L"2049", L"2050"
			});
			this->listBox4->Location = System::Drawing::Point(526, 19);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(239, 58);
			this->listBox4->TabIndex = 20;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientForm::listBox4_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(523, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(213, 18);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Выберите год начала действия:";
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 18;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->listBox3->Location = System::Drawing::Point(269, 19);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(251, 58);
			this->listBox3->TabIndex = 18;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientForm::listBox3_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(266, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(268, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Выберите месяц начала действия:";
			// 
			// textBoxSearchNameSub
			// 
			this->textBoxSearchNameSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchNameSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchNameSub->Location = System::Drawing::Point(6, 19);
			this->textBoxSearchNameSub->Name = L"textBoxSearchNameSub";
			this->textBoxSearchNameSub->Size = System::Drawing::Size(257, 23);
			this->textBoxSearchNameSub->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 18);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Введите название издания:";
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(1312, 548);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridViewClient);
			this->Controls->Add(this->groupBoxData);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1312, 548);
			this->MinimumSize = System::Drawing::Size(1312, 548);
			this->Name = L"ClientForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClientForm";
			this->Load += gcnew System::EventHandler(this, &ClientForm::printClient);
			this->groupBoxData->ResumeLayout(false);
			this->groupBoxData->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
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
		//	ПЕРВОНАЧАЛЬНАЯ СТРАНИЦА ФОРМЫ
	private: System::Void printClient(System::Object^ sender, System::EventArgs^ e);


		   // КНОПКА ВЫБОРА СРОКА ПОДПИСКИ ДЛЯ ДОБАВЛЕНИЯ
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКА ВЫБОРА МЕСЯЦА ПОДПИСКИ ДЛЯ ДОБАВЛЕНИЯ
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКА ВЫБОРА ГОДА ПОДПИСКИ ДЛЯ ДОБАВЛЕНИЯ
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		   // ШАБЛОН ДЛЯ ТАБЛИЦЫ ПОДПИСОК
	private: System::Void table_ClientSub(int count, sub_data* data);

		   // КНОПКА ПОСМОТРЕТЬ СВОИ ПОДПИСКИ
	private: System::Void buttonCheckSub_Click(System::Object^ sender, System::EventArgs^ e);

		   // ШАБЛОН ДЛЯ ТАБЛИЦЫ изданий
	private: System::Void table_ClientBook(int count, book_data* data);

		   // КНОПКА ПОСМОТРЕТЬ КАТАЛОГ ИЗДАНИЙ
	private: System::Void buttonCheckBook_Click(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКА ОФОРМИТЬ ПОДПИСКУ
	private: System::Void buttonAddSub_Click(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКА ВЫХОДА
	private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКА ВЫБОРА МЕСЯЦА ПОДПИСКИ ДЛЯ ПОИСКА 
	private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКА ВЫБОРА ГОДА ПОДПИСКИ ДЛЯ ПОИСКА
	private: System::Void listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКА ВЫБОРА СРОКА ПОДПИСКИ ДЛЯ ПОИСКА
	private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);


		// КНОПКИ ПОИСКА ИЗДАНИЯ
	private: System::Void buttonSearchNameBook_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchTypeBook_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchPriceBook_Click(System::Object^ sender, System::EventArgs^ e);

		   // КНОПКИ ПОИСКА СВОИХ ПОДПИСОК 
	private: System::Void buttonSearchNameSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchMonthSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchYearSub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearchTimeSub_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void dataGridViewClient_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
