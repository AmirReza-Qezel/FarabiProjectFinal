#pragma once

namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RemoveForm
	/// </summary>
	public ref class RemoveForm : public System::Windows::Forms::Form
	{
	public:
		RemoveForm(void)
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
		~RemoveForm()
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


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ cnametb;


	private: System::Windows::Forms::TextBox^ stuIDtb;
	private: System::Windows::Forms::Button^ curmvbtn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ IDtb;
	private: System::Windows::Forms::Button^ sturmvbtn;






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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cnametb = (gcnew System::Windows::Forms::TextBox());
			this->stuIDtb = (gcnew System::Windows::Forms::TextBox());
			this->curmvbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->IDtb = (gcnew System::Windows::Forms::TextBox());
			this->sturmvbtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->cnametb);
			this->panel1->Controls->Add(this->stuIDtb);
			this->panel1->Controls->Add(this->curmvbtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 255);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(654, 277);
			this->panel1->TabIndex = 78;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label3->Location = System::Drawing::Point(58, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(558, 27);
			this->label3->TabIndex = 76;
			this->label3->Text = L"Remove Courses Info By Student ID and Course Name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label2->Location = System::Drawing::Point(405, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 19);
			this->label2->TabIndex = 73;
			this->label2->Text = L"Course Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label6->Location = System::Drawing::Point(139, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 23);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Student ID";
			// 
			// cnametb
			// 
			this->cnametb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnametb->Location = System::Drawing::Point(382, 123);
			this->cnametb->Name = L"cnametb";
			this->cnametb->Size = System::Drawing::Size(149, 30);
			this->cnametb->TabIndex = 70;
			// 
			// stuIDtb
			// 
			this->stuIDtb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuIDtb->Location = System::Drawing::Point(114, 123);
			this->stuIDtb->Name = L"stuIDtb";
			this->stuIDtb->Size = System::Drawing::Size(140, 30);
			this->stuIDtb->TabIndex = 55;
			// 
			// curmvbtn
			// 
			this->curmvbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->curmvbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->curmvbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->curmvbtn->Location = System::Drawing::Point(216, 199);
			this->curmvbtn->Name = L"curmvbtn";
			this->curmvbtn->Size = System::Drawing::Size(220, 39);
			this->curmvbtn->TabIndex = 54;
			this->curmvbtn->Text = L"Remove";
			this->curmvbtn->UseVisualStyleBackColor = false;
			this->curmvbtn->Click += gcnew System::EventHandler(this, &RemoveForm::curmvbtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label1->Location = System::Drawing::Point(135, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(405, 45);
			this->label1->TabIndex = 77;
			this->label1->Text = L"Remove Student By ID";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label9->Location = System::Drawing::Point(311, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 23);
			this->label9->TabIndex = 74;
			this->label9->Text = L"ID";
			// 
			// IDtb
			// 
			this->IDtb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtb->Location = System::Drawing::Point(259, 106);
			this->IDtb->Name = L"IDtb";
			this->IDtb->Size = System::Drawing::Size(140, 30);
			this->IDtb->TabIndex = 71;
			// 
			// sturmvbtn
			// 
			this->sturmvbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->sturmvbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->sturmvbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sturmvbtn->Location = System::Drawing::Point(216, 169);
			this->sturmvbtn->Name = L"sturmvbtn";
			this->sturmvbtn->Size = System::Drawing::Size(220, 39);
			this->sturmvbtn->TabIndex = 70;
			this->sturmvbtn->Text = L"Remove";
			this->sturmvbtn->UseVisualStyleBackColor = false;
			this->sturmvbtn->Click += gcnew System::EventHandler(this, &RemoveForm::sturmvbtn_Click);
			// 
			// RemoveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 532);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->IDtb);
			this->Controls->Add(this->sturmvbtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"RemoveForm";
			this->Text = L"RemoveForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sturmvbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (Convert::ToInt32(this->IDtb->Text) > 220703000 && Convert::ToInt32(this->IDtb->Text) < 220704000)
			{
				String^ connstr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;TrustServerCertificate=True";
				SqlConnection sqlconn(connstr);
				sqlconn.Open();
				String^ query = "SELECT * FROM dbo.Students WHERE StudentID = '" + this->IDtb->Text + "'";
				SqlCommand command(query, % sqlconn);
				SqlDataReader^ sdr = command.ExecuteReader();
				if (sdr->Read())
				{
					String^ connstr2 = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;TrustServerCertificate=True";
					SqlConnection sqlconn2(connstr2);
					sqlconn2.Open();
					String^ query2 = "delete from dbo.Students where StudentID = '" + this->IDtb->Text + "';";
					SqlCommand command2(query2, % sqlconn2);
					command2.ExecuteNonQuery();
					sqlconn2.Close();
					sqlconn.Close();
					MessageBox::Show("Successfully Deleted", "Accomplished", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Theres no Student who goes by that ID", "Alert", MessageBoxButtons::OK);
				}
			}
			else
			{
				MessageBox::Show("Theres no Student who goes by that ID", "Alert", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Invalid Inputs", "Alert", MessageBoxButtons::OK);
		}
		
	}
private: System::Void curmvbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ connstr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;TrustServerCertificate=True";
		SqlConnection sqlconn(connstr);
		sqlconn.Open();
		String^ query = "SELECT * FROM dbo.CoursesScore WHERE StudentID = '" + this->stuIDtb->Text + "' AND CourseName = '"+this->cnametb->Text+"'";
		SqlCommand command(query, % sqlconn);
		SqlDataReader^ sdr = command.ExecuteReader();
		if (Convert::ToInt32(this->stuIDtb->Text) < 220703000 || Convert::ToInt32(this->stuIDtb->Text) > 220704000)
		{
			MessageBox::Show("ID should be between 220703000 and 220704000 ", "Invalid inputs", MessageBoxButtons::OK);
			this->IDtb->Text = "";
		}
		else if (sdr->Read())
		{
			String^ connstr1 = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlconn1(connstr1);
			sqlconn1.Open();
			String^ query1 = "delete from dbo.CoursesScore where StudentID = '" + this->stuIDtb->Text + "' AND CourseName = '" + this->cnametb->Text + "';";
			SqlCommand command1(query1, % sqlconn1);

			command1.ExecuteNonQuery();

			sqlconn1.Close();

			this->cnametb->Text = "";
			MessageBox::Show("Course Information Succesfully Deleted", "Completed", MessageBoxButtons::OK);
			sqlconn.Close();
		}
		else
		{
			MessageBox::Show("Please insert valid data in fields", "Invalid inputs", MessageBoxButtons::OK);
			sqlconn.Close();
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Please insert valid data", "Invalid inputs", MessageBoxButtons::OK);
		throw e;
	}
}
};
}
