#pragma once
#include"CoursesInfoForm.h"
namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
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
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ cnametb;
	private: System::Windows::Forms::TextBox^ cutb;
	private: System::Windows::Forms::TextBox^ cstb;
	private: System::Windows::Forms::TextBox^ stuIDtb;
	private: System::Windows::Forms::Button^ caddbtn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ h;
	private: System::Windows::Forms::Label^ g;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Majortb;
	private: System::Windows::Forms::TextBox^ Fullnametb;
	private: System::Windows::Forms::TextBox^ IDtb;
	private: System::Windows::Forms::Button^ stuaddbtn;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cnametb = (gcnew System::Windows::Forms::TextBox());
			this->cutb = (gcnew System::Windows::Forms::TextBox());
			this->cstb = (gcnew System::Windows::Forms::TextBox());
			this->stuIDtb = (gcnew System::Windows::Forms::TextBox());
			this->caddbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->h = (gcnew System::Windows::Forms::Label());
			this->g = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Majortb = (gcnew System::Windows::Forms::TextBox());
			this->Fullnametb = (gcnew System::Windows::Forms::TextBox());
			this->IDtb = (gcnew System::Windows::Forms::TextBox());
			this->stuaddbtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->cnametb);
			this->panel1->Controls->Add(this->cutb);
			this->panel1->Controls->Add(this->cstb);
			this->panel1->Controls->Add(this->stuIDtb);
			this->panel1->Controls->Add(this->caddbtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 255);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(654, 277);
			this->panel1->TabIndex = 78;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label3->Location = System::Drawing::Point(222, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 45);
			this->label3->TabIndex = 76;
			this->label3->Text = L"Courses Info";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label2->Location = System::Drawing::Point(239, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 19);
			this->label2->TabIndex = 73;
			this->label2->Text = L"Course Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label5->Location = System::Drawing::Point(391, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 19);
			this->label5->TabIndex = 74;
			this->label5->Text = L"Units Amount";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label4->Location = System::Drawing::Point(532, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 23);
			this->label4->TabIndex = 75;
			this->label4->Text = L"Score";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label6->Location = System::Drawing::Point(70, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 23);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Student ID";
			// 
			// cnametb
			// 
			this->cnametb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnametb->Location = System::Drawing::Point(216, 123);
			this->cnametb->Name = L"cnametb";
			this->cnametb->Size = System::Drawing::Size(149, 30);
			this->cnametb->TabIndex = 70;
			// 
			// cutb
			// 
			this->cutb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cutb->Location = System::Drawing::Point(402, 123);
			this->cutb->Name = L"cutb";
			this->cutb->Size = System::Drawing::Size(75, 30);
			this->cutb->TabIndex = 71;
			// 
			// cstb
			// 
			this->cstb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cstb->Location = System::Drawing::Point(526, 123);
			this->cstb->Name = L"cstb";
			this->cstb->Size = System::Drawing::Size(75, 30);
			this->cstb->TabIndex = 72;
			// 
			// stuIDtb
			// 
			this->stuIDtb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuIDtb->Location = System::Drawing::Point(45, 123);
			this->stuIDtb->Name = L"stuIDtb";
			this->stuIDtb->Size = System::Drawing::Size(140, 30);
			this->stuIDtb->TabIndex = 55;
			// 
			// caddbtn
			// 
			this->caddbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->caddbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->caddbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->caddbtn->Location = System::Drawing::Point(216, 199);
			this->caddbtn->Name = L"caddbtn";
			this->caddbtn->Size = System::Drawing::Size(220, 39);
			this->caddbtn->TabIndex = 54;
			this->caddbtn->Text = L"Add";
			this->caddbtn->UseVisualStyleBackColor = false;
			this->caddbtn->Click += gcnew System::EventHandler(this, &AddForm::caddbtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label1->Location = System::Drawing::Point(219, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 45);
			this->label1->TabIndex = 77;
			this->label1->Text = L"Student Info";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// h
			// 
			this->h->AutoSize = true;
			this->h->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->h->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->h->Location = System::Drawing::Point(533, 82);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(58, 23);
			this->h->TabIndex = 76;
			this->h->Text = L"Major";
			// 
			// g
			// 
			this->g->AutoSize = true;
			this->g->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->g->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->g->Location = System::Drawing::Point(316, 82);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(93, 23);
			this->g->TabIndex = 75;
			this->g->Text = L"Full Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label9->Location = System::Drawing::Point(97, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 23);
			this->label9->TabIndex = 74;
			this->label9->Text = L"ID";
			// 
			// Majortb
			// 
			this->Majortb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Majortb->Location = System::Drawing::Point(536, 108);
			this->Majortb->Name = L"Majortb";
			this->Majortb->Size = System::Drawing::Size(54, 30);
			this->Majortb->TabIndex = 72;
			// 
			// Fullnametb
			// 
			this->Fullnametb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fullnametb->Location = System::Drawing::Point(269, 108);
			this->Fullnametb->Name = L"Fullnametb";
			this->Fullnametb->Size = System::Drawing::Size(198, 30);
			this->Fullnametb->TabIndex = 73;
			// 
			// IDtb
			// 
			this->IDtb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtb->Location = System::Drawing::Point(45, 108);
			this->IDtb->Name = L"IDtb";
			this->IDtb->Size = System::Drawing::Size(140, 30);
			this->IDtb->TabIndex = 71;
			// 
			// stuaddbtn
			// 
			this->stuaddbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->stuaddbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->stuaddbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stuaddbtn->Location = System::Drawing::Point(216, 169);
			this->stuaddbtn->Name = L"stuaddbtn";
			this->stuaddbtn->Size = System::Drawing::Size(220, 39);
			this->stuaddbtn->TabIndex = 70;
			this->stuaddbtn->Text = L"Add";
			this->stuaddbtn->UseVisualStyleBackColor = false;
			this->stuaddbtn->Click += gcnew System::EventHandler(this, &AddForm::stuaddbtn_Click);
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 532);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->h);
			this->Controls->Add(this->g);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Majortb);
			this->Controls->Add(this->Fullnametb);
			this->Controls->Add(this->IDtb);
			this->Controls->Add(this->stuaddbtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddForm";
			this->Load += gcnew System::EventHandler(this, &AddForm::AddForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void stuaddbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		if (Convert::ToInt32(this->IDtb->Text) < 220703000 || Convert::ToInt32(this->IDtb->Text) > 220704000)
		{
			MessageBox::Show("ID should be between 220703000 and 220704000 ", "Invalid inputs", MessageBoxButtons::OK);
			this->IDtb->Text = "";
		}
		else if ((this->Majortb->Text == "CE" || this->Majortb->Text == "IE"))
		{
			String^ connstr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlconn(connstr);
			sqlconn.Open();
			String^ query = "INSERT INTO dbo.Students(StudentID, FullName, Major) VALUES('" + this->IDtb->Text + "', '" + this->Fullnametb->Text + "', '" + this->Majortb->Text + "');";
			SqlCommand command(query, % sqlconn);

			command.ExecuteNonQuery();

			sqlconn.Close();
			MessageBox::Show("Added Successfully", "Completed", MessageBoxButtons::OK);
		}
		else
			MessageBox::Show("Major should only be CE or IE , Course ID and Score should be valid", "Invalid inputs", MessageBoxButtons::OK);

	}


	catch (Exception^ e)
	{
		MessageBox::Show("Please insert valid data", "Invalid inputs", MessageBoxButtons::OK);
	}
	catch (System::Data::SqlClient::SqlException^ e)
	{
		MessageBox::Show("Please insert valid data which is not currently available (ID can't be Updated !)", "Invalid inputs", MessageBoxButtons::OK);
		throw e;
	}
}
	private: System::Void idguidebtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FarabiStudents::CoursesInfoForm cif;
		cif.ShowDialog();
	}
	private: System::Void caddbtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (Convert::ToInt32(this->stuIDtb->Text) < 220703000 || Convert::ToInt32(this->stuIDtb->Text) > 220704000)
			{
				MessageBox::Show("ID should be between 220703000 and 220704000 ", "Invalid inputs", MessageBoxButtons::OK);
				this->IDtb->Text = "";
			}
			else if (Convert::ToInt32(this->cutb->Text) > 0 && Convert::ToInt32(this->cutb->Text) <= 5 && Convert::ToSingle(this->cstb->Text) > 0 && Convert::ToSingle(this->cstb->Text) <= 20)
			{
				String^ connstr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;TrustServerCertificate=True";
				SqlConnection sqlconn(connstr);
				sqlconn.Open();
				String^ query = "INSERT INTO dbo.CoursesScore (StudentID, Units, Score,Chemer, CourseName) VALUES('" + this->stuIDtb->Text + "','" + this->cutb->Text + "','" + this->cstb->Text + "','" + Convert::ToSingle(this->cutb->Text) * Convert::ToSingle(this->cstb->Text) + "','" + this->cnametb->Text + "');";
				SqlCommand command(query, % sqlconn);

				command.ExecuteNonQuery();

				sqlconn.Close();
				this->cutb->Text = "";
				this->cstb->Text = "";
				this->cnametb->Text = "";
				MessageBox::Show("Course Information Succesfully added", "Completed", MessageBoxButtons::OK);
			}
			else
			{
				MessageBox::Show("Please insert valid data in fields", "Invalid inputs", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Please insert valid data", "Invalid inputs", MessageBoxButtons::OK);
		}
		
	}
};
}
