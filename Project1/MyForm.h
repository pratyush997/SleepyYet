#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  sleep_now;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	private: System::Windows::Forms::Button^  button1;
	private: DateTime time;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::RadioButton^  sleep_known;
	private: System::Windows::Forms::RadioButton^  wake_known;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->sleep_now = (gcnew System::Windows::Forms::RadioButton());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->sleep_known = (gcnew System::Windows::Forms::RadioButton());
			this->wake_known = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// sleep_now
			// 
			this->sleep_now->AutoSize = true;
			this->sleep_now->Checked = true;
			this->sleep_now->Location = System::Drawing::Point(193, 55);
			this->sleep_now->Name = L"sleep_now";
			this->sleep_now->Size = System::Drawing::Size(83, 17);
			this->sleep_now->TabIndex = 0;
			this->sleep_now->TabStop = true;
			this->sleep_now->Text = L"Sleep Now  ";
			this->sleep_now->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"hh:mm:tt";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(40, 78);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(73, 20);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(40, 141);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(272, 61);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// sleep_known
			// 
			this->sleep_known->AutoSize = true;
			this->sleep_known->Enabled = false;
			this->sleep_known->Location = System::Drawing::Point(193, 78);
			this->sleep_known->Name = L"sleep_known";
			this->sleep_known->Size = System::Drawing::Size(114, 17);
			this->sleep_known->TabIndex = 6;
			this->sleep_known->Text = L"Sleep Time Known";
			this->sleep_known->UseVisualStyleBackColor = true;
			// 
			// wake_known
			// 
			this->wake_known->AutoSize = true;
			this->wake_known->Enabled = false;
			this->wake_known->Location = System::Drawing::Point(193, 101);
			this->wake_known->Name = L"wake_known";
			this->wake_known->Size = System::Drawing::Size(116, 17);
			this->wake_known->TabIndex = 8;
			this->wake_known->Text = L"Wake Time Known";
			this->wake_known->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(40, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"About";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"This Determines the Time You Should Wake Up Feeling Fresh.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(161, 217);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 263);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->wake_known);
			this->Controls->Add(this->sleep_known);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->sleep_now);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SleepyYet";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

		this->sleep_now->Enabled = true;
		this->sleep_known->Enabled = true;
		this->wake_known->Enabled = true;
		
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		listView1->Clear();
		if (sleep_now->Checked == true)
		{
			time = DateTime::Now;
			time = time.AddMinutes(14);

			for (int i = 0; i < 6; i++)
			{
				listView1->Items->Add(time.AddMinutes(90*(i+1)).ToShortTimeString());
			}
		}

		else if (sleep_known->Checked == true)
		{

			time = dateTimePicker1->Value;
			for (int i = 0; i < 6; i++)
			{
				listView1->Items->Add(time.AddMinutes(90 * (i + 1)).ToShortTimeString());
			}

			this->sleep_now->Enabled = true;
			this->sleep_known->Enabled = true;
			this->wake_known->Enabled = true;
		}

		else // for radiobutton3
		{
			time = dateTimePicker1->Value;
			time = time.AddMinutes(-630);
			for (int i = 0; i < 6; i++)
			{
				listView1->Items->Add(time.AddMinutes(90 * (i + 1)).ToShortTimeString());
			}

			this->sleep_now->Enabled = true;
			this->sleep_known->Enabled = true;
			this->wake_known->Enabled = true;
		}	

	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("Inspired by Darkcode's sleepyti.me \n\nAman, You the Man!\n\npratyush997 signing off ");

}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	System::Diagnostics::Process::Start("https://github.com/pratyush997");

}
};
}
