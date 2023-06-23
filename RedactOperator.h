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
	/// Сводка для RedactOperator
	/// </summary>
	public ref class RedactOperator : public System::Windows::Forms::Form
	{
	public:
		RedactOperator(void)
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
		~RedactOperator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRedact;
	protected:
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPass;

	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::TextBox^ textBoxRedactWhat;
	private: System::Windows::Forms::ListBox^ listBoxWorker;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ToolStripMenuItem^ обновитьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxAddLogin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxAddPass;
	private: System::Windows::Forms::TextBox^ textBoxDeleteLogin;
	private: System::Windows::Forms::Label^ label6;
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
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxRedactWhat = (gcnew System::Windows::Forms::TextBox());
			this->listBoxWorker = (gcnew System::Windows::Forms::ListBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменитьИзменениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxAddLogin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddPass = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxDeleteLogin = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->buttonRedact->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRedact->Location = System::Drawing::Point(9, 160);
			this->buttonRedact->Name = L"buttonRedact";
			this->buttonRedact->Size = System::Drawing::Size(379, 47);
			this->buttonRedact->TabIndex = 0;
			this->buttonRedact->Text = L"Изменить";
			this->buttonRedact->UseVisualStyleBackColor = false;
			this->buttonRedact->Click += gcnew System::EventHandler(this, &RedactOperator::buttonRedact_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelete->Location = System::Drawing::Point(0, 158);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(395, 52);
			this->buttonDelete->TabIndex = 1;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &RedactOperator::buttonDelete_Click);
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxLogin->Location = System::Drawing::Point(9, 80);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(379, 23);
			this->textBoxLogin->TabIndex = 2;
			// 
			// textBoxPass
			// 
			this->textBoxPass->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxPass->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPass->Location = System::Drawing::Point(9, 128);
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(379, 23);
			this->textBoxPass->TabIndex = 3;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(6, 139);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(383, 68);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &RedactOperator::buttonAdd_Click);
			// 
			// textBoxRedactWhat
			// 
			this->textBoxRedactWhat->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxRedactWhat->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRedactWhat->Location = System::Drawing::Point(6, 33);
			this->textBoxRedactWhat->Name = L"textBoxRedactWhat";
			this->textBoxRedactWhat->Size = System::Drawing::Size(382, 23);
			this->textBoxRedactWhat->TabIndex = 6;
			// 
			// listBoxWorker
			// 
			this->listBoxWorker->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBoxWorker->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxWorker->FormattingEnabled = true;
			this->listBoxWorker->ItemHeight = 20;
			this->listBoxWorker->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Оператор", L"Должность" });
			this->listBoxWorker->Location = System::Drawing::Point(412, 73);
			this->listBoxWorker->Name = L"listBoxWorker";
			this->listBoxWorker->Size = System::Drawing::Size(182, 44);
			this->listBoxWorker->TabIndex = 39;
			this->listBoxWorker->SelectedIndexChanged += gcnew System::EventHandler(this, &RedactOperator::listBoxWorker_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(409, 52);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(152, 18);
			this->label17->TabIndex = 40;
			this->label17->Text = L"Выберите должность:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 18);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Введите логин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 18);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Введите пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 18);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Введите логин для изменения:";
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
			this->menuStrip1->Size = System::Drawing::Size(602, 28);
			this->menuStrip1->TabIndex = 44;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->закрытьToolStripMenuItem->Text = L"Закрыть";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactOperator::закрытьToolStripMenuItem_Click);
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->обновитьToolStripMenuItem->Text = L"Обновить";
			this->обновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactOperator::обновитьToolStripMenuItem_Click);
			// 
			// отменитьИзменениеToolStripMenuItem
			// 
			this->отменитьИзменениеToolStripMenuItem->Name = L"отменитьИзменениеToolStripMenuItem";
			this->отменитьИзменениеToolStripMenuItem->Size = System::Drawing::Size(177, 24);
			this->отменитьИзменениеToolStripMenuItem->Text = L"Отменить изменение ";
			this->отменитьИзменениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactOperator::отменитьИзменениеToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(403, 242);
			this->tabControl1->TabIndex = 45;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage1->Controls->Add(this->textBoxAddLogin);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBoxAddPass);
			this->tabPage1->Controls->Add(this->buttonAdd);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(395, 213);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавить";
			// 
			// textBoxAddLogin
			// 
			this->textBoxAddLogin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddLogin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddLogin->Location = System::Drawing::Point(6, 28);
			this->textBoxAddLogin->Name = L"textBoxAddLogin";
			this->textBoxAddLogin->Size = System::Drawing::Size(383, 23);
			this->textBoxAddLogin->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 18);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Введите логин:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 18);
			this->label5->TabIndex = 46;
			this->label5->Text = L"Введите пароль:";
			// 
			// textBoxAddPass
			// 
			this->textBoxAddPass->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddPass->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddPass->Location = System::Drawing::Point(6, 75);
			this->textBoxAddPass->Name = L"textBoxAddPass";
			this->textBoxAddPass->Size = System::Drawing::Size(383, 23);
			this->textBoxAddPass->TabIndex = 44;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBoxLogin);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBoxPass);
			this->tabPage2->Controls->Add(this->textBoxRedactWhat);
			this->tabPage2->Controls->Add(this->buttonRedact);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(395, 213);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Редактировать";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBoxDeleteLogin);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->buttonDelete);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(395, 213);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Удалить";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBoxDeleteLogin
			// 
			this->textBoxDeleteLogin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxDeleteLogin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDeleteLogin->Location = System::Drawing::Point(3, 35);
			this->textBoxDeleteLogin->Name = L"textBoxDeleteLogin";
			this->textBoxDeleteLogin->Size = System::Drawing::Size(389, 23);
			this->textBoxDeleteLogin->TabIndex = 42;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 18);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Введите логин:";
			// 
			// RedactOperator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(602, 279);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->listBoxWorker);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(620, 326);
			this->MinimumSize = System::Drawing::Size(620, 326);
			this->Name = L"RedactOperator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Редактирование сотрудника";
			this->Load += gcnew System::EventHandler(this, &RedactOperator::printFirst);
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
		private: System::Void printFirst(System::Object^ sender, System::EventArgs^ e);

		private: System::Void listBoxWorker_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonRedact_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
