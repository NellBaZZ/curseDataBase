#pragma once
#include "AdminForm.h"
namespace curseFormSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RedactBook
	/// </summary>
	public ref class RedactBook : public System::Windows::Forms::Form
	{
	public:
		RedactBook(void)
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
		~RedactBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRedact;
	protected:
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::TextBox^ textBoxIndex;
	private: System::Windows::Forms::TextBox^ textBoxType;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::TextBox^ textBoxRedactWhat;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ToolStripMenuItem^ обновитьToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxAddIndex;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxAddTypeBook;
	private: System::Windows::Forms::TextBox^ textBoxAddPrice;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxAddName;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxDeleteIndex;
	private: System::Windows::Forms::ToolStripMenuItem^ отменитьИзменениеToolStripMenuItem;

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
			this->buttonRedact = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxIndex = (gcnew System::Windows::Forms::TextBox());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxRedactWhat = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddIndex = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddTypeBook = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddPrice = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddName = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxDeleteIndex = (gcnew System::Windows::Forms::TextBox());
			this->отменитьИзменениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonRedact
			// 
			this->buttonRedact->BackColor = System::Drawing::Color::Azure;
			this->buttonRedact->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedact->Location = System::Drawing::Point(6, 212);
			this->buttonRedact->Name = L"buttonRedact";
			this->buttonRedact->Size = System::Drawing::Size(396, 49);
			this->buttonRedact->TabIndex = 0;
			this->buttonRedact->Text = L"Изменить";
			this->buttonRedact->UseVisualStyleBackColor = false;
			this->buttonRedact->Click += gcnew System::EventHandler(this, &RedactBook::buttonRedact_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelete->Location = System::Drawing::Point(0, 140);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(409, 124);
			this->buttonDelete->TabIndex = 1;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &RedactBook::buttonDelete_Click);
			// 
			// textBoxIndex
			// 
			this->textBoxIndex->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxIndex->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxIndex->Location = System::Drawing::Point(8, 42);
			this->textBoxIndex->Name = L"textBoxIndex";
			this->textBoxIndex->Size = System::Drawing::Size(196, 23);
			this->textBoxIndex->TabIndex = 2;
			// 
			// textBoxType
			// 
			this->textBoxType->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxType->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxType->Location = System::Drawing::Point(6, 89);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(396, 23);
			this->textBoxType->TabIndex = 3;
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->Location = System::Drawing::Point(6, 136);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(396, 23);
			this->textBoxName->TabIndex = 4;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxPrice->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPrice->Location = System::Drawing::Point(6, 183);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(396, 23);
			this->textBoxPrice->TabIndex = 5;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(6, 196);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(396, 65);
			this->buttonAdd->TabIndex = 6;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &RedactBook::buttonAdd_Click);
			// 
			// textBoxRedactWhat
			// 
			this->textBoxRedactWhat->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxRedactWhat->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRedactWhat->Location = System::Drawing::Point(224, 42);
			this->textBoxRedactWhat->Name = L"textBoxRedactWhat";
			this->textBoxRedactWhat->Size = System::Drawing::Size(178, 23);
			this->textBoxRedactWhat->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->закрытьToolStripMenuItem,
					this->обновитьToolStripMenuItem, this->отменитьИзменениеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(429, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->закрытьToolStripMenuItem->Text = L"Закрыть";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactBook::закрытьToolStripMenuItem_Click);
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->обновитьToolStripMenuItem->Text = L"Обновить";
			this->обновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactBook::обновитьToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 18);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите индекс издания:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите номер типа издания:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Введите название издания:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Введите цену издания:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(221, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Введите индекс издания,";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(221, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(181, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"которое хотите изменить";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 41);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(420, 296);
			this->tabControl1->TabIndex = 15;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBoxAddIndex);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBoxAddTypeBook);
			this->tabPage1->Controls->Add(this->textBoxAddPrice);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->textBoxAddName);
			this->tabPage1->Controls->Add(this->buttonAdd);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(412, 267);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавить";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 18);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Введите индекс издания:";
			// 
			// textBoxAddIndex
			// 
			this->textBoxAddIndex->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddIndex->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddIndex->Location = System::Drawing::Point(9, 24);
			this->textBoxAddIndex->Name = L"textBoxAddIndex";
			this->textBoxAddIndex->Size = System::Drawing::Size(393, 23);
			this->textBoxAddIndex->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(198, 18);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Введите номер типа издания:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 144);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 18);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Введите цену издания:";
			// 
			// textBoxAddTypeBook
			// 
			this->textBoxAddTypeBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddTypeBook->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddTypeBook->Location = System::Drawing::Point(9, 71);
			this->textBoxAddTypeBook->Name = L"textBoxAddTypeBook";
			this->textBoxAddTypeBook->Size = System::Drawing::Size(393, 23);
			this->textBoxAddTypeBook->TabIndex = 14;
			// 
			// textBoxAddPrice
			// 
			this->textBoxAddPrice->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddPrice->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddPrice->Location = System::Drawing::Point(9, 165);
			this->textBoxAddPrice->Name = L"textBoxAddPrice";
			this->textBoxAddPrice->Size = System::Drawing::Size(393, 23);
			this->textBoxAddPrice->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(8, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(179, 18);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Введите название издания:";
			// 
			// textBoxAddName
			// 
			this->textBoxAddName->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddName->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddName->Location = System::Drawing::Point(9, 118);
			this->textBoxAddName->Name = L"textBoxAddName";
			this->textBoxAddName->Size = System::Drawing::Size(393, 23);
			this->textBoxAddName->TabIndex = 15;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBoxRedactWhat);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->buttonRedact);
			this->tabPage2->Controls->Add(this->textBoxIndex);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBoxType);
			this->tabPage2->Controls->Add(this->textBoxPrice);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBoxName);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(412, 267);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Редактировать";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->textBoxDeleteIndex);
			this->tabPage3->Controls->Add(this->buttonDelete);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(412, 267);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Удалить";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(3, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(166, 18);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Введите индекс издания:";
			// 
			// textBoxDeleteIndex
			// 
			this->textBoxDeleteIndex->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxDeleteIndex->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDeleteIndex->Location = System::Drawing::Point(3, 44);
			this->textBoxDeleteIndex->Name = L"textBoxDeleteIndex";
			this->textBoxDeleteIndex->Size = System::Drawing::Size(406, 23);
			this->textBoxDeleteIndex->TabIndex = 10;
			// 
			// отменитьИзменениеToolStripMenuItem
			// 
			this->отменитьИзменениеToolStripMenuItem->Name = L"отменитьИзменениеToolStripMenuItem";
			this->отменитьИзменениеToolStripMenuItem->Size = System::Drawing::Size(173, 24);
			this->отменитьИзменениеToolStripMenuItem->Text = L"Отменить изменение";
			this->отменитьИзменениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactBook::отменитьИзменениеToolStripMenuItem_Click);
			// 
			// RedactBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(429, 330);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(447, 377);
			this->MinimumSize = System::Drawing::Size(447, 377);
			this->Name = L"RedactBook";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Редактирование издания";
			this->Load += gcnew System::EventHandler(this, &RedactBook::RedactBook_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonRedact_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RedactBook_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
