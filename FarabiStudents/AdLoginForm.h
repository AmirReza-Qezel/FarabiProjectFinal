#pragma once
#include "SLoginForm.h"

namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdLoginForm
	/// </summary>
	public ref class AdLoginForm : public System::Windows::Forms::Form
	{
	public:
		AdLoginForm(void)
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
		~AdLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ loginbtn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ passwordtxtBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ userNametxtBox;
	private: System::Windows::Forms::Label^ label3;

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
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordtxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->userNametxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginbtn
			// 
			this->loginbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->loginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->loginbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->loginbtn->Location = System::Drawing::Point(145, 443);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(300, 65);
			this->loginbtn->TabIndex = 33;
			this->loginbtn->Text = L"Log Into App";
			this->loginbtn->UseVisualStyleBackColor = false;
			this->loginbtn->Click += gcnew System::EventHandler(this, &AdLoginForm::loginbtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label2->Location = System::Drawing::Point(81, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 23);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Password (Admin)";
			// 
			// passwordtxtBox
			// 
			this->passwordtxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->passwordtxtBox->Location = System::Drawing::Point(80, 344);
			this->passwordtxtBox->Name = L"passwordtxtBox";
			this->passwordtxtBox->Size = System::Drawing::Size(434, 36);
			this->passwordtxtBox->TabIndex = 31;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label1->Location = System::Drawing::Point(81, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 23);
			this->label1->TabIndex = 30;
			this->label1->Text = L"User Name (Admin)";
			// 
			// userNametxtBox
			// 
			this->userNametxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->userNametxtBox->Location = System::Drawing::Point(80, 211);
			this->userNametxtBox->Name = L"userNametxtBox";
			this->userNametxtBox->Size = System::Drawing::Size(434, 36);
			this->userNametxtBox->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label3->Location = System::Drawing::Point(216, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 66);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// AdLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 578);
			this->Controls->Add(this->loginbtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordtxtBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->userNametxtBox);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AdLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Login ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginlinkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		
	}
public: bool isLoginValid = false;
private: System::Void loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userName = this->userNametxtBox->Text;
	String^ password = this->passwordtxtBox->Text;

	if ((userName->Length * password->Length) == 0)
	{
		MessageBox::Show("Please Fill The Username and Password Boxes", "Warning", MessageBoxButtons::OK);
	}
	else if (userName == "farabiadmin" && password == "1234")
	{
		isLoginValid = true;
		this->Close();
	}
	else
	{
		MessageBox::Show("Invalid Inputs", "Warning", MessageBoxButtons::OK);
	}
}
};
}
