#pragma once
#include "Register.h"

namespace AIRLINES {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignIn
	/// </summary>
	public ref class SignIn : public System::Windows::Forms::Form
	{
	public:
		SignIn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignIn::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->ForeColor = System::Drawing::Color::BurlyWood;
			this->panel1->Location = System::Drawing::Point(406, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(780, 673);
			this->panel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 557);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(780, 116);
			this->panel5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(55, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(598, 56);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Now you can create additional accounts and manage different system roles and mana"
				L"ge resources effeciently.\r\n";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(41, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 56);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Did You Know\?";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(58, 484);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(584, 37);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->ForeColor = System::Drawing::Color::SeaShell;
			this->checkBox1->Location = System::Drawing::Point(230, 462);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(261, 22);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"I agree to the terms and conditions";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SignIn::checkBox1_CheckedChanged);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Location = System::Drawing::Point(58, 345);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(584, 67);
			this->panel4->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::MidnightBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->Location = System::Drawing::Point(15, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(497, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"PASSWORD";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox2_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(58, 272);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(584, 67);
			this->panel3->TabIndex = 5;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignIn::panel3_Paint);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MidnightBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->Location = System::Drawing::Point(17, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(497, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"USERNAME";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(50, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 94);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sign In\r\n\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(43, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(598, 56);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign In to your account so that we can import settings and preferences and adjust"
				L" your experience.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(406, 673);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignIn::panel2_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(152, 493);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignIn::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(149, 463);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 36);
			this->label2->TabIndex = 2;
			this->label2->Text = L" No Account\?\r\n\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(106, 86);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(198, 178);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(59, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(294, 56);
			this->label6->TabIndex = 4;
			this->label6->Text = L"We will fly you to your destination.\r\n";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label6->Click += gcnew System::EventHandler(this, &SignIn::label6_Click);
			// 
			// SignIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1204, 720);
			this->MinimumSize = System::Drawing::Size(1204, 720);
			this->Name = L"SignIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignIn";
			this->Load += gcnew System::EventHandler(this, &SignIn::SignIn_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SignIn_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "USERNAME")
	{
		textBox1->Text = "";
		textBox1->ForeColor = Color::Black;
	}

	

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "PASSWORD")
	{
		textBox2->Text = "";
		textBox2->ForeColor = Color::Black;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		button2->Enabled = true;
	}
	else
	{
		button2->Enabled = false;
	}
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
#include "register.h" // Include the header file for the Register form

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Register^ registerForm = gcnew Register();
	registerForm->Show();
	this->Hide();

}

};
}
