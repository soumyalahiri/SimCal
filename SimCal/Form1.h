#pragma once

namespace SimCal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  DisplayLabel;
	protected: 

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;

	private: System::Windows::Forms::Button^  button17;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->DisplayLabel = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// DisplayLabel
			// 
			this->DisplayLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DisplayLabel->Font = (gcnew System::Drawing::Font(L"Open Sans Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DisplayLabel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->DisplayLabel->Location = System::Drawing::Point(22, 55);
			this->DisplayLabel->Name = L"DisplayLabel";
			this->DisplayLabel->Size = System::Drawing::Size(342, 80);
			this->DisplayLabel->TabIndex = 0;
			this->DisplayLabel->Text = L"0";
			this->DisplayLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->DisplayLabel->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(283, 418);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(81, 82);
			this->button10->TabIndex = 1;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button14->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(196, 418);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(81, 82);
			this->button14->TabIndex = 1;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button15->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(109, 418);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(81, 82);
			this->button15->TabIndex = 1;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button16->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(22, 418);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(81, 82);
			this->button16->TabIndex = 1;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(283, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 82);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(196, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 82);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(109, 330);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 82);
			this->button3->TabIndex = 1;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(22, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 82);
			this->button4->TabIndex = 1;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(283, 242);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 82);
			this->button5->TabIndex = 1;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(196, 242);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 82);
			this->button6->TabIndex = 1;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(109, 242);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 82);
			this->button7->TabIndex = 1;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(22, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(81, 82);
			this->button8->TabIndex = 1;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(283, 154);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(81, 82);
			this->button9->TabIndex = 1;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(196, 154);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(81, 82);
			this->button11->TabIndex = 1;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(109, 154);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(81, 82);
			this->button12->TabIndex = 1;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button13->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(22, 154);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(81, 82);
			this->button13->TabIndex = 1;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuText;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Open Sans", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button17->Location = System::Drawing::Point(96, 513);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(194, 34);
			this->button17->TabIndex = 1;
			this->button17->Text = L"SimCal by Soumya Lahiri v1.0 2019";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(384, 569);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->DisplayLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(390, 598);
			this->Name = L"Form1";
			this->Text = L"SimCal";
			this->TransparencyKey = System::Drawing::Color::White;
			this->ResumeLayout(false);

		}
		int FirstNumber, SecondNumber, Result;
		char Operation;
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "1";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "1";
			 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "2";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "2";
			 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "3";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "3";
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "4";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "4";
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "5";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "5";
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "6";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "6";
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "7";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "7";
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "8";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "8";
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "9";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "9";
			 }
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(DisplayLabel->Text == "0" || DisplayLabel->Text == "") {
				 DisplayLabel->Text = "0";
			 }
			 else {
				 DisplayLabel->Text = Convert::ToInt32(DisplayLabel->Text) + "0";
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 DisplayLabel->Text = "";
			 DisplayLabel->Text = "0";
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FirstNumber = Convert::ToInt32(DisplayLabel->Text);
			 DisplayLabel->Text = "";
			 Operation = '/';
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 FirstNumber = Convert::ToInt32(DisplayLabel->Text);
			 DisplayLabel->Text = "";
			 Operation = 'x';
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 FirstNumber = Convert::ToInt32(DisplayLabel->Text);
			 DisplayLabel->Text = "";
			 Operation = '+';
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 FirstNumber = Convert::ToInt32(DisplayLabel->Text);
			 DisplayLabel->Text = "";
			 Operation = '-';
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

			 SecondNumber = Convert::ToInt32(DisplayLabel->Text);

			 switch (Operation)
			 {
			 case '+':
				 Result = FirstNumber + SecondNumber;
				 DisplayLabel->Text = System::Convert::ToString(Result);
				 break;
			 case '-':
				 Result = FirstNumber - SecondNumber;
				 DisplayLabel->Text = System::Convert::ToString(Result);
				 break;
			 case 'x':
				 Result = FirstNumber * SecondNumber;
				 DisplayLabel->Text = System::Convert::ToString(Result);
				 break;
			 case '/':
				 Result = FirstNumber / SecondNumber;
				 DisplayLabel->Text = System::Convert::ToString(Result);
				 break;
			 }
		 }
};
}

