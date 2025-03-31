#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
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

		bool isEnlarged = false;
		bool pathChoice = true;
		bool completed = false;
		bool LibState = false;
		bool roomState = false;
		bool biomeSelect = true;
		RoomBase* temp = new RoomBase();
		RoomBase* room;
		//RoomBase* currRoom;
		int globalCorrect = 1;
		bool ContState;
		int biome;
		int floor = 0;
	private: System::Windows::Forms::Button^ btnContinue;
	public:
		int roomCounter = 0;
		   

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
			this->redReader = (gcnew System::Windows::Forms::RichTextBox());
			this->pbProfile = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->SuspendLayout();
			// 
			// redReader
			// 
			this->redReader->BackColor = System::Drawing::Color::LightYellow;
			this->redReader->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->pbProfile->Location = System::Drawing::Point(-2, 2);
			this->pbProfile->Name = L"pbProfile";
			this->pbProfile->Size = System::Drawing::Size(182, 174);
			this->pbProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbProfile->TabIndex = 2;
			this->pbProfile->TabStop = false;
			this->pbProfile->Click += gcnew System::EventHandler(this, &GameScreen::pbProfile_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(3, 488);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(177, 163);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
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
			// btnContinue
			// 
			this->btnContinue->Location = System::Drawing::Point(938, 12);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(146, 74);
			this->btnContinue->TabIndex = 4;
			this->btnContinue->Text = L"Continue";
			this->btnContinue->UseVisualStyleBackColor = true;
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
			// GameScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1278, 945);
			this->Controls->Add(this->pbLongbow);
			this->Controls->Add(this->pbWand);
			this->Controls->Add(this->pbThrowing_Knife);
			this->Controls->Add(this->pbSword);
			this->Controls->Add(this->pictureBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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

	}
	private: System::Void btnChoice1_Click(System::Object^ sender, System::EventArgs^ e) {

        //RoomBase* tempRoom = new RoomBase();
        //tempRoom->setBiome(1);
        //delete tempRoom;

		//if (!completed)
			//roomCreate(1);

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
		
		//Choice 1

        //redReader->Text = gcnew String(to_string(roomCounter).c_str());

		if (roomCounter == 5) {
			redReader->Text = File::ReadAllText("iceprisonfree.txt");
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

		} else { //split pathchoice

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


				

			} else {
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

	} else { //split pathchoice

		if (ContState == false) {
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
		}


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

			//RoomBase* room;

			//vector<string> rooms = { "library", "battle", "chest" };
			int num = 3;

			// Seed the random number generator
			srand(time(0));

			// Generate a random number between 1 and 3
			int randomNum;
			//randomNum = (rand() % num) + 1;
			//rooms[randomNum - 1] = "";
			//num--;

			if (roomCounter == 1)
			{
				srand(time(0));

				// Generate a random number between 1 and 3
				randomNum = (rand() % num) + 1;

				if (randomNum == 1) {
					Library* library = new Library();
					room = library;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
				else if (randomNum == 2) {
					Battle* battle = new Battle();
					room = battle;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
					room->type = "Battle";

					btnChoice1->Visible = true;
					btnChoice1->Enabled = true;
					btnChoice1->Text = "Confront";
					btnChoice2->Visible = true;
					btnChoice2->Enabled = true;
					btnChoice2->Text = "Sneak past";
					btnChoice3->Visible = false;
					btnChoice4->Visible = false;
				}
				else if (randomNum == 3) {
					Chest* chest = new Chest();
					room = chest;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
							btnChoice4->Visible = false;
						}
					}
				}

			} 
			else if (roomCounter == 2)
			{
				srand(time(0));

				// Generate a random number between 1 and 3
				randomNum = (rand() % num) + 1;

				if (randomNum == 1) {
					Library* library = new Library();
					room = library;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
				else if (randomNum == 2) {
					Battle* battle = new Battle();
					room = battle;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
					room->type = "Battle";

					btnChoice1->Visible = true;
					btnChoice1->Enabled = true;
					btnChoice1->Text = "Confront";
					btnChoice2->Visible = true;
					btnChoice2->Enabled = true;
					btnChoice2->Text = "Sneak past";
					btnChoice3->Visible = false;
					btnChoice4->Visible = false;
				}
				else if (randomNum == 3) {
					Chest* chest = new Chest();
					room = chest;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
							btnChoice4->Visible = false;
						}
					}
				}
			} 
			else if (roomCounter == 3)
			{
				srand(time(0));

				// Generate a random number between 1 and 3
				randomNum = (rand() % num) + 1;

				if (randomNum == 1) {
					Library* library = new Library();
					room = library;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
				else if (randomNum == 2) {
					Battle* battle = new Battle();
					room = battle;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
					room->type = "Battle";

					btnChoice1->Visible = true;
					btnChoice1->Enabled = true;
					btnChoice1->Text = "Confront";
					btnChoice2->Visible = true;
					btnChoice2->Enabled = true;
					btnChoice2->Text = "Sneak past";
					btnChoice3->Visible = false;
					btnChoice4->Visible = false;
				}
				else if (randomNum == 3) {
					Chest* chest = new Chest();
					room = chest;
					redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
					pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
							btnChoice4->Visible = false;
						}
					}
				}
			}
			else if (roomCounter == 4) {
				Respite* respite = new Respite();
				room = respite;

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
				Battle* battle = new Battle();
				room = battle;
				redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Battle";
				btnChoice1->Visible = true;
				btnChoice1->Enabled = true;
				btnChoice1->Text = "Confront";
				btnChoice2->Visible = true;
				btnChoice2->Enabled = true;
				btnChoice2->Text = "Sneak past";
				btnChoice3->Visible = false;
				btnChoice4->Visible = false;
			}
			else if (roomCounter == 6) {
				Respite* respite = new Respite();
				room = respite;
				redReader->Text = File::ReadAllText("respite.txt");
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
				redReader->Text = File::ReadAllText("library.txt");
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
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
			else if (roomCounter == 9) {
				Boss* boss = new Boss();
				room = boss;
				redReader->Text = File::ReadAllText("respite.txt");
				//pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Boss";
			}
			else if (roomCounter == 14) {
				Shop* shop = new Shop();
				room = shop;
				redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Shop";
			}
			else if (roomCounter == 15) {
				Chest* chest = new Chest();
				room = chest;
				redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Chest";
			}
			else if (roomCounter == 16) {
				Respite* respite = new Respite();
				room = respite;
				redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Encounter";
			}
			else if (roomCounter == 17) {
				Respite* respite = new Respite();
				room = respite;
				redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Respite";
			}
			else if (roomCounter == 18) {
				Battle* battle = new Battle();
				room = battle;
				redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
				pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Battle";
			}
			else if (roomCounter == 19) {
				Boss* boss = new Boss();
				room = boss;
				redReader->Text = File::ReadAllText(gcnew String(room->getTextFileName(biome).c_str()));
				//pbBackground->Image = Image::FromFile(gcnew String(room->getImageFileName(biome).c_str()));
				room->type = "Boss";
			}
			else if (roomCounter == 24) {

			}
			else if (roomCounter == 25) {

			}
			else if (roomCounter == 26) {

			}
			else if (roomCounter == 27) {

			}
			else if (roomCounter == 28) {

			}
			else if (roomCounter == 29) {

			}
			else if (roomCounter == 30) {

			}
			if (roomCounter != 30) {
				if ((roomCounter % 10) == 0) {
					biomeSelect = true;
					roomState = false;

					btnChoice1->Text = "Go left";
					btnChoice2->Text = "Go right";

					btnChoice1->Visible = true;
					btnChoice2->Visible = true;
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

private: System::Void btnChoice3_Click(System::Object^ sender, System::EventArgs^ e) {
	int SelfIndex = 3;
	ContState = true;
	btnChoice2->Visible = false;
	btnChoice3->Visible = false;
	btnChoice1->Text = "Continue..";
	if (SelfIndex == globalCorrect) {
		redReader->Text = "Correct! You may now proceed to the next room. Press any button to proceed";
		//Stat Increases

	}
	else {
		redReader->Text = "Incorrect! Penalty! Press any button to proceed";
		//stat decreases
	}
}
private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {
	roomCreate();
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

		//riddles.push_back(line);

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
	   private: void btnChoiceVisible() {
		   btnChoice1->Visible = true;
		   btnChoice2->Visible = true;
		   btnChoice3->Visible = true;
		   btnChoice4->Visible = true;
	   }
};
}

