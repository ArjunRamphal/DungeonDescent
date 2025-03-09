#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Warrior.h"
#include "Ranger.h"
#include "Rogue.h"
#include "Mage.h"
#include "Character.h"
#include "LinkedList.h"
#include "Library.h"
#include "Lore.h"


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
	/// Summary for GameScreen
	/// </summary>
	public ref class GameScreen : public System::Windows::Forms::Form
	{
	public:

	Form^ obj;
	private: System::Windows::Forms::PictureBox^ pbSword;
	private: System::Windows::Forms::PictureBox^ pbThrowing_Knife;
	private: System::Windows::Forms::PictureBox^ pbWand;
	private: System::Windows::Forms::PictureBox^ pbLongbow;
	public:

	public:




	public:


			
		   bool isEnlarged = false;
		   bool pathChoice = true;
		   LinkedList* list = new LinkedList();
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	public:
		RoomBase* temp = new RoomBase();

		GameScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		GameScreen(Form ^obj1)
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
		~GameScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::RichTextBox^ redReader;
	private: System::Windows::Forms::PictureBox^ pbProfile;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnChoice1;
	private: System::Windows::Forms::Button^ btnChoice4;


	private: System::Windows::Forms::Button^ btnChoice3;

	private: System::Windows::Forms::Button^ btnChoice2;
	private: System::Windows::Forms::PictureBox^ pbBackground;

	private: System::Windows::Forms::ListBox^ lbStats;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameScreen::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->redReader = (gcnew System::Windows::Forms::RichTextBox());
			this->pbProfile = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnChoice4 = (gcnew System::Windows::Forms::Button());
			this->btnChoice3 = (gcnew System::Windows::Forms::Button());
			this->btnChoice2 = (gcnew System::Windows::Forms::Button());
			this->btnChoice1 = (gcnew System::Windows::Forms::Button());
			this->pbBackground = (gcnew System::Windows::Forms::PictureBox());
			this->lbStats = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pbSword = (gcnew System::Windows::Forms::PictureBox());
			this->pbThrowing_Knife = (gcnew System::Windows::Forms::PictureBox());
			this->pbWand = (gcnew System::Windows::Forms::PictureBox());
			this->pbLongbow = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbProfile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackground))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThrowing_Knife))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWand))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLongbow))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(165, 2);
			this->progressBar1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(793, 42);
			this->progressBar1->TabIndex = 0;
			// 
			// redReader
			// 
			this->redReader->BackColor = System::Drawing::Color::LightYellow;
			this->redReader->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->redReader->Location = System::Drawing::Point(158, 530);
			this->redReader->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->redReader->Name = L"redReader";
			this->redReader->ReadOnly = true;
			this->redReader->Size = System::Drawing::Size(976, 226);
			this->redReader->TabIndex = 1;
			this->redReader->Text = L"";
			this->redReader->TextChanged += gcnew System::EventHandler(this, &GameScreen::redReader_TextChanged);
			// 
			// pbProfile
			// 
			this->pbProfile->Location = System::Drawing::Point(-1, 2);
			this->pbProfile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbProfile->Name = L"pbProfile";
			this->pbProfile->Size = System::Drawing::Size(161, 139);
			this->pbProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbProfile->TabIndex = 2;
			this->pbProfile->TabStop = false;
			this->pbProfile->Click += gcnew System::EventHandler(this, &GameScreen::pbProfile_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(-4, 530);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(157, 130);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnChoice4);
			this->groupBox1->Controls->Add(this->btnChoice3);
			this->groupBox1->Controls->Add(this->btnChoice2);
			this->groupBox1->Controls->Add(this->btnChoice1);
			this->groupBox1->Location = System::Drawing::Point(162, 451);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(975, 74);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &GameScreen::groupBox1_Enter);
			// 
			// btnChoice4
			// 
			this->btnChoice4->Location = System::Drawing::Point(590, 10);
			this->btnChoice4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChoice4->Name = L"btnChoice4";
			this->btnChoice4->Size = System::Drawing::Size(130, 59);
			this->btnChoice4->TabIndex = 3;
			this->btnChoice4->Text = L"Choice 4";
			this->btnChoice4->UseVisualStyleBackColor = true;
			this->btnChoice4->Visible = false;
			// 
			// btnChoice3
			// 
			this->btnChoice3->Location = System::Drawing::Point(390, 10);
			this->btnChoice3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChoice3->Name = L"btnChoice3";
			this->btnChoice3->Size = System::Drawing::Size(130, 59);
			this->btnChoice3->TabIndex = 2;
			this->btnChoice3->Text = L"Choice 3";
			this->btnChoice3->UseVisualStyleBackColor = true;
			this->btnChoice3->Visible = false;
			// 
			// btnChoice2
			// 
			this->btnChoice2->Location = System::Drawing::Point(195, 10);
			this->btnChoice2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChoice2->Name = L"btnChoice2";
			this->btnChoice2->Size = System::Drawing::Size(130, 59);
			this->btnChoice2->TabIndex = 1;
			this->btnChoice2->Text = L"Choice 2";
			this->btnChoice2->UseVisualStyleBackColor = true;
			this->btnChoice2->Visible = false;
			this->btnChoice2->Click += gcnew System::EventHandler(this, &GameScreen::btnChoice2_Click);
			// 
			// btnChoice1
			// 
			this->btnChoice1->Location = System::Drawing::Point(0, 10);
			this->btnChoice1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChoice1->Name = L"btnChoice1";
			this->btnChoice1->Size = System::Drawing::Size(130, 59);
			this->btnChoice1->TabIndex = 0;
			this->btnChoice1->Text = L"Choice 1";
			this->btnChoice1->UseVisualStyleBackColor = true;
			this->btnChoice1->Visible = false;
			this->btnChoice1->Click += gcnew System::EventHandler(this, &GameScreen::btnChoice1_Click);
			// 
			// pbBackground
			// 
			this->pbBackground->Location = System::Drawing::Point(-1, 2);
			this->pbBackground->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbBackground->Name = L"pbBackground";
			this->pbBackground->Size = System::Drawing::Size(1134, 523);
			this->pbBackground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbBackground->TabIndex = 5;
			this->pbBackground->TabStop = false;
			// 
			// lbStats
			// 
			this->lbStats->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbStats->FormattingEnabled = true;
			this->lbStats->ItemHeight = 14;
			this->lbStats->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Strength : 0", L"Wisdom : 0", L"Observation : 0",
					L"Agility : 0", L"Accuracy : 0", L"Health : 5"
			});
			this->lbStats->Location = System::Drawing::Point(-1, 399);
			this->lbStats->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lbStats->Name = L"lbStats";
			this->lbStats->Size = System::Drawing::Size(158, 116);
			this->lbStats->TabIndex = 6;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(972, 2);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(161, 139);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &GameScreen::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(-1, 687);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(78, 68);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &GameScreen::pictureBox5_Click);
			// 
			// pbSword
			// 
			this->pbSword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSword.Image")));
			this->pbSword->Location = System::Drawing::Point(27, 169);
			this->pbSword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbSword->Name = L"pbSword";
			this->pbSword->Size = System::Drawing::Size(252, 216);
			this->pbSword->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbSword->TabIndex = 9;
			this->pbSword->TabStop = false;
			this->pbSword->Click += gcnew System::EventHandler(this, &GameScreen::pbSword_Click);
			// 
			// pbThrowing_Knife
			// 
			this->pbThrowing_Knife->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbThrowing_Knife.Image")));
			this->pbThrowing_Knife->Location = System::Drawing::Point(309, 169);
			this->pbThrowing_Knife->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbThrowing_Knife->Name = L"pbThrowing_Knife";
			this->pbThrowing_Knife->Size = System::Drawing::Size(252, 216);
			this->pbThrowing_Knife->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbThrowing_Knife->TabIndex = 10;
			this->pbThrowing_Knife->TabStop = false;
			this->pbThrowing_Knife->Click += gcnew System::EventHandler(this, &GameScreen::pbThrowing_Knife_Click);
			// 
			// pbWand
			// 
			this->pbWand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbWand.Image")));
			this->pbWand->Location = System::Drawing::Point(595, 169);
			this->pbWand->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbWand->Name = L"pbWand";
			this->pbWand->Size = System::Drawing::Size(252, 216);
			this->pbWand->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbWand->TabIndex = 11;
			this->pbWand->TabStop = false;
			this->pbWand->Click += gcnew System::EventHandler(this, &GameScreen::pbWand_Click);
			// 
			// pbLongbow
			// 
			this->pbLongbow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLongbow.Image")));
			this->pbLongbow->Location = System::Drawing::Point(874, 169);
			this->pbLongbow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbLongbow->Name = L"pbLongbow";
			this->pbLongbow->Size = System::Drawing::Size(252, 216);
			this->pbLongbow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLongbow->TabIndex = 12;
			this->pbLongbow->TabStop = false;
			this->pbLongbow->Click += gcnew System::EventHandler(this, &GameScreen::pbLongbow_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::LightYellow;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Engravers MT", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(41, 32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(126, 120);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &GameScreen::richTextBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Location = System::Drawing::Point(394, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(224, 161);
			this->panel1->TabIndex = 14;
			this->panel1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(41, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(126, 29);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(184, -2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 22);
			this->button1->TabIndex = 15;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GameScreen::button1_Click);
			// 
			// GameScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1136, 756);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pbLongbow);
			this->Controls->Add(this->pbWand);
			this->Controls->Add(this->pbThrowing_Knife);
			this->Controls->Add(this->pbSword);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->lbStats);
			this->Controls->Add(this->pbProfile);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pbBackground);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->redReader);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"GameScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Descent";
			this->Shown += gcnew System::EventHandler(this, &GameScreen::GameScreen_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbProfile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackground))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThrowing_Knife))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWand))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLongbow))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GameScreen_Shown(System::Object^ sender, System::EventArgs^ e) {

		redReader->Text = File::ReadAllText("introduction.txt");

	}
private: System::Void btnChoice1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Choice 1
	if (pathChoice) {
		//redReader->Text = File::ReadAllText("left.txt");
		pathChoice = false;
		temp->Biome = 1;
		//pbBackground->Image = Image::FromFile("ice.jpg");
	}
	else {
	}
	
}

private: System::Void btnChoice2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Choice 2
	if (pathChoice) {
		redReader->Text = File::ReadAllText("right.txt");
		pathChoice = false;
		temp->Biome = 2;
		pbBackground->Image = Image::FromFile("jungle.jpg");
	}
	else {
	}

}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	//Expand minimap

	if (!isEnlarged) {
		pictureBox4->Size = System::Drawing::Size(400, 400);
		pictureBox4->Location = System::Drawing::Point(250, 50);
		isEnlarged = true;
	}
	else {
		pictureBox4->Size = System::Drawing::Size(181, 174);
		pictureBox4->Location = System::Drawing::Point(675, 0);
		isEnlarged = false;
	}
	
	
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	obj->Visible = true;
}
private: System::Void pbSword_Click(System::Object^ sender, System::EventArgs^ e) {
    Warrior* character = new Warrior();
	pbProfile->Image = Image::FromFile("Warrior.jpg");
	gameStart(character);
	for (int i = 0; i < 6; i++) {
		lbStats->Items[i] = gcnew String((character->statName[i] + " : " + to_string(character->statValue[i])).c_str());
	}
	richTextBox1->Text = File::ReadAllText("WarriorIntro.txt");
	pictureBox1->Image = Image::FromFile("Warrior_Name_Label.png");
}

private: System::Void pbThrowing_Knife_Click(System::Object^ sender, System::EventArgs^ e) {
    Rogue* character = new Rogue();
	pbProfile->Image = Image::FromFile("Rogue.jpg");
	gameStart(character);
	for (int i = 0; i < 6; i++) {
		lbStats->Items[i] = gcnew String((character->statName[i] + " : " + to_string(character->statValue[i])).c_str());
	}
	richTextBox1->Text = File::ReadAllText("RogueIntro.txt");
	pictureBox1->Image = Image::FromFile("Rogue_Name_Label.png");
}

private: System::Void pbWand_Click(System::Object^ sender, System::EventArgs^ e) {
    Mage* character = new Mage();
	pbProfile->Image = Image::FromFile("Mage.jpeg");
	gameStart(character);
	for (int i = 0; i < 6; i++) {
		lbStats->Items[i] = gcnew String((character->statName[i] + " : " + to_string(character->statValue[i])).c_str());
	}
	richTextBox1->Text = File::ReadAllText("MageIntro.txt");
	pictureBox1->Image = Image::FromFile("Mage_Name_Label.png");
}

private: System::Void pbLongbow_Click(System::Object^ sender, System::EventArgs^ e) {
    Ranger* character = new Ranger();
	pbProfile->Image = Image::FromFile("Ranger.jpeg");
	gameStart(character);
	for (int i = 0; i < 6; i++) {
		lbStats->Items[i] = gcnew String((character->statName[i] + " : " + to_string(character->statValue[i])).c_str());
	}
	richTextBox1->Text = File::ReadAllText("RangerIntro.txt");
	pictureBox1->Image = Image::FromFile("Ranger_Name_Label.png");
}

	   private: void gameStart(Character* character)
	   {
		   pbSword->Hide();
		   pbThrowing_Knife->Hide();
		   pbWand->Hide();
		   pbLongbow->Hide();
		   
		   
		   
		   pbBackground->Image = Image::FromFile("twodoor.jpg");
		   redReader->Text = File::ReadAllText("entrance.txt");
		   btnChoice1->Visible = true;
		   btnChoice2->Visible = true;
		   btnChoice1->Text = "Go left";
		   btnChoice2->Text = "Go right";
		   
		   temp->Biome = 0;
		   mapCreate(temp->Biome);
	   }

		private: void mapCreate(int biome) 
		{
			string rooms[3] = { "library", "battle", "chest" };

			// Seed the random number generator
			srand(time(0));

			// Generate a random number between 1 and 3
			int randomNum = rand() % 3 + 1;


			switch (biome) {
			case 1:
				//Ice
				
				switch(randomNum) {
				case 1:
					RoomBase * room = new Library();
					Node * node = new Node(room);
					list->insertAtEnd(*&room);
					redReader->Text = File::ReadAllText("library.txt");
				}
			}
		}

private: System::Void pbProfile_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!isEnlarged) {

		pictureBox1->Size = System::Drawing::Size(400, 110);
		richTextBox1->Size = System::Drawing::Size(480, 300);
		pictureBox1->Location = System::Drawing::Point(38, -10);
		richTextBox1->Location = System::Drawing::Point(5, 100);
		panel1->Size = System::Drawing::Size(490, 400);
		panel1->Location = System::Drawing::Point(200, 30);
		button1->Location = System::Drawing::Point(460, 0);
		isEnlarged = true;
		panel1->Visible = true;
	}
	else {

		isEnlarged = false;
		panel1->Visible = false;

	}
	


}
private: System::Void redReader_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	isEnlarged = false;
	panel1->Visible = false;
}
};
}
