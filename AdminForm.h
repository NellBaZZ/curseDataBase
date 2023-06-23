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
	/// Сводка для AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
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
	private: System::Windows::Forms::Button^ buttonCheckBook;
	private: System::Windows::Forms::Button^ buttonRedactBook;
	private: System::Windows::Forms::Button^ buttonCheckClient;
	private: System::Windows::Forms::Button^ buttonRedactClient;
	private: System::Windows::Forms::Button^ buttonCheckWorker;
	private: System::Windows::Forms::Button^ buttonRedactWorker;



	private: System::Windows::Forms::Button^ buttonGenerateRaport;


	private: System::Windows::Forms::Button^ buttonSearchPost;


	private: System::Windows::Forms::Button^ buttonCheckSub;
	private: System::Windows::Forms::Button^ buttonRedactSub;
	private: System::Windows::Forms::Button^ buttonCheckTypeBook;
	private: System::Windows::Forms::Button^ buttonRedactTypeBook;
	private: System::Windows::Forms::Button^ buttonSearchTypeBook;
	private: System::Windows::Forms::TextBox^ textBoxSearchIndexBook;
	private: System::Windows::Forms::TextBox^ textBoxSearchClient;
	private: System::Windows::Forms::TextBox^ textBoxSearchIndexType;

	private: System::Windows::Forms::TextBox^ textBoxSearchWorker;
	private: System::Windows::Forms::TextBox^ textBoxSearchSub;
	private: System::Windows::Forms::TextBox^ textBoxSearchNameBook;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPageBook;
	private: System::Windows::Forms::TextBox^ textBoxSearchNameType;
	private: System::Windows::Forms::TextBox^ textBoxSearchPriceBook;
	private: System::Windows::Forms::TextBox^ textBoxSearchTypeBook;

	private: System::Windows::Forms::TabPage^ tabPageClient;
	private: System::Windows::Forms::TabPage^ tabPageSub;
	private: System::Windows::Forms::TabPage^ tabPagePost;

	private: System::Windows::Forms::TextBox^ textBoxSearchAddressClient;
	private: System::Windows::Forms::TextBox^ textBoxSearchFIOClient;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::Button^ buttonSearchYearSub;
	private: System::Windows::Forms::Button^ buttonSearchMonthSub;
	private: System::Windows::Forms::Button^ buttonSearchIndexSub;
	private: System::Windows::Forms::Button^ buttonSearchCodeSub;
	private: System::Windows::Forms::Button^ buttonSearchNumberSub;


	private: System::Windows::Forms::TextBox^ textBoxSearchIndexBookSub;
	private: System::Windows::Forms::TextBox^ textBoxSearchCodeClientSub;
	private: System::Windows::Forms::Button^ buttonSearchPriceBook;
	private: System::Windows::Forms::Button^ buttonSearchNameBook;
	private: System::Windows::Forms::Button^ buttonSearchIndexTypeBook;
	private: System::Windows::Forms::Button^ buttonSearchIndexBook;
	private: System::Windows::Forms::Button^ buttonSearchAddressClient;
	private: System::Windows::Forms::Button^ buttonSearchFIOClient;
	private: System::Windows::Forms::Button^ buttonSearchCodeClient;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Button^ buttonSearchLogin;
	private: System::Windows::Forms::Button^ buttonSearchTypeBookId;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::ListBox^ listBoxWorker;
private: System::Windows::Forms::TabPage^ tabPageReport;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::ListBox^ listBox5;
private: System::Windows::Forms::ListBox^ listBox4;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;

private: System::Windows::Forms::Panel^ panel1;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


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
			this->buttonCheckBook = (gcnew System::Windows::Forms::Button());
			this->buttonRedactBook = (gcnew System::Windows::Forms::Button());
			this->buttonCheckClient = (gcnew System::Windows::Forms::Button());
			this->buttonRedactClient = (gcnew System::Windows::Forms::Button());
			this->buttonCheckWorker = (gcnew System::Windows::Forms::Button());
			this->buttonRedactWorker = (gcnew System::Windows::Forms::Button());
			this->buttonGenerateRaport = (gcnew System::Windows::Forms::Button());
			this->buttonSearchPost = (gcnew System::Windows::Forms::Button());
			this->buttonCheckSub = (gcnew System::Windows::Forms::Button());
			this->buttonRedactSub = (gcnew System::Windows::Forms::Button());
			this->buttonCheckTypeBook = (gcnew System::Windows::Forms::Button());
			this->buttonRedactTypeBook = (gcnew System::Windows::Forms::Button());
			this->buttonSearchTypeBook = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchIndexBook = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchIndexType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchWorker = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchSub = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchNameBook = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageBook = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchPriceBook = (gcnew System::Windows::Forms::Button());
			this->buttonSearchNameBook = (gcnew System::Windows::Forms::Button());
			this->buttonSearchIndexTypeBook = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchTypeBook = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearchIndexBook = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchPriceBook = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchTypeBookId = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchNameType = (gcnew System::Windows::Forms::TextBox());
			this->tabPageClient = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchAddressClient = (gcnew System::Windows::Forms::Button());
			this->buttonSearchFIOClient = (gcnew System::Windows::Forms::Button());
			this->buttonSearchCodeClient = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchAddressClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchFIOClient = (gcnew System::Windows::Forms::TextBox());
			this->tabPageSub = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonSearchYearSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchMonthSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchIndexSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchCodeSub = (gcnew System::Windows::Forms::Button());
			this->buttonSearchNumberSub = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchIndexBookSub = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearchCodeClientSub = (gcnew System::Windows::Forms::TextBox());
			this->tabPagePost = (gcnew System::Windows::Forms::TabPage());
			this->listBoxWorker = (gcnew System::Windows::Forms::ListBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchLogin = (gcnew System::Windows::Forms::Button());
			this->tabPageReport = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPageBook->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPageClient->SuspendLayout();
			this->tabPageSub->SuspendLayout();
			this->tabPagePost->SuspendLayout();
			this->tabPageReport->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewTable
			// 
			this->dataGridViewTable->AllowUserToAddRows = false;
			this->dataGridViewTable->AllowUserToDeleteRows = false;
			this->dataGridViewTable->BackgroundColor = System::Drawing::Color::Azure;
			this->dataGridViewTable->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewTable->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridViewTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTable->GridColor = System::Drawing::SystemColors::WindowText;
			this->dataGridViewTable->Location = System::Drawing::Point(12, 252);
			this->dataGridViewTable->Name = L"dataGridViewTable";
			this->dataGridViewTable->ReadOnly = true;
			this->dataGridViewTable->RowHeadersWidth = 51;
			this->dataGridViewTable->RowTemplate->Height = 24;
			this->dataGridViewTable->Size = System::Drawing::Size(1322, 430);
			this->dataGridViewTable->TabIndex = 0;
			this->dataGridViewTable->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::dataGridViewTable_CellContentDoubleClick);
			this->dataGridViewTable->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &AdminForm::dataGridViewTable_CellFormatting);
			this->dataGridViewTable->CellPainting += gcnew System::Windows::Forms::DataGridViewCellPaintingEventHandler(this, &AdminForm::dataGridViewTable_CellPainting);
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
			this->groupBox1->Location = System::Drawing::Point(1081, 59);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(253, 177);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Данные пользователя";
			// 
			// labelPost
			// 
			this->labelPost->AutoSize = true;
			this->labelPost->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPost->Location = System::Drawing::Point(7, 107);
			this->labelPost->Name = L"labelPost";
			this->labelPost->Size = System::Drawing::Size(247, 18);
			this->labelPost->TabIndex = 3;
			this->labelPost->Text = L"Тут будет должность пользователя";
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLogin->Location = System::Drawing::Point(7, 55);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(211, 18);
			this->labelLogin->TabIndex = 2;
			this->labelLogin->Text = L"Тут будет логин пользователя";
			// 
			// labelP
			// 
			this->labelP->AutoSize = true;
			this->labelP->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelP->ForeColor = System::Drawing::Color::Purple;
			this->labelP->Location = System::Drawing::Point(6, 87);
			this->labelP->Name = L"labelP";
			this->labelP->Size = System::Drawing::Size(97, 20);
			this->labelP->TabIndex = 1;
			this->labelP->Text = L"Должность:";
			// 
			// labelL
			// 
			this->labelL->AutoSize = true;
			this->labelL->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelL->ForeColor = System::Drawing::Color::Purple;
			this->labelL->Location = System::Drawing::Point(6, 35);
			this->labelL->Name = L"labelL";
			this->labelL->Size = System::Drawing::Size(57, 20);
			this->labelL->TabIndex = 0;
			this->labelL->Text = L"Логин:";
			// 
			// buttonCheckBook
			// 
			this->buttonCheckBook->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckBook->Location = System::Drawing::Point(3, 6);
			this->buttonCheckBook->Name = L"buttonCheckBook";
			this->buttonCheckBook->Size = System::Drawing::Size(516, 51);
			this->buttonCheckBook->TabIndex = 2;
			this->buttonCheckBook->Text = L"Просмотреть список изданий";
			this->buttonCheckBook->UseVisualStyleBackColor = false;
			this->buttonCheckBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonCheckBook_Click);
			// 
			// buttonRedactBook
			// 
			this->buttonRedactBook->BackColor = System::Drawing::Color::Azure;
			this->buttonRedactBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedactBook->Location = System::Drawing::Point(525, 6);
			this->buttonRedactBook->Name = L"buttonRedactBook";
			this->buttonRedactBook->Size = System::Drawing::Size(513, 51);
			this->buttonRedactBook->TabIndex = 3;
			this->buttonRedactBook->Text = L"Редактировать издание";
			this->buttonRedactBook->UseVisualStyleBackColor = false;
			this->buttonRedactBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonRedactBook_Click);
			// 
			// buttonCheckClient
			// 
			this->buttonCheckClient->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckClient->Location = System::Drawing::Point(3, 6);
			this->buttonCheckClient->Name = L"buttonCheckClient";
			this->buttonCheckClient->Size = System::Drawing::Size(519, 53);
			this->buttonCheckClient->TabIndex = 4;
			this->buttonCheckClient->Text = L"Посмотреть список клиентов";
			this->buttonCheckClient->UseVisualStyleBackColor = false;
			this->buttonCheckClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonCheckClient_Click);
			// 
			// buttonRedactClient
			// 
			this->buttonRedactClient->BackColor = System::Drawing::Color::Azure;
			this->buttonRedactClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedactClient->Location = System::Drawing::Point(528, 7);
			this->buttonRedactClient->Name = L"buttonRedactClient";
			this->buttonRedactClient->Size = System::Drawing::Size(521, 52);
			this->buttonRedactClient->TabIndex = 5;
			this->buttonRedactClient->Text = L"Редактировать клиента";
			this->buttonRedactClient->UseVisualStyleBackColor = false;
			this->buttonRedactClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonRedactClient_Click);
			// 
			// buttonCheckWorker
			// 
			this->buttonCheckWorker->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckWorker->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckWorker->Location = System::Drawing::Point(3, 3);
			this->buttonCheckWorker->Name = L"buttonCheckWorker";
			this->buttonCheckWorker->Size = System::Drawing::Size(519, 61);
			this->buttonCheckWorker->TabIndex = 6;
			this->buttonCheckWorker->Text = L"Просмотреть список сотрудников";
			this->buttonCheckWorker->UseVisualStyleBackColor = false;
			this->buttonCheckWorker->Click += gcnew System::EventHandler(this, &AdminForm::buttonCheckWorker_Click);
			// 
			// buttonRedactWorker
			// 
			this->buttonRedactWorker->BackColor = System::Drawing::Color::Azure;
			this->buttonRedactWorker->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedactWorker->Location = System::Drawing::Point(528, 3);
			this->buttonRedactWorker->Name = L"buttonRedactWorker";
			this->buttonRedactWorker->Size = System::Drawing::Size(524, 61);
			this->buttonRedactWorker->TabIndex = 7;
			this->buttonRedactWorker->Text = L"Редактировать сотрудника";
			this->buttonRedactWorker->UseVisualStyleBackColor = false;
			this->buttonRedactWorker->Click += gcnew System::EventHandler(this, &AdminForm::buttonRedactWorker_Click);
			// 
			// buttonGenerateRaport
			// 
			this->buttonGenerateRaport->BackColor = System::Drawing::Color::Azure;
			this->buttonGenerateRaport->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGenerateRaport->Location = System::Drawing::Point(3, 64);
			this->buttonGenerateRaport->Name = L"buttonGenerateRaport";
			this->buttonGenerateRaport->Size = System::Drawing::Size(1049, 114);
			this->buttonGenerateRaport->TabIndex = 11;
			this->buttonGenerateRaport->Text = L"Генерация отчета";
			this->buttonGenerateRaport->UseVisualStyleBackColor = false;
			this->buttonGenerateRaport->Click += gcnew System::EventHandler(this, &AdminForm::buttonGenerateRaport_Click);
			// 
			// buttonSearchPost
			// 
			this->buttonSearchPost->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchPost->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchPost->Location = System::Drawing::Point(528, 117);
			this->buttonSearchPost->Name = L"buttonSearchPost";
			this->buttonSearchPost->Size = System::Drawing::Size(524, 61);
			this->buttonSearchPost->TabIndex = 14;
			this->buttonSearchPost->Text = L"Поиск по должности";
			this->buttonSearchPost->UseVisualStyleBackColor = false;
			this->buttonSearchPost->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// buttonCheckSub
			// 
			this->buttonCheckSub->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckSub->Location = System::Drawing::Point(3, 3);
			this->buttonCheckSub->Name = L"buttonCheckSub";
			this->buttonCheckSub->Size = System::Drawing::Size(504, 58);
			this->buttonCheckSub->TabIndex = 16;
			this->buttonCheckSub->Text = L"Просмотреть список подписок";
			this->buttonCheckSub->UseVisualStyleBackColor = false;
			this->buttonCheckSub->Click += gcnew System::EventHandler(this, &AdminForm::buttonCheckSub_Click);
			// 
			// buttonRedactSub
			// 
			this->buttonRedactSub->BackColor = System::Drawing::Color::Azure;
			this->buttonRedactSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedactSub->Location = System::Drawing::Point(513, 3);
			this->buttonRedactSub->Name = L"buttonRedactSub";
			this->buttonRedactSub->Size = System::Drawing::Size(537, 58);
			this->buttonRedactSub->TabIndex = 17;
			this->buttonRedactSub->Text = L"Редактировать подписку";
			this->buttonRedactSub->UseVisualStyleBackColor = false;
			this->buttonRedactSub->Click += gcnew System::EventHandler(this, &AdminForm::buttonRedactSub_Click);
			// 
			// buttonCheckTypeBook
			// 
			this->buttonCheckTypeBook->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckTypeBook->Location = System::Drawing::Point(3, 6);
			this->buttonCheckTypeBook->Name = L"buttonCheckTypeBook";
			this->buttonCheckTypeBook->Size = System::Drawing::Size(455, 51);
			this->buttonCheckTypeBook->TabIndex = 18;
			this->buttonCheckTypeBook->Text = L"Посмотреть список типов изданий";
			this->buttonCheckTypeBook->UseVisualStyleBackColor = false;
			this->buttonCheckTypeBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonCheckTypeBook_Click);
			// 
			// buttonRedactTypeBook
			// 
			this->buttonRedactTypeBook->BackColor = System::Drawing::Color::Azure;
			this->buttonRedactTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedactTypeBook->Location = System::Drawing::Point(464, 6);
			this->buttonRedactTypeBook->Name = L"buttonRedactTypeBook";
			this->buttonRedactTypeBook->Size = System::Drawing::Size(574, 51);
			this->buttonRedactTypeBook->TabIndex = 19;
			this->buttonRedactTypeBook->Text = L"Редактировать тип издания";
			this->buttonRedactTypeBook->UseVisualStyleBackColor = false;
			this->buttonRedactTypeBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonRedactTypeBook_Click);
			// 
			// buttonSearchTypeBook
			// 
			this->buttonSearchTypeBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchTypeBook->Location = System::Drawing::Point(464, 110);
			this->buttonSearchTypeBook->Name = L"buttonSearchTypeBook";
			this->buttonSearchTypeBook->Size = System::Drawing::Size(574, 38);
			this->buttonSearchTypeBook->TabIndex = 20;
			this->buttonSearchTypeBook->Text = L"Поиск по названию типа";
			this->buttonSearchTypeBook->UseVisualStyleBackColor = false;
			this->buttonSearchTypeBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchTypeBook_Click);
			// 
			// textBoxSearchIndexBook
			// 
			this->textBoxSearchIndexBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchIndexBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchIndexBook->Location = System::Drawing::Point(6, 78);
			this->textBoxSearchIndexBook->Name = L"textBoxSearchIndexBook";
			this->textBoxSearchIndexBook->Size = System::Drawing::Size(182, 23);
			this->textBoxSearchIndexBook->TabIndex = 21;
			// 
			// textBoxSearchClient
			// 
			this->textBoxSearchClient->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchClient->Location = System::Drawing::Point(9, 83);
			this->textBoxSearchClient->Name = L"textBoxSearchClient";
			this->textBoxSearchClient->Size = System::Drawing::Size(227, 23);
			this->textBoxSearchClient->TabIndex = 22;
			// 
			// textBoxSearchIndexType
			// 
			this->textBoxSearchIndexType->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchIndexType->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchIndexType->Location = System::Drawing::Point(3, 81);
			this->textBoxSearchIndexType->Name = L"textBoxSearchIndexType";
			this->textBoxSearchIndexType->Size = System::Drawing::Size(455, 23);
			this->textBoxSearchIndexType->TabIndex = 23;
			// 
			// textBoxSearchWorker
			// 
			this->textBoxSearchWorker->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchWorker->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchWorker->Location = System::Drawing::Point(6, 88);
			this->textBoxSearchWorker->Name = L"textBoxSearchWorker";
			this->textBoxSearchWorker->Size = System::Drawing::Size(516, 23);
			this->textBoxSearchWorker->TabIndex = 24;
			// 
			// textBoxSearchSub
			// 
			this->textBoxSearchSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchSub->Location = System::Drawing::Point(3, 83);
			this->textBoxSearchSub->Name = L"textBoxSearchSub";
			this->textBoxSearchSub->Size = System::Drawing::Size(185, 23);
			this->textBoxSearchSub->TabIndex = 25;
			// 
			// textBoxSearchNameBook
			// 
			this->textBoxSearchNameBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchNameBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchNameBook->Location = System::Drawing::Point(398, 78);
			this->textBoxSearchNameBook->Name = L"textBoxSearchNameBook";
			this->textBoxSearchNameBook->Size = System::Drawing::Size(385, 23);
			this->textBoxSearchNameBook->TabIndex = 26;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LavenderBlush;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выйтиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(1392, 31);
			this->menuStrip1->TabIndex = 27;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->выйтиToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(81, 27);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminForm::выйтиToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageBook);
			this->tabControl1->Controls->Add(this->tabPageClient);
			this->tabControl1->Controls->Add(this->tabPageSub);
			this->tabControl1->Controls->Add(this->tabPagePost);
			this->tabControl1->Controls->Add(this->tabPageReport);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(12, 34);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1063, 212);
			this->tabControl1->TabIndex = 28;
			// 
			// tabPageBook
			// 
			this->tabPageBook->Controls->Add(this->tabControl2);
			this->tabPageBook->Location = System::Drawing::Point(4, 27);
			this->tabPageBook->Name = L"tabPageBook";
			this->tabPageBook->Padding = System::Windows::Forms::Padding(3);
			this->tabPageBook->Size = System::Drawing::Size(1055, 181);
			this->tabPageBook->TabIndex = 0;
			this->tabPageBook->Text = L"Издание";
			this->tabPageBook->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage1);
			this->tabControl2->Controls->Add(this->tabPage2);
			this->tabControl2->Location = System::Drawing::Point(3, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1052, 185);
			this->tabControl2->TabIndex = 29;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->buttonCheckBook);
			this->tabPage1->Controls->Add(this->buttonSearchPriceBook);
			this->tabPage1->Controls->Add(this->buttonRedactBook);
			this->tabPage1->Controls->Add(this->buttonSearchNameBook);
			this->tabPage1->Controls->Add(this->textBoxSearchIndexBook);
			this->tabPage1->Controls->Add(this->buttonSearchIndexTypeBook);
			this->tabPage1->Controls->Add(this->textBoxSearchTypeBook);
			this->tabPage1->Controls->Add(this->buttonSearchIndexBook);
			this->tabPage1->Controls->Add(this->textBoxSearchNameBook);
			this->tabPage1->Controls->Add(this->textBoxSearchPriceBook);
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1044, 154);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Издания";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(786, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 18);
			this->label7->TabIndex = 39;
			this->label7->Text = L"Введите цену издания:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(395, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 18);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Введите название издания:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(191, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(198, 18);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Введите номер типа издания:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 18);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Введите индекс издания:";
			// 
			// buttonSearchPriceBook
			// 
			this->buttonSearchPriceBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchPriceBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchPriceBook->Location = System::Drawing::Point(789, 107);
			this->buttonSearchPriceBook->Name = L"buttonSearchPriceBook";
			this->buttonSearchPriceBook->Size = System::Drawing::Size(249, 37);
			this->buttonSearchPriceBook->TabIndex = 35;
			this->buttonSearchPriceBook->Text = L"Поиск по цене";
			this->buttonSearchPriceBook->UseVisualStyleBackColor = false;
			this->buttonSearchPriceBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchPriceBook_Click);
			// 
			// buttonSearchNameBook
			// 
			this->buttonSearchNameBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchNameBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchNameBook->Location = System::Drawing::Point(398, 105);
			this->buttonSearchNameBook->Name = L"buttonSearchNameBook";
			this->buttonSearchNameBook->Size = System::Drawing::Size(385, 39);
			this->buttonSearchNameBook->TabIndex = 34;
			this->buttonSearchNameBook->Text = L"Поиск по названию";
			this->buttonSearchNameBook->UseVisualStyleBackColor = false;
			this->buttonSearchNameBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchNameBook_Click);
			// 
			// buttonSearchIndexTypeBook
			// 
			this->buttonSearchIndexTypeBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchIndexTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonSearchIndexTypeBook->Location = System::Drawing::Point(194, 105);
			this->buttonSearchIndexTypeBook->Name = L"buttonSearchIndexTypeBook";
			this->buttonSearchIndexTypeBook->Size = System::Drawing::Size(195, 39);
			this->buttonSearchIndexTypeBook->TabIndex = 33;
			this->buttonSearchIndexTypeBook->Text = L"Поиск по инд. типа";
			this->buttonSearchIndexTypeBook->UseVisualStyleBackColor = false;
			this->buttonSearchIndexTypeBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchIndexTypeBook_Click);
			// 
			// textBoxSearchTypeBook
			// 
			this->textBoxSearchTypeBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchTypeBook->Location = System::Drawing::Point(194, 78);
			this->textBoxSearchTypeBook->Name = L"textBoxSearchTypeBook";
			this->textBoxSearchTypeBook->Size = System::Drawing::Size(195, 23);
			this->textBoxSearchTypeBook->TabIndex = 28;
			// 
			// buttonSearchIndexBook
			// 
			this->buttonSearchIndexBook->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchIndexBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchIndexBook->Location = System::Drawing::Point(3, 105);
			this->buttonSearchIndexBook->Name = L"buttonSearchIndexBook";
			this->buttonSearchIndexBook->Size = System::Drawing::Size(185, 39);
			this->buttonSearchIndexBook->TabIndex = 32;
			this->buttonSearchIndexBook->Text = L"Поиск по индексу";
			this->buttonSearchIndexBook->UseVisualStyleBackColor = false;
			this->buttonSearchIndexBook->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchIndexBook_Click);
			// 
			// textBoxSearchPriceBook
			// 
			this->textBoxSearchPriceBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchPriceBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchPriceBook->Location = System::Drawing::Point(789, 78);
			this->textBoxSearchPriceBook->Name = L"textBoxSearchPriceBook";
			this->textBoxSearchPriceBook->Size = System::Drawing::Size(249, 23);
			this->textBoxSearchPriceBook->TabIndex = 29;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->buttonSearchTypeBook);
			this->tabPage2->Controls->Add(this->buttonSearchTypeBookId);
			this->tabPage2->Controls->Add(this->buttonCheckTypeBook);
			this->tabPage2->Controls->Add(this->textBoxSearchNameType);
			this->tabPage2->Controls->Add(this->buttonRedactTypeBook);
			this->tabPage2->Controls->Add(this->textBoxSearchIndexType);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1044, 154);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Типы изданий ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(461, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(215, 18);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Введите название типа издания:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 18);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Введите номер типа:";
			// 
			// buttonSearchTypeBookId
			// 
			this->buttonSearchTypeBookId->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchTypeBookId->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchTypeBookId->Location = System::Drawing::Point(3, 110);
			this->buttonSearchTypeBookId->Name = L"buttonSearchTypeBookId";
			this->buttonSearchTypeBookId->Size = System::Drawing::Size(455, 38);
			this->buttonSearchTypeBookId->TabIndex = 36;
			this->buttonSearchTypeBookId->Text = L"Поиск по номеру типа";
			this->buttonSearchTypeBookId->UseVisualStyleBackColor = false;
			this->buttonSearchTypeBookId->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchTypeBookId_Click);
			// 
			// textBoxSearchNameType
			// 
			this->textBoxSearchNameType->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchNameType->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchNameType->Location = System::Drawing::Point(464, 81);
			this->textBoxSearchNameType->Name = L"textBoxSearchNameType";
			this->textBoxSearchNameType->Size = System::Drawing::Size(574, 23);
			this->textBoxSearchNameType->TabIndex = 30;
			// 
			// tabPageClient
			// 
			this->tabPageClient->Controls->Add(this->label3);
			this->tabPageClient->Controls->Add(this->label2);
			this->tabPageClient->Controls->Add(this->label1);
			this->tabPageClient->Controls->Add(this->buttonSearchAddressClient);
			this->tabPageClient->Controls->Add(this->buttonSearchFIOClient);
			this->tabPageClient->Controls->Add(this->buttonSearchCodeClient);
			this->tabPageClient->Controls->Add(this->textBoxSearchAddressClient);
			this->tabPageClient->Controls->Add(this->textBoxSearchFIOClient);
			this->tabPageClient->Controls->Add(this->buttonCheckClient);
			this->tabPageClient->Controls->Add(this->buttonRedactClient);
			this->tabPageClient->Controls->Add(this->textBoxSearchClient);
			this->tabPageClient->Location = System::Drawing::Point(4, 27);
			this->tabPageClient->Name = L"tabPageClient";
			this->tabPageClient->Padding = System::Windows::Forms::Padding(3);
			this->tabPageClient->Size = System::Drawing::Size(1055, 181);
			this->tabPageClient->TabIndex = 1;
			this->tabPageClient->Text = L"Клиенты";
			this->tabPageClient->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(640, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 18);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Введите адрес клиента:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(239, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 18);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Введите ФИО клиента:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 18);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Введите код клиента:";
			// 
			// buttonSearchAddressClient
			// 
			this->buttonSearchAddressClient->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchAddressClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonSearchAddressClient->Location = System::Drawing::Point(643, 111);
			this->buttonSearchAddressClient->Name = L"buttonSearchAddressClient";
			this->buttonSearchAddressClient->Size = System::Drawing::Size(406, 58);
			this->buttonSearchAddressClient->TabIndex = 33;
			this->buttonSearchAddressClient->Text = L"Поиск по адресу";
			this->buttonSearchAddressClient->UseVisualStyleBackColor = false;
			this->buttonSearchAddressClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchAddressClient_Click);
			// 
			// buttonSearchFIOClient
			// 
			this->buttonSearchFIOClient->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchFIOClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchFIOClient->Location = System::Drawing::Point(242, 111);
			this->buttonSearchFIOClient->Name = L"buttonSearchFIOClient";
			this->buttonSearchFIOClient->Size = System::Drawing::Size(395, 58);
			this->buttonSearchFIOClient->TabIndex = 32;
			this->buttonSearchFIOClient->Text = L"Поиск по ФИО";
			this->buttonSearchFIOClient->UseVisualStyleBackColor = false;
			this->buttonSearchFIOClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchFIOClient_Click);
			// 
			// buttonSearchCodeClient
			// 
			this->buttonSearchCodeClient->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchCodeClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchCodeClient->Location = System::Drawing::Point(6, 112);
			this->buttonSearchCodeClient->Name = L"buttonSearchCodeClient";
			this->buttonSearchCodeClient->Size = System::Drawing::Size(230, 57);
			this->buttonSearchCodeClient->TabIndex = 31;
			this->buttonSearchCodeClient->Text = L"Поиск по коду";
			this->buttonSearchCodeClient->UseVisualStyleBackColor = false;
			this->buttonSearchCodeClient->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchCodeClient_Click);
			// 
			// textBoxSearchAddressClient
			// 
			this->textBoxSearchAddressClient->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchAddressClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxSearchAddressClient->Location = System::Drawing::Point(643, 83);
			this->textBoxSearchAddressClient->Name = L"textBoxSearchAddressClient";
			this->textBoxSearchAddressClient->Size = System::Drawing::Size(406, 23);
			this->textBoxSearchAddressClient->TabIndex = 24;
			// 
			// textBoxSearchFIOClient
			// 
			this->textBoxSearchFIOClient->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchFIOClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearchFIOClient->Location = System::Drawing::Point(242, 82);
			this->textBoxSearchFIOClient->Name = L"textBoxSearchFIOClient";
			this->textBoxSearchFIOClient->Size = System::Drawing::Size(395, 23);
			this->textBoxSearchFIOClient->TabIndex = 23;
			// 
			// tabPageSub
			// 
			this->tabPageSub->Controls->Add(this->listBox3);
			this->tabPageSub->Controls->Add(this->listBox2);
			this->tabPageSub->Controls->Add(this->label15);
			this->tabPageSub->Controls->Add(this->label14);
			this->tabPageSub->Controls->Add(this->label13);
			this->tabPageSub->Controls->Add(this->label12);
			this->tabPageSub->Controls->Add(this->label11);
			this->tabPageSub->Controls->Add(this->buttonCheckSub);
			this->tabPageSub->Controls->Add(this->label10);
			this->tabPageSub->Controls->Add(this->listBox1);
			this->tabPageSub->Controls->Add(this->buttonSearch);
			this->tabPageSub->Controls->Add(this->buttonSearchYearSub);
			this->tabPageSub->Controls->Add(this->buttonSearchMonthSub);
			this->tabPageSub->Controls->Add(this->buttonSearchIndexSub);
			this->tabPageSub->Controls->Add(this->buttonSearchCodeSub);
			this->tabPageSub->Controls->Add(this->buttonSearchNumberSub);
			this->tabPageSub->Controls->Add(this->textBoxSearchIndexBookSub);
			this->tabPageSub->Controls->Add(this->textBoxSearchCodeClientSub);
			this->tabPageSub->Controls->Add(this->buttonRedactSub);
			this->tabPageSub->Controls->Add(this->textBoxSearchSub);
			this->tabPageSub->Location = System::Drawing::Point(4, 27);
			this->tabPageSub->Name = L"tabPageSub";
			this->tabPageSub->Size = System::Drawing::Size(1055, 181);
			this->tabPageSub->TabIndex = 2;
			this->tabPageSub->Text = L"Подписки";
			this->tabPageSub->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 18;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"2022", L"2023", L"2024", L"2025", L"2026", L"2027",
					L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038", L"2039", L"2040", L"2041",
					L"2042", L"2043", L"2044", L"2045", L"2046", L"2047", L"2048", L"2049", L"2050"
			});
			this->listBox3->Location = System::Drawing::Point(706, 84);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(162, 40);
			this->listBox3->TabIndex = 40;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::listBox3_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->listBox2->Location = System::Drawing::Point(536, 84);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(164, 40);
			this->listBox2->TabIndex = 39;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::listBox2_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(703, 67);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(132, 18);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Выберите нач. год:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(533, 67);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(149, 18);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Выберите нач. месяц:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(376, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(151, 18);
			this->label13->TabIndex = 36;
			this->label13->Text = L"Введите код клиента:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(188, 64);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(166, 18);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Введите индекс издания:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(871, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(172, 18);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Выберите срок действия:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(0, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(169, 18);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Введите номер подписки:";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1 месяц", L"3 месяца", L"6 месяцев" });
			this->listBox1->Location = System::Drawing::Point(874, 85);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(176, 40);
			this->listBox1->TabIndex = 30;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::listBox1_SelectedIndexChanged);
			// 
			// buttonSearch
			// 
			this->buttonSearch->BackColor = System::Drawing::Color::Azure;
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearch->Location = System::Drawing::Point(874, 113);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(176, 65);
			this->buttonSearch->TabIndex = 34;
			this->buttonSearch->Text = L"Поиск по сроку";
			this->buttonSearch->UseVisualStyleBackColor = false;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearch_Click);
			// 
			// buttonSearchYearSub
			// 
			this->buttonSearchYearSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchYearSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchYearSub->Location = System::Drawing::Point(706, 114);
			this->buttonSearchYearSub->Name = L"buttonSearchYearSub";
			this->buttonSearchYearSub->Size = System::Drawing::Size(162, 64);
			this->buttonSearchYearSub->TabIndex = 33;
			this->buttonSearchYearSub->Text = L"Поиск по году";
			this->buttonSearchYearSub->UseVisualStyleBackColor = false;
			this->buttonSearchYearSub->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchYearSub_Click);
			// 
			// buttonSearchMonthSub
			// 
			this->buttonSearchMonthSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchMonthSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchMonthSub->Location = System::Drawing::Point(536, 114);
			this->buttonSearchMonthSub->Name = L"buttonSearchMonthSub";
			this->buttonSearchMonthSub->Size = System::Drawing::Size(164, 64);
			this->buttonSearchMonthSub->TabIndex = 32;
			this->buttonSearchMonthSub->Text = L"Поиск по месяцу";
			this->buttonSearchMonthSub->UseVisualStyleBackColor = false;
			this->buttonSearchMonthSub->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchMonthSub_Click);
			// 
			// buttonSearchIndexSub
			// 
			this->buttonSearchIndexSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchIndexSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchIndexSub->Location = System::Drawing::Point(194, 113);
			this->buttonSearchIndexSub->Name = L"buttonSearchIndexSub";
			this->buttonSearchIndexSub->Size = System::Drawing::Size(179, 65);
			this->buttonSearchIndexSub->TabIndex = 32;
			this->buttonSearchIndexSub->Text = L"Поиск по индексу издания";
			this->buttonSearchIndexSub->UseVisualStyleBackColor = false;
			this->buttonSearchIndexSub->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchIndexSub_Click);
			// 
			// buttonSearchCodeSub
			// 
			this->buttonSearchCodeSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchCodeSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchCodeSub->Location = System::Drawing::Point(379, 113);
			this->buttonSearchCodeSub->Name = L"buttonSearchCodeSub";
			this->buttonSearchCodeSub->Size = System::Drawing::Size(151, 65);
			this->buttonSearchCodeSub->TabIndex = 31;
			this->buttonSearchCodeSub->Text = L"Поиск по коду";
			this->buttonSearchCodeSub->UseVisualStyleBackColor = false;
			this->buttonSearchCodeSub->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchCodeSub_Click);
			// 
			// buttonSearchNumberSub
			// 
			this->buttonSearchNumberSub->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchNumberSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchNumberSub->Location = System::Drawing::Point(3, 114);
			this->buttonSearchNumberSub->Name = L"buttonSearchNumberSub";
			this->buttonSearchNumberSub->Size = System::Drawing::Size(185, 64);
			this->buttonSearchNumberSub->TabIndex = 30;
			this->buttonSearchNumberSub->Text = L"Поиск по номеру";
			this->buttonSearchNumberSub->UseVisualStyleBackColor = false;
			this->buttonSearchNumberSub->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchNumberSub_Click);
			// 
			// textBoxSearchIndexBookSub
			// 
			this->textBoxSearchIndexBookSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchIndexBookSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxSearchIndexBookSub->Location = System::Drawing::Point(194, 83);
			this->textBoxSearchIndexBookSub->Name = L"textBoxSearchIndexBookSub";
			this->textBoxSearchIndexBookSub->Size = System::Drawing::Size(179, 23);
			this->textBoxSearchIndexBookSub->TabIndex = 27;
			// 
			// textBoxSearchCodeClientSub
			// 
			this->textBoxSearchCodeClientSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSearchCodeClientSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxSearchCodeClientSub->Location = System::Drawing::Point(379, 83);
			this->textBoxSearchCodeClientSub->Name = L"textBoxSearchCodeClientSub";
			this->textBoxSearchCodeClientSub->Size = System::Drawing::Size(148, 23);
			this->textBoxSearchCodeClientSub->TabIndex = 26;
			// 
			// tabPagePost
			// 
			this->tabPagePost->Controls->Add(this->listBoxWorker);
			this->tabPagePost->Controls->Add(this->label17);
			this->tabPagePost->Controls->Add(this->label16);
			this->tabPagePost->Controls->Add(this->buttonSearchLogin);
			this->tabPagePost->Controls->Add(this->buttonCheckWorker);
			this->tabPagePost->Controls->Add(this->textBoxSearchWorker);
			this->tabPagePost->Controls->Add(this->buttonSearchPost);
			this->tabPagePost->Controls->Add(this->buttonRedactWorker);
			this->tabPagePost->Location = System::Drawing::Point(4, 27);
			this->tabPagePost->Name = L"tabPagePost";
			this->tabPagePost->Size = System::Drawing::Size(1055, 181);
			this->tabPagePost->TabIndex = 3;
			this->tabPagePost->Text = L"Сотрудники";
			this->tabPagePost->UseVisualStyleBackColor = true;
			// 
			// listBoxWorker
			// 
			this->listBoxWorker->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBoxWorker->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxWorker->FormattingEnabled = true;
			this->listBoxWorker->ItemHeight = 20;
			this->listBoxWorker->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Оператор", L"Администратор" });
			this->listBoxWorker->Location = System::Drawing::Point(528, 88);
			this->listBoxWorker->Name = L"listBoxWorker";
			this->listBoxWorker->Size = System::Drawing::Size(524, 44);
			this->listBoxWorker->TabIndex = 38;
			this->listBoxWorker->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::listBoxWorker_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(525, 67);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(230, 18);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Выберите должность сотрудника:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(3, 67);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(184, 18);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Введите логин сотрудника:";
			// 
			// buttonSearchLogin
			// 
			this->buttonSearchLogin->BackColor = System::Drawing::Color::Azure;
			this->buttonSearchLogin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSearchLogin->Location = System::Drawing::Point(6, 117);
			this->buttonSearchLogin->Name = L"buttonSearchLogin";
			this->buttonSearchLogin->Size = System::Drawing::Size(516, 61);
			this->buttonSearchLogin->TabIndex = 26;
			this->buttonSearchLogin->Text = L"Поиск по логину";
			this->buttonSearchLogin->UseVisualStyleBackColor = false;
			this->buttonSearchLogin->Click += gcnew System::EventHandler(this, &AdminForm::buttonSearchLogin_Click);
			// 
			// tabPageReport
			// 
			this->tabPageReport->BackColor = System::Drawing::Color::LavenderBlush;
			this->tabPageReport->Controls->Add(this->label19);
			this->tabPageReport->Controls->Add(this->label18);
			this->tabPageReport->Controls->Add(this->listBox5);
			this->tabPageReport->Controls->Add(this->listBox4);
			this->tabPageReport->Controls->Add(this->buttonGenerateRaport);
			this->tabPageReport->Location = System::Drawing::Point(4, 27);
			this->tabPageReport->Name = L"tabPageReport";
			this->tabPageReport->Size = System::Drawing::Size(1055, 181);
			this->tabPageReport->TabIndex = 4;
			this->tabPageReport->Text = L"Отчет";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(528, 13);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(102, 18);
			this->label19->TabIndex = 43;
			this->label19->Text = L"Выберите год:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(3, 13);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(145, 18);
			this->label18->TabIndex = 42;
			this->label18->Text = L"Выберите полугодие:";
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 18;
			this->listBox5->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"2022", L"2023", L"2024", L"2025", L"2026", L"2027",
					L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038", L"2039", L"2040", L"2041",
					L"2042", L"2043", L"2044", L"2045", L"2046", L"2047", L"2048", L"2049", L"2050"
			});
			this->listBox5->Location = System::Drawing::Point(531, 33);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(521, 40);
			this->listBox5->TabIndex = 41;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::listBox5_SelectedIndexChanged);
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 18;
			this->listBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1 полугодие", L"2 полугодие" });
			this->listBox4->Location = System::Drawing::Point(3, 33);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(522, 40);
			this->listBox4->TabIndex = 40;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::listBox4_SelectedIndexChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(7, 19);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(394, 23);
			this->label20->TabIndex = 44;
			this->label20->Text = L"Итого руб. за данный промежуток времени:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(515, 19);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(97, 23);
			this->label21->TabIndex = 44;
			this->label21->Text = L"тут итог";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Azure;
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Location = System::Drawing::Point(12, 679);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1322, 59);
			this->panel1->TabIndex = 46;
			this->panel1->Visible = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(1392, 772);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridViewTable);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1392, 772);
			this->MinimumSize = System::Drawing::Size(1392, 772);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::printAdmin);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPageBook->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPageClient->ResumeLayout(false);
			this->tabPageClient->PerformLayout();
			this->tabPageSub->ResumeLayout(false);
			this->tabPageSub->PerformLayout();
			this->tabPagePost->ResumeLayout(false);
			this->tabPagePost->PerformLayout();
			this->tabPageReport->ResumeLayout(false);
			this->tabPageReport->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Boolean IsTheSameCellValue(int column, int row);
		//bool IsTheSameCellValue(int column, int row);

		private: System::Void dataGridViewTable_CellPainting(System::Object^ sender, System::Windows::Forms::DataGridViewCellPaintingEventArgs^ e);

		private: System::Void dataGridViewTable_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e);


		private: System::Void printAdmin(System::Object^ sender, System::EventArgs^ e);

		private: System::Void listBoxWorker_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonRedactBook_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonRedactTypeBook_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonRedactClient_Click(System::Object^ sender, System::EventArgs^ e);
	
		private: System::Void buttonRedactSub_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonRedactWorker_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	
		private: System::Void table_Worker(int count, worker_data* data);
		// Кнопка поиска сотрудника по должности
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		// Кнопка поиска сотрудника по лоигну
		private: System::Void buttonSearchLogin_Click(System::Object^ sender, System::EventArgs^ e);
		// Посмотреть список всех сотрудников
		private: System::Void buttonCheckWorker_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void table_Book(int count, book_data* data);
		// Посмотреть список всех изданий
		private: System::Void buttonCheckBook_Click(System::Object^ sender, System::EventArgs^ e);

		// Кнопка поиска издания по индексу
		private: System::Void buttonSearchIndexBook_Click(System::Object^ sender, System::EventArgs^ e);

		// Кнопка поиска издания по номеру типа
		private: System::Void buttonSearchIndexTypeBook_Click(System::Object^ sender, System::EventArgs^ e);

		// Кнопка поиска издания по названию
		private: System::Void buttonSearchNameBook_Click(System::Object^ sender, System::EventArgs^ e);
		 // Кнопка поиска издания по цене
		private: System::Void buttonSearchPriceBook_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void table_typeBook(int count, typeBook_data* data);
		// Кнопка посмотреть все типы изданий
		private: System::Void buttonCheckTypeBook_Click(System::Object^ sender, System::EventArgs^ e);

		// Кнопка поиска типа издания по названию
		private: System::Void buttonSearchTypeBook_Click(System::Object^ sender, System::EventArgs^ e);

		// Кнопка поиска типа издания по индексу
		private: System::Void buttonSearchTypeBookId_Click(System::Object^ sender, System::EventArgs^ e);

		 // Посмотреть список получателей
		private: System::Void buttonCheckClient_Click(System::Object^ sender, System::EventArgs^ e);

		// Шаблон таблицы для клиента
		private: System::Void table_Client(int count, client_data* data);

			   // Кнопка поиска клиента по коду
		private: System::Void buttonSearchCodeClient_Click(System::Object^ sender, System::EventArgs^ e);

			   // Кнопка поиска клиента по фио
		private: System::Void buttonSearchFIOClient_Click(System::Object^ sender, System::EventArgs^ e);

			   // Кнопка поиска клиента по аадресу
		private: System::Void buttonSearchAddressClient_Click(System::Object^ sender, System::EventArgs^ e);

			   // выбор срока подписки
		private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

			   // выбор месяца
		private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

			   // выбор года
		private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

			   //
		private: System::Void table_Sub(int count, sub_data* data);

			   // Шаблон таблицы для подписки
		private: System::Void buttonCheckSub_Click(System::Object^ sender, System::EventArgs^ e);


		private: System::Void buttonSearchNumberSub_Click(System::Object^ sender, System::EventArgs^ e);


		private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e);


		private: System::Void buttonSearchIndexSub_Click(System::Object^ sender, System::EventArgs^ e);


		private: System::Void buttonSearchCodeSub_Click(System::Object^ sender, System::EventArgs^ e);


		private: System::Void buttonSearchMonthSub_Click(System::Object^ sender, System::EventArgs^ e);


		private: System::Void buttonSearchYearSub_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		private: System::Void table_GenerateReport(int count, GenerateReport* data);
			   // ГЕНЕРАЦИЯ ОТЧЕТА
		private: System::Void buttonGenerateRaport_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void dataGridViewTable_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
