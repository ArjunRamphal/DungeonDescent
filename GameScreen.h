#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <list>
#include "Warrior.h"
#include "Ranger.h"
#include "Rogue.h"
#include "Mage.h"
#include "Character.h"
#include "Library.h"
#include "Battle.h"
#include "Lore.h"
#include "Chest.h"
#include "Shop.h"
#include "Respite.h"
#include "Boss.h"
#include "RoomBase.h"
#include "Riddles.h"

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
		Character* character;
		Riddles* riddles;
		bool isEnlarged = false;
		bool pathChoice = true;
		bool completed = false;
		bool LibState = false;
		bool roomState = false;
		bool biomeSelect = true;
		bool riddleState = false;
		RoomBase* temp = new RoomBase();
		RoomBase* room;
		//RoomBase* currRoom;
		int globalCorrect = 1;
		bool ContState;
		int biome;
		int floor = 0;
		int roomCounter = 0;
		int num = 3;
		int randomNum1;
		int randomNum2;
		int randomNum3;
		int i = 0;
		int randomAnswer1;
		int randomAnswer2;
		int randomAnswer3;
	private: System::Windows::Forms::Button^ btnContinue;
	private: System::Windows::Forms::Button^ btnRight;
	private: System::Windows::Forms::Button^ btnAnswer3;
	private: System::Windows::Forms::Button^ btnAnswer2;
	private: System::Windows::Forms::Button^ btnAnswer1;
	private: System::Windows::Forms::ProgressBar^ progRiddle;
	public: System::Windows::Forms::Timer^ tmrRiddle;
	private:



	private: System::Windows::Forms::Button^ btnLeft;
	private: int strikesRemaining = 0;
	private: bool isBoss = false;  
	private: Battle* currentBattle;
	private: Character* player = nullptr;
	private: test* enemy = nullptr;
	public:



		GameScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		GameScreen(Form^ obj1)
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

	private: System::Windows::Forms::RichTextBox^ redReader;
	private: System::Windows::Forms::PictureBox^ pbProfile;
	private: System::Windows::Forms::PictureBox^ pbAbility;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnChoice1;
	private: System::Windows::Forms::Button^ btnChoice4;
	private: System::Windows::Forms::Button^ btnAttack;



	private: System::Windows::Forms::Button^ btnChoice3;

	private: System::Windows::Forms::Button^ btnChoice2;
	private: System::Windows::Forms::PictureBox^ pbBackground;

	private: System::Windows::Forms::ListBox^ lbStats;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameScreen::typeid));
			this->redReader = (gcnew System::Windows::Forms::RichTextBox());
			this->pbProfile = (gcnew System::Windows::Forms::PictureBox());
			this->pbAbility = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAnswer3 = (gcnew System::Windows::Forms::Button());
			this->btnAnswer2 = (gcnew System::Windows::Forms::Button());
			this->btnAnswer1 = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
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
			this->progRiddle = (gcnew System::Windows::Forms::ProgressBar());
			this->tmrRiddle = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbProfile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAbility))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackground))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThrowing_Knife))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWand))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLongbow))->BeginInit();
			this->SuspendLayout();
			// 
			// redReader
			// 
			this->redReader->BackColor = System::Drawing::Color::LightYellow;
			this->redReader->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->redReader->Location = System::Drawing::Point(178, 662);
			this->redReader->Name = L"redReader";
			this->redReader->ReadOnly = true;
			this->redReader->Size = System::Drawing::Size(1098, 282);
			this->redReader->TabIndex = 1;
			this->redReader->Text = L"";
			// 
			// pbProfile
			// 
			this->pbProfile->Location = System::Drawing::Point(0, 0);
			this->pbProfile->Name = L"pbProfile";
			this->pbProfile->Size = System::Drawing::Size(182, 174);
			this->pbProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbProfile->TabIndex = 2;
			this->pbProfile->TabStop = false;
			this->pbProfile->Click += gcnew System::EventHandler(this, &GameScreen::pbProfile_Click);
			// 
			// pbAbility
			// 
			this->pbAbility->Location = System::Drawing::Point(3, 488);
			this->pbAbility->Name = L"pbAbility";
			this->pbAbility->Size = System::Drawing::Size(177, 163);
			this->pbAbility->TabIndex = 3;
			this->pbAbility->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->btnAnswer3);
			this->groupBox1->Controls->Add(this->btnAnswer2);
			this->groupBox1->Controls->Add(this->btnAnswer1);
			this->groupBox1->Controls->Add(this->btnRight);
			this->groupBox1->Controls->Add(this->btnLeft);
			this->groupBox1->Controls->Add(this->btnContinue);
			this->groupBox1->Controls->Add(this->btnChoice4);
			this->groupBox1->Controls->Add(this->btnChoice3);
			this->groupBox1->Controls->Add(this->btnChoice2);
			this->groupBox1->Controls->Add(this->btnChoice1);
			this->groupBox1->Location = System::Drawing::Point(182, 565);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1096, 92);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &GameScreen::groupBox1_Enter);
			// 
			// btnAnswer3
			// 
			this->btnAnswer3->Location = System::Drawing::Point(440, 12);
			this->btnAnswer3->Name = L"btnAnswer3";
			this->btnAnswer3->Size = System::Drawing::Size(146, 74);
			this->btnAnswer3->TabIndex = 9;
			this->btnAnswer3->Text = L"button3";
			this->btnAnswer3->UseVisualStyleBackColor = true;
			this->btnAnswer3->Visible = false;
			this->btnAnswer3->Click += gcnew System::EventHandler(this, &GameScreen::btnAnswer3_Click);
			// 
			// btnAnswer2
			// 
			this->btnAnswer2->Location = System::Drawing::Point(219, 12);
			this->btnAnswer2->Name = L"btnAnswer2";
			this->btnAnswer2->Size = System::Drawing::Size(146, 74);
			this->btnAnswer2->TabIndex = 8;
			this->btnAnswer2->Text = L"button2";
			this->btnAnswer2->UseVisualStyleBackColor = true;
			this->btnAnswer2->Visible = false;
			this->btnAnswer2->Click += gcnew System::EventHandler(this, &GameScreen::btnAnswer2_Click);
			// 
			// btnAnswer1
			// 
			this->btnAnswer1->Location = System::Drawing::Point(7, 12);
			this->btnAnswer1->Name = L"btnAnswer1";
			this->btnAnswer1->Size = System::Drawing::Size(143, 74);
			this->btnAnswer1->TabIndex = 7;
			this->btnAnswer1->Text = L"button1";
			this->btnAnswer1->UseVisualStyleBackColor = true;
			this->btnAnswer1->Visible = false;
			this->btnAnswer1->Click += gcnew System::EventHandler(this, &GameScreen::btnAnswer1_Click);
			// 
			// btnRight
			// 
			this->btnRight->Location = System::Drawing::Point(219, 12);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(146, 74);
			this->btnRight->TabIndex = 6;
			this->btnRight->Text = L"Go right";
			this->btnRight->UseVisualStyleBackColor = true;
			this->btnRight->Visible = false;
			this->btnRight->Click += gcnew System::EventHandler(this, &GameScreen::btnRight_Click);
			// 
			// btnLeft
			// 
			this->btnLeft->Location = System::Drawing::Point(6, 12);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(144, 74);
			this->btnLeft->TabIndex = 5;
			this->btnLeft->Text = L"Go left";
			this->btnLeft->UseVisualStyleBackColor = true;
			this->btnLeft->Visible = false;
			this->btnLeft->Click += gcnew System::EventHandler(this, &GameScreen::btnLeft_Click);
			// 
			// btnContinue
			// 
			this->btnContinue->Location = System::Drawing::Point(938, 12);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(146, 74);
			this->btnContinue->TabIndex = 4;
			this->btnContinue->Text = L"Continue";
			this->btnContinue->UseVisualStyleBackColor = true;
			this->btnContinue->Visible = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &GameScreen::btnContinue_Click);
			// 
			// btnChoice4
			// 
			this->btnChoice4->Location = System::Drawing::Point(664, 12);
			this->btnChoice4->Name = L"btnChoice4";
			this->btnChoice4->Size = System::Drawing::Size(146, 74);
			this->btnChoice4->TabIndex = 3;
			this->btnChoice4->Text = L"Choice 4";
			this->btnChoice4->UseVisualStyleBackColor = true;
			this->btnChoice4->Visible = false;
			this->btnChoice4->Click += gcnew System::EventHandler(this, &GameScreen::btnChoice4_Click);
			// 
			// btnChoice3
			// 
			this->btnChoice3->Location = System::Drawing::Point(440, 12);
			this->btnChoice3->Name = L"btnChoice3";
			this->btnChoice3->Size = System::Drawing::Size(146, 74);
			this->btnChoice3->TabIndex = 2;
			this->btnChoice3->Text = L"Choice 3";
			this->btnChoice3->UseVisualStyleBackColor = true;
			this->btnChoice3->Visible = false;
			this->btnChoice3->Click += gcnew System::EventHandler(this, &GameScreen::btnChoice3_Click);
			// 
			// btnChoice2
			// 
			this->btnChoice2->Location = System::Drawing::Point(219, 12);
			this->btnChoice2->Name = L"btnChoice2";
			this->btnChoice2->Size = System::Drawing::Size(146, 74);
			this->btnChoice2->TabIndex = 1;
			this->btnChoice2->Text = L"Choice 2";
			this->btnChoice2->UseVisualStyleBackColor = true;
			this->btnChoice2->Visible = false;
			this->btnChoice2->Click += gcnew System::EventHandler(this, &GameScreen::btnChoice2_Click);
			// 
			// btnChoice1
			// 
			this->btnChoice1->Location = System::Drawing::Point(6, 12);
			this->btnChoice1->Name = L"btnChoice1";
			this->btnChoice1->Size = System::Drawing::Size(146, 74);
			this->btnChoice1->TabIndex = 0;
			this->btnChoice1->Text = L"Choice 1";
			this->btnChoice1->UseVisualStyleBackColor = true;
			this->btnChoice1->Visible = false;
			this->btnChoice1->Click += gcnew System::EventHandler(this, &GameScreen::btnChoice1_Click);
			// btnAttack
			btnAttack = gcnew System::Windows::Forms::Button();
			btnAttack->Text = "Attack";
			btnAttack->Location = System::Drawing::Point(100, 200); // Adjust location as needed
			btnAttack->Size = System::Drawing::Size(100, 50); // Adjust size as needed
			btnAttack->Visible = false; // Initially set to invisible
			btnAttack->Click += gcnew System::EventHandler(this, &GameScreen::btnAttack_Click);
			this->Controls->Add(btnAttack);

			// 
			// pbBackground
			// 
			this->pbBackground->Location = System::Drawing::Point(0, 0);
			this->pbBackground->Name = L"pbBackground";
			this->pbBackground->Size = System::Drawing::Size(1276, 654);
			this->pbBackground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbBackground->TabIndex = 5;
			this->pbBackground->TabStop = false;
			// 
			// lbStats
			// 
			this->lbStats->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbStats->FormattingEnabled = true;
			this->lbStats->ItemHeight = 17;
			this->lbStats->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Strength : 0", L"Wisdom : 0", L"Observation : 0",
					L"Agility : 0", L"Accuracy : 0", L"Health : 5"
			});
			this->lbStats->Location = System::Drawing::Point(0, 662);
			this->lbStats->Name = L"lbStats";
			this->lbStats->Size = System::Drawing::Size(176, 140);
			this->lbStats->TabIndex = 6;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1096, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(182, 174);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &GameScreen::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(-2, 858);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(88, 85);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &GameScreen::pictureBox5_Click);
			// 
			// pbSword
			// 
			this->pbSword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSword.Image")));
			this->pbSword->Location = System::Drawing::Point(30, 211);
			this->pbSword->Name = L"pbSword";
			this->pbSword->Size = System::Drawing::Size(284, 271);
			this->pbSword->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbSword->TabIndex = 9;
			this->pbSword->TabStop = false;
			this->pbSword->Click += gcnew System::EventHandler(this, &GameScreen::pbSword_Click);
			// 
			// pbThrowing_Knife
			// 
			this->pbThrowing_Knife->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbThrowing_Knife.Image")));
			this->pbThrowing_Knife->Location = System::Drawing::Point(348, 211);
			this->pbThrowing_Knife->Name = L"pbThrowing_Knife";
			this->pbThrowing_Knife->Size = System::Drawing::Size(284, 271);
			this->pbThrowing_Knife->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbThrowing_Knife->TabIndex = 10;
			this->pbThrowing_Knife->TabStop = false;
			this->pbThrowing_Knife->Click += gcnew System::EventHandler(this, &GameScreen::pbThrowing_Knife_Click);
			// 
			// pbWand
			// 
			this->pbWand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbWand.Image")));
			this->pbWand->Location = System::Drawing::Point(669, 211);
			this->pbWand->Name = L"pbWand";
			this->pbWand->Size = System::Drawing::Size(284, 271);
			this->pbWand->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbWand->TabIndex = 11;
			this->pbWand->TabStop = false;
			this->pbWand->Click += gcnew System::EventHandler(this, &GameScreen::pbWand_Click);
			// 
			// pbLongbow
			// 
			this->pbLongbow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLongbow.Image")));
			this->pbLongbow->Location = System::Drawing::Point(982, 211);
			this->pbLongbow->Name = L"pbLongbow";
			this->pbLongbow->Size = System::Drawing::Size(284, 271);
			this->pbLongbow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLongbow->TabIndex = 12;
			this->pbLongbow->TabStop = false;
			this->pbLongbow->Click += gcnew System::EventHandler(this, &GameScreen::pbLongbow_Click);
			// 
			// progRiddle
			// 
			this->progRiddle->BackColor = System::Drawing::Color::Black;
			this->progRiddle->Location = System::Drawing::Point(182, 0);
			this->progRiddle->Maximum = 20;
			this->progRiddle->Name = L"progRiddle";
			this->progRiddle->Size = System::Drawing::Size(914, 53);
			this->progRiddle->TabIndex = 13;
			// 
			// tmrRiddle
			// 
			this->tmrRiddle->Interval = 1000;
			this->tmrRiddle->Tick += gcnew System::EventHandler(this, &GameScreen::tmrRiddle_Tick);
			// 
			// GameScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1278, 945);
			this->Controls->Add(this->progRiddle);
			this->Controls->Add(this->pbLongbow);
			this->Controls->Add(this->pbWand);
			this->Controls->Add(this->pbThrowing_Knife);
			this->Controls->Add(this->pbSword);
			this->Controls->Add(this->pbAbility);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->lbStats);
			this->Controls->Add(this->pbProfile);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pbBackground);
			this->Controls->Add(this->redReader);
			this->Name = L"GameScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Descent";
			this->Shown += gcnew System::EventHandler(this, &GameScreen::GameScreen_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbProfile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAbility))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackground))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThrowing_Knife))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWand))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLongbow))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GameScreen_Shown(System::Object^ sender, System::EventArgs^ e) {

		redReader->Text = File::ReadAllText("introduction.txt");
		riddles = new Riddles();

	}
	private: System::Void btnChoice1_Click(System::Object^ sender, System::EventArgs^ e) {

		//if (!completed)
			//roomCreate(1);

		//Choice 1

		//redReader->Text = gcnew String(to_string(roomCounter).c_str());

		if (roomCounter == 2 || roomCounter == 3 || roomCounter == 4) {
			if (room->type == "Library") {
				character->incStats(0, 1);
				for (int i = 0; i < 6; i++) {
					lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
				}
			}
			else if (room->type == "Battle") {

			}
			else if (room->type == "Chest") {

			}
		}

		if (roomCounter == 5) {
			redReader->Text = File::ReadAllText("iceprisonfree.txt");
		}

		if (roomState) {
			roomState = false;
			btnChoiceInvisible();
			btnContinue->Visible = true;
		}

		if (pathChoice == true) {
			//redReader->Text = File::ReadAllText("left.txt");
			pathChoice = false;
			ContState = false;
			//roomCreate();

			//ContState = true;
			/*redReader->Clear();
			redReader->Text = File::ReadAllText("riddleice.txt");

			std::srand(std::time(0)); // Seed random number generator
			int randomNumber = (std::rand() % 20) + 0; // Range [1, 20]


			std::ifstream file("random_riddles_floor_1.txt");
			if (!file) {
				std::cerr << "Error opening file!\n";
			}

			std::string line;
			int lineNumber = 0;

			while (std::getline(file, line)) {
				lineNumber++;
				if (lineNumber == (randomNumber * 4) + 1) {
					redReader->Text = gcnew String(line.c_str());
					redReader->Text = File::ReadAllText("riddleice.txt") + "\n" + gcnew String(line.c_str());
					lineNumber++;
					std::getline(file, line);
					btnChoice1->Text = gcnew String(line.c_str());
					lineNumber++;
					std::getline(file, line);
					btnChoice2->Text = gcnew String(line.c_str());
					lineNumber++;
					std::getline(file, line);
					btnChoice3->Visible = true;
					btnChoice3->Text = gcnew String(line.c_str());
				}
			}*/

		}
		else { //split pathchoice

			if (ContState == false) {
				/*int SelfIndex = 1;
				ContState = true;
				btnChoice2->Visible = false;
				btnChoice3->Visible = false;




					//pathChoice = true;

					if (SelfIndex == globalCorrect) {
						redReader->Text = "Correct! You may now proceed to the next room. Press any button to proceed";
						btnChoice1->Text = gcnew String("Continue...");
						//Stat Increases


					}
					else {
						redReader->Text = "Incorrect! Penalty! Press any button to proceed";
						btnChoice1->Text = gcnew String("Continue...");
						//stat decreases
					}*/

				if (LibState == true) {
					//effects
					ContState = true;
					btnChoice1->Text = "Continue";
					btnChoice2->Text = "Continue";
					btnChoice3->Text = "Continue";
					btnChoice4->Visible = false;
				}




			}
			else {
				/*currRoom = queue->dequeue();
				redReader->Clear();
				ContState = false;
				btnChoice2->Visible = true;
				btnChoice3->Visible = true;
				std::srand(std::time(0)); // Seed random number generator
				int randomNumber = (std::rand() % 20) + 0; // Range [1, 20]


				std::ifstream file("random_riddles_floor_1.txt");
				if (!file) {
					std::cerr << "Error opening file!\n";
				}

				std::string line;
				int lineNumber = 0;

				while (std::getline(file, line)) {
					lineNumber++;

					if (lineNumber == (randomNumber * 4) + 1) {
						redReader->Text = gcnew String(line.c_str());

						if (Biome == 0) {
							redReader->Text = File::ReadAllText("riddleice.txt") + "\n" + gcnew String(line.c_str());
						}
						else {
							redReader->Text = File::ReadAllText("riddlejungle.txt") + "\n" + gcnew String(line.c_str());
						}

						lineNumber++;
						std::getline(file, line);
						btnChoice1->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice2->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice3->Visible = true;
						btnChoice3->Text = gcnew String(line.c_str());

					}
				}*/




			}


		}


	}

	private: System::Void btnChoice2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Choice 2


		if (roomCounter == 2 || roomCounter == 3 || roomCounter == 4) {
			if (room->type == "Library") {
				character->incStats(3, 1);
				for (int i = 0; i < 6; i++) {
					lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
				}
			}
			else if (room->type == "Battle") {

			}
			else if (room->type == "Chest") {

			}
		}

		if (roomCounter == 5) {
			//redReader->Text = File::ReadAllText("iceprisonkill.txt");
		}

		if (roomState) {
			roomState = false;
			btnChoiceInvisible();
			btnContinue->Visible = true;
		}

		if (pathChoice == true) {
			//redReader->Text = File::ReadAllText("left.txt");
			pathChoice = false;
			ContState = true;

			/*redReader->Clear();
			redReader->Text = File::ReadAllText("riddleice.txt");

			std::srand(std::time(0)); // Seed random number generator
			int randomNumber = (std::rand() % 20) + 0; // Range [1, 20]


			std::ifstream file("random_riddles_floor_1.txt");
			if (!file) {
				std::cerr << "Error opening file!\n";
			}

			std::string line;
			int lineNumber = 0;

			while (std::getline(file, line)) {
				lineNumber++;
				if (lineNumber == (randomNumber * 4) + 1) {
					redReader->Text = gcnew String(line.c_str());
					redReader->Text = File::ReadAllText("riddleice.txt") + "\n" + gcnew String(line.c_str());
					lineNumber++;
					std::getline(file, line);
					btnChoice1->Text = gcnew String(line.c_str());
					lineNumber++;
					std::getline(file, line);
					btnChoice2->Text = gcnew String(line.c_str());
					lineNumber++;
					std::getline(file, line);
					btnChoice3->Visible = true;
					btnChoice3->Text = gcnew String(line.c_str());
				}
			}*/

		}
		else { //split pathchoice

			/*if (ContState == false) {
				int SelfIndex = 2;
				ContState = true;



					btnChoice2->Visible = false;
					btnChoice3->Visible = false;
					//pathChoice = true;

					if (SelfIndex == globalCorrect) {
						redReader->Text = "Correct! You may now proceed to the next room. Press any button to proceed";
						btnChoice1->Text = gcnew String("Continue...");
						//Stat Increases


					}
					else {
						redReader->Text = "Incorrect! Penalty! Press any button to proceed";
						btnChoice1->Text = gcnew String("Continue...");
						//stat decreases
					}




			}
			else {
				redReader->Clear();
				ContState = false;
				srand(time(0)); // Seed random number generator
				int randomNumber = (rand() % 20) + 0; // Range [1, 20]


				std::ifstream file("random_riddles_floor_1.txt");
				if (!file) {
					std::cerr << "Error opening file!\n";
				}

				std::string line;
				int lineNumber = 0;

				while (std::getline(file, line)) {
					lineNumber++;

					if (lineNumber == (randomNumber * 4) + 1) {
						redReader->Text = gcnew String(line.c_str());

						if (biome == 0) {
							redReader->Text = File::ReadAllText("icechest.txt") + "\n" + gcnew String(line.c_str());
						}
						else {
							redReader->Text = File::ReadAllText("junglechest.txt") + "\n" + gcnew String(line.c_str());
						}

						lineNumber++;
						std::getline(file, line);
						btnChoice1->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice2->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice3->Visible = true;
						btnChoice3->Text = gcnew String(line.c_str());

					}
				}
			}*/


		}

	}

	private: System::Void btnChoice3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (roomCounter == 2 || roomCounter == 3 || roomCounter == 4) {
			if (room->type == "Library") {
				character->incStats(1, 1);
				for (int i = 0; i < 6; i++) {
					lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
				}
			}
			else if (room->type == "Battle") {

			}
			else if (room->type == "Chest") {

			}
		}

		if (roomState) {
			roomState = false;
			btnChoiceInvisible();
			btnContinue->Visible = true;
		}

	}

	private: System::Void btnChoice4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (roomCounter == 2 || roomCounter == 3 || roomCounter == 4) {
			if (room->type == "Library") {
				character->incStats(2, 1);
				for (int i = 0; i < 6; i++) {
					lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
				}
			}
			else if (room->type == "Battle") {

			}
			else if (room->type == "Chest") {

			}
		}

		if (roomState) {
			roomState = false;
			btnChoiceInvisible();
			btnContinue->Visible = true;
		}

	}

	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Expand and shrink minimap
		if (!isEnlarged) {
			pictureBox4->Size = System::Drawing::Size(400, 400);
			pictureBox4->Location = System::Drawing::Point(250, 50);
			isEnlarged = true;
		}
		else {
			pictureBox4->Size = System::Drawing::Size(121, 113);
			pictureBox4->Location = System::Drawing::Point(735, 0);
			isEnlarged = false;
		}
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to exit? All progress will be lost.",
			"Exit",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning,
			MessageBoxDefaultButton::Button2
		);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Visible = false;
			obj->Visible = true;
		}
	}
	private: System::Void pbSword_Click(System::Object^ sender, System::EventArgs^ e) {
		Warrior* warrior = new Warrior();
		character = warrior;
		pbProfile->Image = Image::FromFile(gcnew String(character->getpfpImageName().c_str()));

		pbSword->Hide();
		pbThrowing_Knife->Hide();
		pbWand->Hide();
		pbLongbow->Hide();

		roomCreate();

		pbBackground->Image = Image::FromFile("twodoor.jpg");
		redReader->Text = File::ReadAllText("entrance.txt");

		for (int i = 0; i < 6; i++) {
			lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
		}
	}

	private: System::Void pbThrowing_Knife_Click(System::Object^ sender, System::EventArgs^ e) {
		Rogue* rogue = new Rogue();
		character = rogue;
		pbProfile->Image = Image::FromFile(gcnew String(character->getpfpImageName().c_str()));

		pbSword->Hide();
		pbThrowing_Knife->Hide();
		pbWand->Hide();
		pbLongbow->Hide();

		roomCreate();

		pbBackground->Image = Image::FromFile("twodoor.jpg");
		redReader->Text = File::ReadAllText("entrance.txt");

		for (int i = 0; i < 6; i++) {
			lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
		}
	}

	private: System::Void pbWand_Click(System::Object^ sender, System::EventArgs^ e) {
		Mage* mage = new Mage();
		character = mage;
		pbProfile->Image = Image::FromFile(gcnew String(character->getpfpImageName().c_str()));

		pbSword->Hide();
		pbThrowing_Knife->Hide();
		pbWand->Hide();
		pbLongbow->Hide();

		roomCreate();

		pbBackground->Image = Image::FromFile("twodoor.jpg");
		redReader->Text = File::ReadAllText("entrance.txt");

		for (int i = 0; i < 6; i++) {
			lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
		}
	}

	private: System::Void pbLongbow_Click(System::Object^ sender, System::EventArgs^ e) {
		Ranger* ranger = new Ranger();
		character = ranger;
		pbProfile->Image = Image::FromFile(gcnew String(character->getpfpImageName().c_str()));

		pbSword->Hide();
		pbThrowing_Knife->Hide();
		pbWand->Hide();
		pbLongbow->Hide();

		roomCreate();

		pbBackground->Image = Image::FromFile("twodoor.jpg");
		redReader->Text = File::ReadAllText("entrance.txt");

		for (int i = 0; i < 6; i++) {
			lbStats->Items[i] = gcnew String((character->getStatName(i) + " : " + to_string(character->getStatValue(i))).c_str());
		}
	}
	private: System::Void pbProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		Lore^ lore = gcnew Lore(this);
		lore->Visible = true;
	}

	private: void gameStart()
	{

		/*btnChoice1->Visible = true;
		btnChoice2->Visible = true;
		btnChoice1->Text = "Go left";
		btnChoice2->Text = "Go right";*/
		//pathChoice = true;
	}

	private: void roomCreate()
	{
		//this function will use the same variable room for all rooms in the game
		//only one room will be generated at a time

		//have a global counter varibale to store what room the player is in.
		//eg. int i = 0..30;

		//have a case statement for the counter i, to see which room the player is in. If the player is in a room that
		//needs to be randomly generated, then generate it.
		//if the player is in a definite room, then just generate that room

		//there will be a boolen completed to check whether the player has completed the room or not
		//the room will count as completed once the player has answered the riddle

		//each room class will have a questions bank and an answers bank to randomly generate questions
		// and a function to get those questions and answers.
		//once completed = true and player decides to go to next room, the room will be generated

		//to check whether the player has completed a floor, do a mod calculation, eg. 20 % 10 = 0, therefore 
		//you will know that the player is proceeding to the next floor. if i = 30, then the player has completed the game


		completed = false;
		roomState = true;

		vector<string> rooms = { "library", "battle", "chest" };
		//kms

		// Seed the random number generator
		srand(time(0));

		// Generate a random number between 1 and 3
		int randomNum;

		if ((roomCounter % 10) == 1)
		{
			srand(time(0));

			// Generate a random number between 1 and 3
			randomNum1 = (rand() % num) + 1;

			if (randomNum1 == 1) {
				riddleState = true;
				Library* library = new Library();
				room = library;
				readerAndBackground();
				btnChoice1->Visible = true;
				btnChoice1->Enabled = true;
				btnChoice1->Text = "The Art of Warfare";
				btnChoice2->Visible = true;
				btnChoice2->Enabled = true;
				btnChoice2->Text = "The Whispering Winds";
				btnChoice3->Visible = true;
				btnChoice3->Enabled = true;
				btnChoice3->Text = "The Ancient Lore";
				btnChoice4->Visible = true;
				btnChoice4->Enabled = true;
				btnChoice4->Text = "The Heart of the Forest";
				room->type = "Library";
			}
			else if (randomNum1 == 2) {
				Battle* battle = new Battle(isBoss, player);
				room = battle;
				readerAndBackground();
				room->type = "Battle";

				btnChoice1->Visible = true;
				btnChoice1->Enabled = true;
				btnChoice1->Text = "Confront";
				btnChoice2->Visible = true;
				btnChoice2->Enabled = true;
				btnChoice2->Text = "Sneak past";
				btnChoice3->Visible = false;
				btnChoice4->Visible = false;
				pbAbility->Visible = true;
			}
			else if (randomNum1 == 3) {
				riddleState = true;
				Chest* chest = new Chest();
				room = chest;
				readerAndBackground();
				room->type = "Chest";

				std::srand(std::time(0)); // Seed random number generator
				int randomNumber = (std::rand() % 20) + 0; // Range [1, 20]


				std::ifstream file("random_riddles_floor_1.txt");
				if (!file) {
					std::cerr << "Error opening file!\n";
				}

				std::string line;
				int lineNumber = 0;

				while (std::getline(file, line)) {
					lineNumber++;

					if (lineNumber == (randomNumber * 4) + 1) {
						redReader->Text = gcnew String(line.c_str());

						if (biome == 0) {
							redReader->Text = File::ReadAllText("icechest.txt") + "\n" + gcnew String(line.c_str());
						}
						else if (biome == 1) {
							redReader->Text = File::ReadAllText("junglechest.txt") + "\n" + gcnew String(line.c_str());
						}

						lineNumber++;
						std::getline(file, line);
						btnChoice1->Visible = true;
						btnChoice1->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice2->Visible = true;
						btnChoice2->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice3->Visible = true;
						btnChoice3->Text = gcnew String(line.c_str());
						btnChoice4->Visible = false;
					}
				}
			}
		}
		else if ((roomCounter % 10) == 2)
		{
			srand(time(0));

			// Generate a random number between 1 and 3
			randomNum2 = randomNum1;
			while (randomNum2 == randomNum1) {
				randomNum2 = (rand() % num) + 1;
			}

			if (randomNum2 == 1) {
				riddleState = true;
				Library* library = new Library();
				room = library;
				readerAndBackground();
				btnChoice1->Visible = true;
				btnChoice1->Enabled = true;
				btnChoice1->Text = "The Art of Warfare";
				btnChoice2->Visible = true;
				btnChoice2->Enabled = true;
				btnChoice2->Text = "The Whispering Winds";
				btnChoice3->Visible = true;
				btnChoice3->Enabled = true;
				btnChoice3->Text = "The Ancient Lore";
				btnChoice4->Visible = true;
				btnChoice4->Enabled = true;
				btnChoice4->Text = "The Heart of the Forest";
				room->type = "Library";
			}
			else if (randomNum2 == 2) {
				Battle* battle = new Battle(isBoss, player);
				room = battle;
				readerAndBackground();
				room->type = "Battle";

				btnChoice1->Visible = true;
				btnChoice1->Enabled = true;
				btnChoice1->Text = "Confront";
				btnChoice2->Visible = true;
				btnChoice2->Enabled = true;
				btnChoice2->Text = "Sneak past";
				btnChoice3->Visible = false;
				btnChoice4->Visible = false;
				pbAbility->Visible = true;
			}
			else if (randomNum2 == 3) {
				riddleState = true;
				Chest* chest = new Chest();
				room = chest;
				readerAndBackground();
				room->type = "Chest";
				std::srand(std::time(0)); // Seed random number generator
				int randomNumber = (std::rand() % 20) + 0; // Range [1, 20]


				std::ifstream file("random_riddles_floor_1.txt");
				if (!file) {
					std::cerr << "Error opening file!\n";
				}

				std::string line;
				int lineNumber = 0;

				while (std::getline(file, line)) {
					lineNumber++;

					if (lineNumber == (randomNumber * 4) + 1) {
						redReader->Text = gcnew String(line.c_str());

						if (biome == 0) {
							redReader->Text = File::ReadAllText("icechest.txt") + "\n" + gcnew String(line.c_str());
						}
						else if (biome == 1) {
							redReader->Text = File::ReadAllText("junglechest.txt") + "\n" + gcnew String(line.c_str());
						}

						lineNumber++;
						std::getline(file, line);
						btnChoice1->Visible = true;
						btnChoice1->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice2->Visible = true;
						btnChoice2->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice3->Visible = true;
						btnChoice3->Text = gcnew String(line.c_str());
						btnChoice4->Visible = false;
					}
				}
			}
		}
		else if ((roomCounter % 10) == 3)
		{
			srand(time(0));

			// Generate a random number between 1 and 3
			int randomNum3 = randomNum2;
			while ((randomNum3 == randomNum2) || (randomNum3 == randomNum1)) {
				randomNum3 = (rand() % num) + 1;
			}


			if (randomNum3 == 1) {
				riddleState = true;
				Library* library = new Library();
				room = library;
				readerAndBackground();
				btnChoice1->Visible = true;
				btnChoice1->Enabled = true;
				btnChoice1->Text = "The Art of Warfare";
				btnChoice2->Visible = true;
				btnChoice2->Enabled = true;
				btnChoice2->Text = "The Whispering Winds";
				btnChoice3->Visible = true;
				btnChoice3->Enabled = true;
				btnChoice3->Text = "The Ancient Lore";
				btnChoice4->Visible = true;
				btnChoice4->Enabled = true;
				btnChoice4->Text = "The Heart of the Forest";
				room->type = "Library";
			}
			else if (randomNum3 == 2) {
				riddleState = true;
				Battle* battle = new Battle(isBoss, player);
				room = battle;
				readerAndBackground();
				room->type = "Battle";

				btnChoice1->Visible = true;
				btnChoice1->Enabled = true;
				btnChoice1->Text = "Confront";
				btnChoice2->Visible = true;
				btnChoice2->Enabled = true;
				btnChoice2->Text = "Sneak past";
				btnChoice3->Visible = false;
				btnChoice4->Visible = false;
				pbAbility->Visible = true;
			}
			else if (randomNum3 == 3) {
				riddleState = true;
				Chest* chest = new Chest();
				room = chest;
				readerAndBackground();
				room->type = "Chest";

				std::srand(std::time(0)); // Seed random number generator
				int randomNumber = (std::rand() % 20) + 0; // Range [1, 20]

				std::ifstream file("random_riddles_floor_1.txt");
				if (!file) {
					std::cerr << "Error opening file!\n";
				}

				std::string line;
				int lineNumber = 0;

				while (std::getline(file, line)) {
					lineNumber++;

					if (lineNumber == (randomNumber * 4) + 1) {
						redReader->Text = gcnew String(line.c_str());

						if (biome == 0) {
							redReader->Text = File::ReadAllText("icechest.txt") + "\n" + gcnew String(line.c_str());
						}
						else if (biome == 1) {
							redReader->Text = File::ReadAllText("junglechest.txt") + "\n" + gcnew String(line.c_str());
						}

						lineNumber++;
						std::getline(file, line);
						btnChoice1->Visible = true;
						btnChoice1->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice2->Visible = true;
						btnChoice2->Text = gcnew String(line.c_str());
						lineNumber++;
						std::getline(file, line);
						btnChoice3->Visible = true;
						btnChoice3->Text = gcnew String(line.c_str());
						btnChoice4->Visible = false;
					}
				}
			}
		}
		else if (roomCounter == 4) {
			Respite* respite = new Respite();
			room = respite;
			riddleState = true;
			if (biome == 0) {
				redReader->Text = File::ReadAllText("iceprison.txt");
			}
			else if (biome == 1) {
				redReader->Text = File::ReadAllText("jungleprison.txt");
			}
			pbBackground->Image = Image::FromFile("prison.jpeg");
			btnChoice1->Visible = true;
			btnChoice1->Enabled = true;
			btnChoice1->Text = "Spare goblin";
			btnChoice2->Visible = true;
			btnChoice2->Enabled = true;
			btnChoice2->Text = "Kill goblin";
			btnChoice3->Visible = false;
			btnChoice4->Visible = false;
			room->type = "Encounter";
		}
		else if (roomCounter == 5) {
			Battle* battle = new Battle(isBoss, player);
			room = battle;
			readerAndBackground();
			room->type = "Battle";
			btnChoice1->Visible = true;
			btnChoice1->Enabled = true;
			btnChoice1->Text = "Confront";
			btnChoice2->Visible = true;
			btnChoice2->Enabled = true;
			btnChoice2->Text = "Sneak past";
			btnChoice3->Visible = false;
			btnChoice4->Visible = false;
			pbAbility->Visible = true;
		}
		else if (roomCounter == 6) {
			Respite* respite = new Respite();
			room = respite;
			riddleState = true;
			readerAndBackground();
			btnChoice1->Visible = true;
			btnChoice1->Enabled = true;
			btnChoice1->Text = "Restore health";
			btnChoice2->Visible = true;
			btnChoice2->Enabled = true;
			btnChoice2->Text = "Search room";
			btnChoice3->Visible = false;
			btnChoice4->Visible = false;
			room->type = "Respite";
		}
		else if (roomCounter == 7) {
			Library* library = new Library();
			room = library;
			riddleState = true;
			readerAndBackground();
			btnChoice1->Visible = true;
			btnChoice1->Enabled = true;
			btnChoice1->Text = "The Art of Warfare";
			btnChoice2->Visible = true;
			btnChoice2->Enabled = true;
			btnChoice2->Text = "The Whispering Winds";
			btnChoice3->Visible = true;
			btnChoice3->Enabled = true;
			btnChoice3->Text = "The Ancient Lore";
			btnChoice4->Visible = true;
			btnChoice4->Enabled = true;
			btnChoice4->Text = "The Heart of the Forest";
			room->type = "Library";
		}
		else if (roomCounter == 8) {
			Shop* shop = new Shop();
			room = shop;
			riddleState = true;
			redReader->Text = File::ReadAllText("shopkeeper.txt");
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Shop";
			btnChoice1->Visible = true;
			btnChoice1->Enabled = true;
			btnChoice1->Text = "Restore health";
			btnChoice2->Visible = true;
			btnChoice2->Enabled = true;
			btnChoice2->Text = "Stat increase";
			btnChoice3->Visible = true;
			btnChoice3->Enabled = true;
			btnChoice3->Text = "Book of Knowledge";
			btnChoice4->Visible = false;

		}
		else if ((roomCounter % 10) == 9) {
			Boss* boss = new Boss();
			room = boss;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Boss";
			pbAbility->Visible = true;
		}
		else if (roomCounter == 14) {
			Shop* shop = new Shop();
			room = shop;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Shop";
		}
		else if (roomCounter == 15) {
			Chest* chest = new Chest();
			room = chest;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Chest";
		}
		else if (roomCounter == 16) {
			Respite* respite = new Respite();
			room = respite;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Encounter";
		}
		else if (roomCounter == 17) {
			Respite* respite = new Respite();
			room = respite;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Respite";
		}
		else if (roomCounter == 18) {
			Battle* battle = new Battle(isBoss, player);
			room = battle;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Battle";
			btnAttack->Visible = true;
		}
		else if (roomCounter == 24) {
			Chest* chest = new Chest();
			room = chest;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Chest";
		}
		else if (roomCounter == 25) {
			Battle* battle = new Battle(isBoss,player);
			room = battle;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Battle";
		}
		else if (roomCounter == 26) {
			Shop* shop = new Shop();
			room = shop;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Shop";
		}
		else if (roomCounter == 27) {
			Respite* respite = new Respite();
			room = respite;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Encounter";
		}
		else if (roomCounter == 28) {
			Respite* respite = new Respite();
			room = respite;
			riddleState = true;
			redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
			pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
			room->type = "Respite";
		}

		if (roomCounter != 30) {
			if ((roomCounter % 10) == 0) {
				biomeSelect = true;
				roomState = false;

				btnLeft->Visible = true;
				btnRight->Visible = true;

				btnChoice1->Visible = false;
				btnChoice2->Visible = false;
				btnChoice3->Visible = false;
				btnChoice4->Visible = false;
			}
		}
		else {
			//determine what ending the player gets depending on true ending counter
			redReader->Text = "Congratulations! You have completed the game!";
			btnChoice1->Visible = false;
			btnChoice2->Visible = false;
			btnChoice3->Visible = false;
			btnChoice4->Visible = false;
		}

		roomCounter++;


	}



	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {

		if (riddleState) {
			riddleState = false;
			btnChoiceInvisible();
			btnAnswersVisible();
			//vector<string> randomRiddles = riddles->getRiddles();
			//vector<vector<string>> randomAnswers = riddles->getAnswers();
			//vector<int> index = riddles->getIndex();
			//string answer = riddles->answerCorrect.at(i);
			redReader->Text = gcnew String(riddles->riddles.at(i).c_str());

			randomAnswer1 = rand() % 3;
			randomAnswer2 = randomAnswer1;
			randomAnswer3 = randomAnswer2;

			while (randomAnswer2 == randomAnswer1) {
				randomAnswer2 = rand() % 3;
			}

			while ((randomAnswer3 == randomAnswer1) || (randomAnswer3 == randomAnswer2)) {
				randomAnswer3 = rand() % 3;
			}

			btnAnswer1->Text = gcnew String(riddles->answers.at(i).at(randomAnswer1).c_str());
			btnAnswer2->Text = gcnew String(riddles->answers.at(i).at(randomAnswer2).c_str());
			btnAnswer3->Text = gcnew String(riddles->answers.at(i).at(randomAnswer3).c_str());

			progRiddle->Value = 20;
			tmrRiddle->Enabled = true;
			tmrRiddle->Start();
		}
		else {
			btnAnswersInvisible();
			roomCreate();
		}
	}

	private: void randomRiddle() {
		ifstream file("random_riddles_floor_1.txt");
		if (!file) {
			cerr << "Error opening file!\n";
		}

		string line;
		int lineNumber = 0;

		while (getline(file, line)) {
			lineNumber++;

			string riddle = line;

			lineNumber++;
			std::getline(file, line);
			btnChoice1->Visible = true;
			btnChoice1->Text = gcnew String(line.c_str());
			lineNumber++;
			std::getline(file, line);
			btnChoice2->Visible = true;
			btnChoice2->Text = gcnew String(line.c_str());
			lineNumber++;
			std::getline(file, line);
			btnChoice3->Visible = true;
			btnChoice3->Text = gcnew String(line.c_str());
			btnChoice4->Visible = false;
		}
	}

	private: void btnChoiceVisible() {
		btnChoice1->Visible = true;
		btnChoice2->Visible = true;
		btnChoice3->Visible = true;
		btnChoice4->Visible = true;
	}

	private: void btnChoiceInvisible() {
		btnChoice1->Visible = false;
		btnChoice2->Visible = false;
		btnChoice3->Visible = false;
		btnChoice4->Visible = false;
	}

	private: void btnAnswersVisible() {
		btnAnswer1->Visible = true;
		btnAnswer2->Visible = true;
		btnAnswer3->Visible = true;
	}

	private: void btnAnswersInvisible() {
		btnAnswer1->Visible = false;
		btnAnswer2->Visible = false;
		btnAnswer3->Visible = false;
	}

	private: void readerAndBackground() {
		redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
		pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
	}



	private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		btnLeft->Visible = false;
		btnRight->Visible = false;

		if (biomeSelect) {
			biomeSelect = false;
			floor++;
			btnChoiceVisible();

			if (floor == 1) {
				biome = 0;
			}
			else if (floor == 2) {
				biome = 2;
			}
			else {
				biome = 4;
			}
			roomCreate();
		}
	}

	private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
		btnLeft->Visible = false;
		btnRight->Visible = false;

		if (biomeSelect) {
			biomeSelect = false;
			floor++;
			btnChoiceVisible();

			if (floor == 1) {
				biome = 1;
			}
			else if (floor == 2) {
				biome = 3;
			}
			else {
				biome = 4;
			}
			roomCreate();
		}
	}
	private: System::Void tmrRiddle_Tick(System::Object^ sender, System::EventArgs^ e) {

		progRiddle->Value -= 1;
		if (progRiddle->Value == 0) {
			tmrRiddle->Stop();
			redReader->Text = "The riddle keeper shouts \"Time's up! You have failed the riddle!\" Stat points have been reduced.";
			btnAnswersInvisible();
		}
	}
	private: System::Void btnAnswer1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((gcnew String(riddles->answerCorrect.at(i).c_str()))->Equals(gcnew String(btnAnswer2->Text))) {
			redReader->Text = "Correct! You have answered the riddle! Your stat points have increased.";
		}
		else {
			redReader->Text = "Fucking idiot! You have failed the riddle! Your stat points have decreased.";
		}
		i++;
	}

	private: System::Void btnAnswer2_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((gcnew String(riddles->answerCorrect.at(i).c_str()))->Equals(gcnew String(btnAnswer2->Text))) {
			redReader->Text = "Correct! You have answered the riddle! Your stat points have increased.";
		}
		else {
			redReader->Text = "Fucking idiot! You have failed the riddle! Your stat points have decreased.";
		}
		i++;
	}

	private: System::Void btnAnswer3_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((gcnew String(riddles->answerCorrect.at(i).c_str()))->Equals(gcnew String(btnAnswer3->Text))) {
			redReader->Text = "Correct! You have answered the riddle! Your stat points have increased.";
		}
		else {
			redReader->Text = "Fucking idiot! You have failed the riddle! Your stat points have decreased.";
		}
		i++;
	}
	private: System::Void btnAttack_Click(System::Object^ sender, System::EventArgs^ e) {
		static Battle* currentBattle = nullptr;  // Reference to the current battle instance
		static bool isBoss = false;  // Flag to check if it's a boss battle

		// Ensure the player is initialized (you should replace `player` with your actual player reference)
		if (player == nullptr) {
			// You might need to initialize player here if not already initialized
			player = new Character();  // Example initialization, adjust based on your code
		}

		// Check if the battle has already started
		if (currentBattle == nullptr) {
			// Initialize the Battle object (start the battle)
			currentBattle = new Battle(isBoss, player);
			redReader->Text = "Battle started! Choose your attacks.";
			btnAttack->Visible = true;  // Make the attack button visible
		}

		// Perform the attack action if strikes are remaining and battle isn't over
		if (!currentBattle->isBattleFinished()) {
			// Perform the attack (this is handled inside the Battle class)
			currentBattle->attack(player);  // Player attacks the enemy
			redReader->Text = "You attacked! Strikes remaining: " + currentBattle->Total_Strikes().ToString();

			// Check if the battle is finished (either strikes are 0 or the enemy is defeated)
			if (currentBattle->isBattleFinished()) {
				btnAttack->Visible = false;  // Hide the attack button after the battle is over
				redReader->Text = "Battle finished!";

				// If the enemy is defeated, move to the next room
				if (currentBattle->getEnemy()->isDefeated()) {
					redReader->Text = "The enemy has been defeated! Moving to the next room.";
					roomCreate();  // Proceed to the next room or stage
				}
				else {
					redReader->Text = "You could not defeat the enemy.";
					// You can handle additional logic here for when the player loses
				}

				// Clean up the current battle after it's finished
				delete currentBattle;
				currentBattle = nullptr;  // Reset the battle reference for the next round
			}
		}
		else {
			// If the battle is already finished, show a message or reset
			redReader->Text = "The battle has already ended!";
		}
	}


	};
}
