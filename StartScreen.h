#pragma once
#include "GameScreen.h"
#include "Lore.h"

namespace DungeonDescent {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace WMPLib;

	/// <summary>
	/// Summary for StartScreen
	/// </summary>
	public ref class StartScreen : public System::Windows::Forms::Form
	{
	public:
		StartScreen(void)
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
		~StartScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbTitle;
	private: System::Windows::Forms::PictureBox^ pbDev;
	private: System::Windows::Forms::PictureBox^ pbFAQ;
	private: System::Windows::Forms::PictureBox^ pbSettings;
	private: System::Windows::Forms::PictureBox^ pbStart;
	private: System::Windows::Forms::PictureBox^ pbContinue;
	private: System::Windows::Forms::PictureBox^ pbQuit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;




	protected:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartScreen::typeid));
			this->pbTitle = (gcnew System::Windows::Forms::PictureBox());
			this->pbDev = (gcnew System::Windows::Forms::PictureBox());
			this->pbFAQ = (gcnew System::Windows::Forms::PictureBox());
			this->pbSettings = (gcnew System::Windows::Forms::PictureBox());
			this->pbStart = (gcnew System::Windows::Forms::PictureBox());
			this->pbContinue = (gcnew System::Windows::Forms::PictureBox());
			this->pbQuit = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTitle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDev))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFAQ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSettings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbContinue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbQuit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pbTitle
			// 
			this->pbTitle->BackColor = System::Drawing::Color::Transparent;
			this->pbTitle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbTitle.Image")));
			this->pbTitle->Location = System::Drawing::Point(126, 12);
			this->pbTitle->Name = L"pbTitle";
			this->pbTitle->Size = System::Drawing::Size(1084, 216);
			this->pbTitle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbTitle->TabIndex = 0;
			this->pbTitle->TabStop = false;
			// 
			// pbDev
			// 
			this->pbDev->BackColor = System::Drawing::Color::Transparent;
			this->pbDev->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbDev.Image")));
			this->pbDev->Location = System::Drawing::Point(2, 824);
			this->pbDev->Name = L"pbDev";
			this->pbDev->Size = System::Drawing::Size(109, 108);
			this->pbDev->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbDev->TabIndex = 1;
			this->pbDev->TabStop = false;
			// 
			// pbFAQ
			// 
			this->pbFAQ->BackColor = System::Drawing::Color::Transparent;
			this->pbFAQ->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFAQ.Image")));
			this->pbFAQ->Location = System::Drawing::Point(1157, 824);
			this->pbFAQ->Name = L"pbFAQ";
			this->pbFAQ->Size = System::Drawing::Size(109, 108);
			this->pbFAQ->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbFAQ->TabIndex = 2;
			this->pbFAQ->TabStop = false;
			// 
			// pbSettings
			// 
			this->pbSettings->BackColor = System::Drawing::Color::Transparent;
			this->pbSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSettings.Image")));
			this->pbSettings->Location = System::Drawing::Point(1157, 12);
			this->pbSettings->Name = L"pbSettings";
			this->pbSettings->Size = System::Drawing::Size(109, 108);
			this->pbSettings->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbSettings->TabIndex = 3;
			this->pbSettings->TabStop = false;
			// 
			// pbStart
			// 
			this->pbStart->BackColor = System::Drawing::Color::Transparent;
			this->pbStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbStart.Image")));
			this->pbStart->Location = System::Drawing::Point(29, 24);
			this->pbStart->Name = L"pbStart";
			this->pbStart->Size = System::Drawing::Size(239, 93);
			this->pbStart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbStart->TabIndex = 4;
			this->pbStart->TabStop = false;
			this->pbStart->Click += gcnew System::EventHandler(this, &StartScreen::pbStart_Click);
			// 
			// pbContinue
			// 
			this->pbContinue->BackColor = System::Drawing::Color::Transparent;
			this->pbContinue->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbContinue.Image")));
			this->pbContinue->Location = System::Drawing::Point(29, 140);
			this->pbContinue->Name = L"pbContinue";
			this->pbContinue->Size = System::Drawing::Size(239, 93);
			this->pbContinue->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbContinue->TabIndex = 5;
			this->pbContinue->TabStop = false;
			// 
			// pbQuit
			// 
			this->pbQuit->BackColor = System::Drawing::Color::Transparent;
			this->pbQuit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbQuit.Image")));
			this->pbQuit->Location = System::Drawing::Point(29, 363);
			this->pbQuit->Name = L"pbQuit";
			this->pbQuit->Size = System::Drawing::Size(239, 93);
			this->pbQuit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbQuit->TabIndex = 6;
			this->pbQuit->TabStop = false;
			this->pbQuit->Click += gcnew System::EventHandler(this, &StartScreen::pbQuit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 254);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 93);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StartScreen::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->pbStart);
			this->panel1->Controls->Add(this->pbQuit);
			this->panel1->Controls->Add(this->pbContinue);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(492, 403);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 477);
			this->panel1->TabIndex = 8;
			// 
			// StartScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1278, 944);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pbSettings);
			this->Controls->Add(this->pbFAQ);
			this->Controls->Add(this->pbTitle);
			this->Controls->Add(this->pbDev);
			this->Name = L"StartScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Descent";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTitle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDev))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFAQ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSettings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbContinue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbQuit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pbStart_Click(System::Object^ sender, System::EventArgs^ e) {
		GameScreen^ gamescreen = gcnew GameScreen;
		gamescreen->Show();
		this->Hide();
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Lore^ lore = gcnew Lore;
		lore->Show();
		this->Hide();
	}

	private: System::Void pbQuit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
