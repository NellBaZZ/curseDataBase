#pragma once
#include "ClassObject.h"

namespace curseFormSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ qweToolStripMenuItem;

	private: System::Windows::Forms::Label^ labelText1;



	private: System::Windows::Forms::Button^ buttonClient;
	private: System::Windows::Forms::TextBox^ textBoxClient2;
	private: System::Windows::Forms::TextBox^ textBoxClient1;
	private: System::Windows::Forms::Label^ labelText;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkBoxState;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->qweToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labelText1 = (gcnew System::Windows::Forms::Label());
			this->buttonClient = (gcnew System::Windows::Forms::Button());
			this->textBoxClient2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClient1 = (gcnew System::Windows::Forms::TextBox());
			this->labelText = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBoxState = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->qweToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(550, 26);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// qweToolStripMenuItem
			// 
			this->qweToolStripMenuItem->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->qweToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->qweToolStripMenuItem->Name = L"qweToolStripMenuItem";
			this->qweToolStripMenuItem->Size = System::Drawing::Size(61, 22);
			this->qweToolStripMenuItem->Text = L"Выход";
			this->qweToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::qweToolStripMenuItem_Click);
			// 
			// labelText1
			// 
			this->labelText1->AutoSize = true;
			this->labelText1->Location = System::Drawing::Point(34, 67);
			this->labelText1->Name = L"labelText1";
			this->labelText1->Size = System::Drawing::Size(0, 16);
			this->labelText1->TabIndex = 5;
			// 
			// buttonClient
			// 
			this->buttonClient->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonClient->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClient->Location = System::Drawing::Point(37, 229);
			this->buttonClient->Name = L"buttonClient";
			this->buttonClient->Size = System::Drawing::Size(269, 36);
			this->buttonClient->TabIndex = 2;
			this->buttonClient->Text = L"Войти";
			this->buttonClient->UseVisualStyleBackColor = false;
			this->buttonClient->Click += gcnew System::EventHandler(this, &MainForm::buttonClient_Click);
			// 
			// textBoxClient2
			// 
			this->textBoxClient2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxClient2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxClient2->Location = System::Drawing::Point(37, 138);
			this->textBoxClient2->Name = L"textBoxClient2";
			this->textBoxClient2->Size = System::Drawing::Size(269, 27);
			this->textBoxClient2->TabIndex = 1;
			// 
			// textBoxClient1
			// 
			this->textBoxClient1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxClient1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxClient1->Location = System::Drawing::Point(37, 191);
			this->textBoxClient1->MaximumSize = System::Drawing::Size(269, 30);
			this->textBoxClient1->Name = L"textBoxClient1";
			this->textBoxClient1->PasswordChar = '*';
			this->textBoxClient1->Size = System::Drawing::Size(269, 27);
			this->textBoxClient1->TabIndex = 0;
			// 
			// labelText
			// 
			this->labelText->AutoSize = true;
			this->labelText->BackColor = System::Drawing::SystemColors::Window;
			this->labelText->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelText->ForeColor = System::Drawing::SystemColors::MenuText;
			this->labelText->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelText.Image")));
			this->labelText->Location = System::Drawing::Point(33, 67);
			this->labelText->Name = L"labelText";
			this->labelText->Size = System::Drawing::Size(231, 26);
			this->labelText->TabIndex = 6;
			this->labelText->Text = L"Вход в учетную запись";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(324, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(196, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// checkBoxState
			// 
			this->checkBoxState->AutoSize = true;
			this->checkBoxState->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->checkBoxState->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxState->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBoxState->Location = System::Drawing::Point(350, 4);
			this->checkBoxState->Name = L"checkBoxState";
			this->checkBoxState->Size = System::Drawing::Size(98, 22);
			this->checkBoxState->TabIndex = 8;
			this->checkBoxState->Text = L"Сотрудник";
			this->checkBoxState->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(34, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите логин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(34, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите пароль:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 306);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBoxState);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelText);
			this->Controls->Add(this->buttonClient);
			this->Controls->Add(this->textBoxClient1);
			this->Controls->Add(this->textBoxClient2);
			this->Controls->Add(this->labelText1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(550, 306);
			this->MinimumSize = System::Drawing::Size(550, 306);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wellcum";
			this->TransparencyKey = System::Drawing::SystemColors::Control;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void qweToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void loginClient();

		private: System::Void loginWorker();
};
}
