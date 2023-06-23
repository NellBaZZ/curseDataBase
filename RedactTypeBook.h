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
	/// Сводка для RedactTypeBook
	/// </summary>
	public ref class RedactTypeBook : public System::Windows::Forms::Form
	{
	public:
		RedactTypeBook(void)
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
		~RedactTypeBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRedact;
	protected:
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::TextBox^ textBoxId;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
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
			this->buttonRedact = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменитьИзменениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonRedact
			// 
			this->buttonRedact->BackColor = System::Drawing::Color::Azure;
			this->buttonRedact->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedact->Location = System::Drawing::Point(12, 181);
			this->buttonRedact->Name = L"buttonRedact";
			this->buttonRedact->Size = System::Drawing::Size(177, 32);
			this->buttonRedact->TabIndex = 0;
			this->buttonRedact->Text = L"Изменить";
			this->buttonRedact->UseVisualStyleBackColor = false;
			this->buttonRedact->Click += gcnew System::EventHandler(this, &RedactTypeBook::buttonRedact_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelete->Location = System::Drawing::Point(249, 181);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(143, 32);
			this->buttonDelete->TabIndex = 1;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &RedactTypeBook::buttonDelete_Click);
			// 
			// textBoxId
			// 
			this->textBoxId->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxId->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxId->Location = System::Drawing::Point(15, 152);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->Size = System::Drawing::Size(377, 23);
			this->textBoxId->TabIndex = 2;
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->Location = System::Drawing::Point(12, 63);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(380, 23);
			this->textBoxName->TabIndex = 3;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(12, 92);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(380, 32);
			this->buttonAdd->TabIndex = 4;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &RedactTypeBook::buttonAdd_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введите индекс типа издания:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите название типа издания:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->выйтиToolStripMenuItem,
					this->обновитьToolStripMenuItem, this->отменитьИзменениеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(404, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->выйтиToolStripMenuItem->Text = L"Закрыть";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactTypeBook::выйтиToolStripMenuItem_Click);
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->обновитьToolStripMenuItem->Text = L"Обновить";
			this->обновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactTypeBook::обновитьToolStripMenuItem_Click);
			// 
			// отменитьИзменениеToolStripMenuItem
			// 
			this->отменитьИзменениеToolStripMenuItem->Name = L"отменитьИзменениеToolStripMenuItem";
			this->отменитьИзменениеToolStripMenuItem->Size = System::Drawing::Size(181, 24);
			this->отменитьИзменениеToolStripMenuItem->Text = L"Отменить изменение  ";
			this->отменитьИзменениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactTypeBook::отменитьИзменениеToolStripMenuItem_Click);
			// 
			// RedactTypeBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(404, 216);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonRedact);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(422, 263);
			this->MinimumSize = System::Drawing::Size(422, 263);
			this->Name = L"RedactTypeBook";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Редактирование типа издания";
			this->Load += gcnew System::EventHandler(this, &RedactTypeBook::RedactTypeBook_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRedact_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RedactTypeBook_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
