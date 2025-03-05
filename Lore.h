#pragma once
#include <iostream>
#include <fstream>
#include <string>
//#include "StartScreen.h"

namespace DungeonDescent {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Lore
	/// </summary>
	public ref class Lore : public System::Windows::Forms::Form
	{
	public:

		Form^ obj;

		Lore(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Lore(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Lore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pbWarrior;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::RichTextBox^ redLore;
	private: System::Windows::Forms::PictureBox^ pbBack;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lore::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbWarrior = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->redLore = (gcnew System::Windows::Forms::RichTextBox());
			this->pbBack = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWarrior))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gold;
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pbWarrior);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(166, 720);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Lore::groupBox1_Enter);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(6, 547);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(154, 148);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Lore::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 192);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(154, 148);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Lore::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 376);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(154, 148);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Lore::pictureBox2_Click);
			// 
			// pbWarrior
			// 
			this->pbWarrior->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbWarrior.Image")));
			this->pbWarrior->Location = System::Drawing::Point(6, 20);
			this->pbWarrior->Name = L"pbWarrior";
			this->pbWarrior->Size = System::Drawing::Size(154, 148);
			this->pbWarrior->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbWarrior->TabIndex = 0;
			this->pbWarrior->TabStop = false;
			this->pbWarrior->Click += gcnew System::EventHandler(this, &Lore::pictureBox1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(243, 32);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(621, 119);
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// redLore
			// 
			this->redLore->BackColor = System::Drawing::Color::LightYellow;
			this->redLore->Font = (gcnew System::Drawing::Font(L"Engravers MT", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->redLore->Location = System::Drawing::Point(184, 181);
			this->redLore->Name = L"redLore";
			this->redLore->Size = System::Drawing::Size(782, 551);
			this->redLore->TabIndex = 2;
			this->redLore->Text = L"";
			// 
			// pbBack
			// 
			this->pbBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBack.Image")));
			this->pbBack->Location = System::Drawing::Point(883, 32);
			this->pbBack->Name = L"pbBack";
			this->pbBack->Size = System::Drawing::Size(83, 78);
			this->pbBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbBack->TabIndex = 3;
			this->pbBack->TabStop = false;
			this->pbBack->Click += gcnew System::EventHandler(this, &Lore::pictureBox6_Click);
			// 
			// Lore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(978, 744);
			this->Controls->Add(this->pbBack);
			this->Controls->Add(this->redLore);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Lore";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lore";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWarrior))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	//StartScreen^ startscreen = gcnew StartScreen;
	//startscreen->Show();
	//this->Hide();

	this->Visible = false;
	obj->Visible = true;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	redLore->Text = File::ReadAllText("WarriorIntro.txt");
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	redLore->Text = File::ReadAllText("RangerIntro.txt");
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	redLore->Text = File::ReadAllText("MageIntro.txt");
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	redLore->Text = File::ReadAllText("RogueIntro.txt");
}
};
}
