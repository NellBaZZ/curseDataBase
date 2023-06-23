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
	/// Сводка для RedactClient
	/// </summary>
	public ref class RedactClient : public System::Windows::Forms::Form
	{
	public:
		RedactClient(void)
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
		~RedactClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRedact;
	protected:
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::TextBox^ textBoxCode;
	private: System::Windows::Forms::TextBox^ textBoxFIO;
	private: System::Windows::Forms::TextBox^ textBoxAddress;
	private: System::Windows::Forms::Button^ buttonAdd;



	private: System::Windows::Forms::TextBox^ textBoxRedactWhat;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolStripMenuItem^ обновитьToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBoxAddCode;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxAddFIO;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxAddAddress;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBoxDeleteCode;

	private: System::Windows::Forms::Label^ label9;
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
			this->textBoxCode = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFIO = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxRedactWhat = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменитьИзменениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxAddCode = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddFIO = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddAddress = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxDeleteCode = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			this->buttonRedact->Location = System::Drawing::Point(6, 162);
			this->buttonRedact->Name = L"buttonRedact";
			this->buttonRedact->Size = System::Drawing::Size(358, 40);
			this->buttonRedact->TabIndex = 0;
			this->buttonRedact->Text = L"Изменить";
			this->buttonRedact->UseVisualStyleBackColor = false;
			this->buttonRedact->Click += gcnew System::EventHandler(this, &RedactClient::buttonRedact_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonDelete->Location = System::Drawing::Point(8, 145);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(364, 63);
			this->buttonDelete->TabIndex = 1;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &RedactClient::buttonDelete_Click);
			// 
			// textBoxCode
			// 
			this->textBoxCode->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxCode->Location = System::Drawing::Point(9, 42);
			this->textBoxCode->Name = L"textBoxCode";
			this->textBoxCode->Size = System::Drawing::Size(148, 22);
			this->textBoxCode->TabIndex = 2;
			// 
			// textBoxFIO
			// 
			this->textBoxFIO->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxFIO->Location = System::Drawing::Point(6, 88);
			this->textBoxFIO->Name = L"textBoxFIO";
			this->textBoxFIO->Size = System::Drawing::Size(358, 22);
			this->textBoxFIO->TabIndex = 3;
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddress->Location = System::Drawing::Point(6, 134);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(358, 22);
			this->textBoxAddress->TabIndex = 4;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonAdd->Location = System::Drawing::Point(5, 152);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(364, 53);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &RedactClient::buttonAdd_Click);
			// 
			// textBoxRedactWhat
			// 
			this->textBoxRedactWhat->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxRedactWhat->Location = System::Drawing::Point(175, 42);
			this->textBoxRedactWhat->Name = L"textBoxRedactWhat";
			this->textBoxRedactWhat->Size = System::Drawing::Size(189, 22);
			this->textBoxRedactWhat->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->закрытьToolStripMenuItem,
					this->обновитьToolStripMenuItem, this->отменитьИзменениеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(443, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->закрытьToolStripMenuItem->Text = L"Закрыть";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactClient::закрытьToolStripMenuItem_Click);
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(96, 24);
			this->обновитьToolStripMenuItem->Text = L"Обновить";
			this->обновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactClient::обновитьToolStripMenuItem_Click);
			// 
			// отменитьИзменениеToolStripMenuItem
			// 
			this->отменитьИзменениеToolStripMenuItem->Name = L"отменитьИзменениеToolStripMenuItem";
			this->отменитьИзменениеToolStripMenuItem->Size = System::Drawing::Size(194, 24);
			this->отменитьИзменениеToolStripMenuItem->Text = L"Отменить изменение  ";
			this->отменитьИзменениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &RedactClient::отменитьИзменениеToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 18);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите код клиента:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите ФИО клиента:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Введите адрес клиента:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(172, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Введите код клиента,";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(172, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"которого хотите изменить:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 41);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(383, 240);
			this->tabControl1->TabIndex = 14;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage1->Controls->Add(this->textBoxAddCode);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBoxAddFIO);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBoxAddAddress);
			this->tabPage1->Controls->Add(this->buttonAdd);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(375, 211);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавить";
			// 
			// textBoxAddCode
			// 
			this->textBoxAddCode->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddCode->Location = System::Drawing::Point(8, 27);
			this->textBoxAddCode->Name = L"textBoxAddCode";
			this->textBoxAddCode->Size = System::Drawing::Size(361, 22);
			this->textBoxAddCode->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 18);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Введите код клиента:";
			// 
			// textBoxAddFIO
			// 
			this->textBoxAddFIO->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddFIO->Location = System::Drawing::Point(8, 77);
			this->textBoxAddFIO->Name = L"textBoxAddFIO";
			this->textBoxAddFIO->Size = System::Drawing::Size(361, 22);
			this->textBoxAddFIO->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(8, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 18);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Введите адрес клиента:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 56);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 18);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Введите ФИО клиента:";
			// 
			// textBoxAddAddress
			// 
			this->textBoxAddAddress->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxAddAddress->Location = System::Drawing::Point(5, 124);
			this->textBoxAddAddress->Name = L"textBoxAddAddress";
			this->textBoxAddAddress->Size = System::Drawing::Size(364, 22);
			this->textBoxAddAddress->TabIndex = 14;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBoxCode);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->buttonRedact);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBoxFIO);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBoxRedactWhat);
			this->tabPage2->Controls->Add(this->textBoxAddress);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(375, 211);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Редактировать";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage3->Controls->Add(this->buttonDelete);
			this->tabPage3->Controls->Add(this->textBoxDeleteCode);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(375, 211);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Удалить";
			// 
			// textBoxDeleteCode
			// 
			this->textBoxDeleteCode->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxDeleteCode->Location = System::Drawing::Point(8, 41);
			this->textBoxDeleteCode->Name = L"textBoxDeleteCode";
			this->textBoxDeleteCode->Size = System::Drawing::Size(364, 22);
			this->textBoxDeleteCode->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(20, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 18);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Введите код клиента:";
			// 
			// RedactClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(443, 269);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(461, 316);
			this->MinimumSize = System::Drawing::Size(461, 316);
			this->Name = L"RedactClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Редактирование клиента";
			this->Load += gcnew System::EventHandler(this, &RedactClient::RedactClient_Load);
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
private: System::Void RedactClient_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);




private: System::Void обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
