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
	/// Summary for StudentWorkspaceForm
	/// </summary>
	public ref class StudentWorkspaceForm : public System::Windows::Forms::Form
	{
	public:
		StudentWorkspaceForm(void)
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
		~StudentWorkspaceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewStudents;
	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ IDtb;
	private: System::Windows::Forms::TextBox^ totalscoretb;
	private: System::Windows::Forms::Button^ showbtn;


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
			this->dataGridViewStudents = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IDtb = (gcnew System::Windows::Forms::TextBox());
			this->totalscoretb = (gcnew System::Windows::Forms::TextBox());
			this->showbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStudents))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewStudents
			// 
			this->dataGridViewStudents->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridViewStudents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStudents->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(205)));
			this->dataGridViewStudents->Location = System::Drawing::Point(99, 166);
			this->dataGridViewStudents->Name = L"dataGridViewStudents";
			this->dataGridViewStudents->RowHeadersWidth = 51;
			this->dataGridViewStudents->Size = System::Drawing::Size(553, 365);
			this->dataGridViewStudents->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(177, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 44);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Academic Transcript";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(214, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ID : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(479, 593);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Total Score :";
			// 
			// IDtb
			// 
			this->IDtb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtb->Location = System::Drawing::Point(264, 86);
			this->IDtb->Name = L"IDtb";
			this->IDtb->Size = System::Drawing::Size(140, 30);
			this->IDtb->TabIndex = 72;
			// 
			// totalscoretb
			// 
			this->totalscoretb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalscoretb->Location = System::Drawing::Point(601, 589);
			this->totalscoretb->Name = L"totalscoretb";
			this->totalscoretb->ReadOnly = true;
			this->totalscoretb->Size = System::Drawing::Size(119, 30);
			this->totalscoretb->TabIndex = 72;
			// 
			// showbtn
			// 
			this->showbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->showbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->showbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->showbtn->Location = System::Drawing::Point(426, 84);
			this->showbtn->Name = L"showbtn";
			this->showbtn->Size = System::Drawing::Size(87, 34);
			this->showbtn->TabIndex = 73;
			this->showbtn->Text = L"Show";
			this->showbtn->UseVisualStyleBackColor = false;
			this->showbtn->Click += gcnew System::EventHandler(this, &StudentWorkspaceForm::showbtn_Click);
			// 
			// StudentWorkspaceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(757, 658);
			this->Controls->Add(this->showbtn);
			this->Controls->Add(this->totalscoretb);
			this->Controls->Add(this->IDtb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewStudents);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"StudentWorkspaceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentWorkspaceForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStudents))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void showbtn_Click(System::Object^ sender, System::EventArgs^ e) {
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
					String^ constr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
	SqlConnection conn(constr);
	conn.Open();
	String^ query = "select C.CourseName,C.Units,C.Score from dbo.CoursesScore AS C Where C.StudentID = '"+this->IDtb->Text+"';";
	SqlCommand^ command= gcnew SqlCommand(query,% conn);
	DataTable dtbl;
	SqlDataReader^ myReader;
	SqlDataAdapter^ sda = gcnew SqlDataAdapter();
	sda->SelectCommand = command;
	DataTable^ dbdataset = gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bsource = gcnew BindingSource();
	bsource->DataSource = dbdataset;
	dataGridViewStudents->DataSource = bsource;
	sda->Update(dbdataset);

	String^ constr3 = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
	SqlConnection conn3(constr3);
	conn3.Open();
	String^ query3 = "SELECT Distinct (SELECT SUM(C.Chemer) / SUM(C.Units)FROM dbo.CoursesScore AS C WHERE C.StudentID = S.StudentID) AS TotalScore FROM dbo.Students AS S where StudentID = '"+this->IDtb->Text+"';";
	SqlCommand^ command3 = gcnew SqlCommand(query3, % conn3);
	this->totalscoretb->Text = Convert::ToString(command3->ExecuteScalar());
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
};
}
