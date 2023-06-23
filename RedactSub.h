#pragma once
#include "OperatorForm.h"
#include "AdminForm.h"
namespace curseFormSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RedactSub
	/// </summary>
	public ref class RedactSub : public System::Windows::Forms::Form
	{
	public:
		RedactSub(void)
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
		~RedactSub()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxNumberSub;
	protected:
	private: System::Windows::Forms::ListBox^ listBoxMonth;
	private: System::Windows::Forms::ListBox^ listBoxYear;
	private: System::Windows::Forms::ListBox^ listBoxSrok;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonRedact;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::TextBox^ textBoxIndex;
	private: System::Windows::Forms::TextBox^ textBoxCode;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обновитьToolStripMenuItem;
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
			this->textBoxNumberSub = (gcnew System::Windows::Forms::TextBox());
			this->listBoxMonth = (gcnew System::Windows::Forms::ListBox());
			this->listBoxYear = (gcnew System::Windows::Forms::ListBox());
			this->listBoxSrok = (gcnew System::Windows::Forms::ListBox());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonRedact = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxIndex = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCode = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменитьИзменениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxNumberSub
			// 
			this->textBoxNumberSub->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxNumberSub->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxNumberSub->Location = System::Drawing::Point(9, 24);
			this->textBoxNumberSub->Name = L"textBoxNumberSub";
			this->textBoxNumberSub->Size = System::Drawing::Size(455, 23);
			this->textBoxNumberSub->TabIndex = 0;
			// 
			// listBoxMonth
			// 
			this->listBoxMonth->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBoxMonth->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxMonth->FormattingEnabled = true;
			this->listBoxMonth->ItemHeight = 18;
			this->listBoxMonth->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->listBoxMonth->Location = System::Drawing::Point(4, 203);
			this->listBoxMonth->Name = L"listBoxMonth";
			this->listBoxMonth->Size = System::Drawing::Size(144, 40);
			this->listBoxMonth->TabIndex = 1;
			this->listBoxMonth->SelectedIndexChanged += gcnew System::EventHandler(this, &RedactSub::listBoxMonth_SelectedIndexChanged);
			// 
			// listBoxYear
			// 
			this->listBoxYear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBoxYear->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxYear->FormattingEnabled = true;
			this->listBoxYear->ItemHeight = 18;
			this->listBoxYear->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"2022", L"2023", L"2024", L"2025", L"2026",
					L"2027", L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038", L"2039", L"2040",
					L"2041", L"2042", L"2043", L"2044", L"2045", L"2046", L"2047", L"2048", L"2049", L"2050"
			});
			this->listBoxYear->Location = System::Drawing::Point(154, 203);
			this->listBoxYear->Name = L"listBoxYear";
			this->listBoxYear->Size = System::Drawing::Size(147, 40);
			this->listBoxYear->TabIndex = 2;
			this->listBoxYear->SelectedIndexChanged += gcnew System::EventHandler(this, &RedactSub::listBoxYear_SelectedIndexChanged);
			// 
			// listBoxSrok
			// 
			this->listBoxSrok->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBoxSrok->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxSrok->FormattingEnabled = true;
			this->listBoxSrok->ItemHeight = 18;
			this->listBoxSrok->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1 месяц", L"3 месяца", L"6 месяцев" });
			this->listBoxSrok->Location = System::Drawing::Point(307, 203);
			this->listBoxSrok->Name = L"listBoxSrok";
			this->listBoxSrok->Size = System::Drawing::Size(161, 40);
			this->listBoxSrok->TabIndex = 3;
			this->listBoxSrok->SelectedIndexChanged += gcnew System::EventHandler(this, &RedactSub::listBoxSrok_SelectedIndexChanged);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelete->Location = System::Drawing::Point(248, 53);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(224, 58);
			this->buttonDelete->TabIndex = 4;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &RedactSub::buttonDelete_Click);
			// 
			// buttonRedact
			// 
			this->buttonRedact->BackColor = System::Drawing::Color::Azure;
			this->buttonRedact->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedact->Location = System::Drawing::Point(9, 53);
			this->buttonRedact->Name = L"buttonRedact";
			this->buttonRedact->Size = System::Drawing::Size(233, 58);
			this->buttonRedact->TabIndex = 5;
			this->buttonRedact->Text = L"Изменить данные";
			this->buttonRedact->UseVisualStyleBackColor = false;
			this->buttonRedact->Click += gcnew System::EventHandler(this, &RedactSub::buttonRedact_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Выберите месяц и год начала действия:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите номер подписки:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(304, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Выберите срок действия:";
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(6, 53);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(458, 56);
			this->buttonAdd->TabIndex = 9;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &RedactSub::buttonAdd_Click);
			// 
			// textBoxIndex
			// 
			this->textBoxIndex->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxIndex->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxIndex->Location = System::Drawing::Point(5, 24);
			this->textBoxIndex->Name = L"textBoxIndex";
			this->textBoxIndex->Size = System::Drawing::Size(226, 23);
			this->textBoxIndex->TabIndex = 10;
			// 
			// textBoxCode
			// 
			this->textBoxCode->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxCode->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCode->Location = System::Drawing::Point(237, 24);
			this->textBoxCode->Name = L"textBoxCode";
			this->textBoxCode->Size = System::Drawing::Size(227, 23);
			this->textBoxCode->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Введите индекс издания:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(234, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Введите код клиента:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(490, 148);
			this->tabControl1->TabIndex = 14;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage1->Controls->Add(this->textBoxCode);
			this->tabPage1->Controls->Add(this->buttonAdd);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBoxIndex);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(482, 117);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавить";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage2->Controls->Add(this->textBoxNumberSub);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->buttonRedact);
			this->tabPage2->Controls->Add(this->buttonDelete);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(482, 117);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Редактировать";
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
			this->menuStrip1->Size = System::Drawing::Size(480, 28);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(97, 24);
			this->закрытьToolStripMenuItem->Text = L"Закрыть  ";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactSub::закрытьToolStripMenuItem_Click);
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->обновитьToolStripMenuItem->Text = L"Обновить";
			this->обновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactSub::обновитьToolStripMenuItem_Click);
			// 
			// отменитьИзменениеToolStripMenuItem
			// 
			this->отменитьИзменениеToolStripMenuItem->Name = L"отменитьИзменениеToolStripMenuItem";
			this->отменитьИзменениеToolStripMenuItem->Size = System::Drawing::Size(173, 24);
			this->отменитьИзменениеToolStripMenuItem->Text = L"Отменить изменение";
			this->отменитьИзменениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactSub::отменитьИзменениеToolStripMenuItem_Click);
			// 
			// RedactSub
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(480, 281);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBoxSrok);
			this->Controls->Add(this->listBoxYear);
			this->Controls->Add(this->listBoxMonth);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(498, 328);
			this->MinimumSize = System::Drawing::Size(498, 328);
			this->Name = L"RedactSub";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Редактирование подписки";
			this->Load += gcnew System::EventHandler(this, &RedactSub::printFirst);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void printFirst(System::Object^ sender, System::EventArgs^ e);

		private: System::Void listBoxMonth_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		private: System::Void listBoxYear_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		private: System::Void listBoxSrok_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonRedact_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
