#pragma once

namespace AIRLINES {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Name;
	private: System::Windows::Forms::TextBox^ UserId;

	private: System::Windows::Forms::TextBox^ CNIC;

	private: System::Windows::Forms::Label^ v;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ changepassword;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label6;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->changepassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UserId = (gcnew System::Windows::Forms::TextBox());
			this->CNIC = (gcnew System::Windows::Forms::TextBox());
			this->v = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->changepassword);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->UserId);
			this->panel1->Controls->Add(this->CNIC);
			this->panel1->Controls->Add(this->v);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Name);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(880, 665);
			this->panel1->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->ForeColor = System::Drawing::Color::SeaShell;
			this->checkBox1->Location = System::Drawing::Point(252, 552);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(261, 22);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"I agree to the terms and conditions";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Register::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(27, 580);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(682, 38);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(23, 463);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 24);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Change Password:";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::MidnightBlue;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Passanger", L"Admin", L"Pilot", L"Hostess", L"Staff" });
			this->listBox1->Location = System::Drawing::Point(27, 277);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(682, 84);
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Register::listBox1_SelectedIndexChanged);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::MidnightBlue;
			this->password->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::SystemColors::Window;
			this->password->Location = System::Drawing::Point(27, 408);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(682, 29);
			this->password->TabIndex = 9;
			this->password->TextChanged += gcnew System::EventHandler(this, &Register::password_TextChanged);
			// 
			// changepassword
			// 
			this->changepassword->BackColor = System::Drawing::Color::MidnightBlue;
			this->changepassword->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changepassword->ForeColor = System::Drawing::SystemColors::Window;
			this->changepassword->Location = System::Drawing::Point(27, 490);
			this->changepassword->Name = L"changepassword";
			this->changepassword->Size = System::Drawing::Size(682, 29);
			this->changepassword->TabIndex = 8;
			this->changepassword->TextChanged += gcnew System::EventHandler(this, &Register::changepassword_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(23, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Role:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(23, 381);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password:";
			// 
			// UserId
			// 
			this->UserId->BackColor = System::Drawing::Color::MidnightBlue;
			this->UserId->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserId->ForeColor = System::Drawing::SystemColors::Window;
			this->UserId->Location = System::Drawing::Point(27, 201);
			this->UserId->Name = L"UserId";
			this->UserId->Size = System::Drawing::Size(682, 29);
			this->UserId->TabIndex = 5;
			this->UserId->TextChanged += gcnew System::EventHandler(this, &Register::UserId_TextChanged);
			// 
			// CNIC
			// 
			this->CNIC->BackColor = System::Drawing::Color::MidnightBlue;
			this->CNIC->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CNIC->ForeColor = System::Drawing::SystemColors::Window;
			this->CNIC->Location = System::Drawing::Point(27, 123);
			this->CNIC->Name = L"CNIC";
			this->CNIC->Size = System::Drawing::Size(682, 29);
			this->CNIC->TabIndex = 4;
			this->CNIC->TextChanged += gcnew System::EventHandler(this, &Register::CNIC_TextChanged);
			// 
			// v
			// 
			this->v->AutoSize = true;
			this->v->BackColor = System::Drawing::Color::Transparent;
			this->v->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->v->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->v->Location = System::Drawing::Point(23, 96);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(70, 24);
			this->v->TabIndex = 3;
			this->v->Text = L"CNIC:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(23, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"UserId:";
			// 
			// Name
			// 
			this->Name->BackColor = System::Drawing::Color::MidnightBlue;
			this->Name->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->ForeColor = System::Drawing::SystemColors::Window;
			this->Name->Location = System::Drawing::Point(27, 48);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(682, 29);
			this->Name->TabIndex = 1;
			this->Name->TextChanged += gcnew System::EventHandler(this, &Register::Name_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(23, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(886, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(299, 700);
			this->panel2->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(139, 630);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"*terms and conditions.";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 657);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximumSize = System::Drawing::Size(1204, 704);
			this->MinimumSize = System::Drawing::Size(1204, 704);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			button1->Enabled = true;
		}
		else
		{
			button1->Enabled = false;
		}
	}


	


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CNIC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UserId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void changepassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
