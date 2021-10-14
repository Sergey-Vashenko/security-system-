#pragma once

#include <windows.h>
#include <vfw.h>
#include <wingdi.h>
#include <vcclr.h>
#include <ctime> 
#include <string>
#pragma comment( lib, "Vfw32.lib")




namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  OnOrOff;
	private: System::Windows::Forms::TrackBar^  Sensitivity;


	protected:

	protected:

	private: System::Windows::Forms::TrackBar^  Periodicity;




	private: System::Windows::Forms::Button^  Save;
	private: System::Windows::Forms::FolderBrowserDialog^  DialogImageSave;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Label^  adress_label;



	private: System::Windows::Forms::PictureBox^  Video;
	private: System::Windows::Forms::Button^  Select_Camera;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  Warning;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;


	private: System::ComponentModel::IContainer^  components;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->OnOrOff = (gcnew System::Windows::Forms::Button());
			this->Sensitivity = (gcnew System::Windows::Forms::TrackBar());
			this->Periodicity = (gcnew System::Windows::Forms::TrackBar());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->DialogImageSave = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->adress_label = (gcnew System::Windows::Forms::Label());
			this->Video = (gcnew System::Windows::Forms::PictureBox());
			this->Select_Camera = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Warning = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sensitivity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Periodicity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Video))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Warning))->BeginInit();
			this->SuspendLayout();
			// 
			// OnOrOff
			// 
			this->OnOrOff->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->OnOrOff->Location = System::Drawing::Point(1030, 41);
			this->OnOrOff->Name = L"OnOrOff";
			this->OnOrOff->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->OnOrOff->Size = System::Drawing::Size(108, 37);
			this->OnOrOff->TabIndex = 0;
			this->OnOrOff->Text = L"On/Off";
			this->OnOrOff->UseVisualStyleBackColor = true;
			this->OnOrOff->Click += gcnew System::EventHandler(this, &MyForm::OnOrOff_Click);
			// 
			// Sensitivity
			// 
			this->Sensitivity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Sensitivity->Location = System::Drawing::Point(1001, 311);
			this->Sensitivity->Maximum = 3;
			this->Sensitivity->Minimum = 1;
			this->Sensitivity->Name = L"Sensitivity";
			this->Sensitivity->Size = System::Drawing::Size(169, 56);
			this->Sensitivity->TabIndex = 1;
			this->Sensitivity->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->Sensitivity->Value = 1;
			// 
			// Periodicity
			// 
			this->Periodicity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Periodicity->LargeChange = 1;
			this->Periodicity->Location = System::Drawing::Point(765, 311);
			this->Periodicity->Maximum = 9;
			this->Periodicity->Minimum = 3;
			this->Periodicity->Name = L"Periodicity";
			this->Periodicity->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Periodicity->Size = System::Drawing::Size(169, 56);
			this->Periodicity->TabIndex = 2;
			this->Periodicity->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->Periodicity->Value = 3;
			this->Periodicity->Scroll += gcnew System::EventHandler(this, &MyForm::Periodicity_Scroll);
			// 
			// Save
			// 
			this->Save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Save->Location = System::Drawing::Point(1030, 97);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(108, 33);
			this->Save->TabIndex = 3;
			this->Save->Text = L"Save";
			this->Save->UseVisualStyleBackColor = true;
			this->Save->Click += gcnew System::EventHandler(this, &MyForm::SaveImage);
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// adress_label
			// 
			this->adress_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->adress_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->adress_label->Location = System::Drawing::Point(881, 145);
			this->adress_label->Name = L"adress_label";
			this->adress_label->Size = System::Drawing::Size(298, 30);
			this->adress_label->TabIndex = 4;
			this->adress_label->Text = L"label";
			this->adress_label->Visible = false;
			// 
			// Video
			// 
			this->Video->Location = System::Drawing::Point(13, 13);
			this->Video->Name = L"Video";
			this->Video->Size = System::Drawing::Size(743, 489);
			this->Video->TabIndex = 5;
			this->Video->TabStop = false;
			// 
			// Select_Camera
			// 
			this->Select_Camera->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Select_Camera->Location = System::Drawing::Point(1030, 196);
			this->Select_Camera->Name = L"Select_Camera";
			this->Select_Camera->Size = System::Drawing::Size(108, 47);
			this->Select_Camera->TabIndex = 6;
			this->Select_Camera->Text = L"Выбор камеры";
			this->Select_Camera->UseVisualStyleBackColor = true;
			this->Select_Camera->Click += gcnew System::EventHandler(this, &MyForm::Select_Camera_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(762, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 23);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Частота съёмки";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1012, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 23);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Чувствительность";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Warning
			// 
			this->Warning->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Warning.Image")));
			this->Warning->Location = System::Drawing::Point(765, 109);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(110, 114);
			this->Warning->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Warning->TabIndex = 9;
			this->Warning->TabStop = false;
			this->Warning->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(840, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(777, 360);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"3";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(909, 360);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"9";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(998, 360);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"25%";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1143, 360);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"75%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(792, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 18);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Текущая разница";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1182, 513);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Select_Camera);
			this->Controls->Add(this->Video);
			this->Controls->Add(this->adress_label);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->Periodicity);
			this->Controls->Add(this->Sensitivity);
			this->Controls->Add(this->OnOrOff);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1200, 560);
			this->Name = L"MyForm";
			this->Text = L"Охранная система";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sensitivity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Periodicity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Video))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Warning))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		String ^user_adress="";
		HWND camera_hwnd;
		bool activation=false;
		int count=0;
		Bitmap ^Probe;
		Bitmap ^Standart;
		
		

		 void readIniFile()
		{
			MyForm::Width= GetPrivateProfileIntA("FORM", "WIDTH", 1200, ".\\options.ini");
			MyForm::Height = GetPrivateProfileIntA("FORM", "HEIGHT", 560, ".\\options.ini");
			Periodicity->Value = GetPrivateProfileIntA("OPTION", "PERIODICITY",6, ".\\options.ini");
			Sensitivity->Value = GetPrivateProfileIntA("OPTION", "SENSITIVITI", 2, ".\\options.ini");
		
		}

		 void updateIniFile()
		{
			char option[32];
			sprintf(option, "%i", MyForm::Width);
			WritePrivateProfileStringA("FORM", "WIDTH", option, ".\\options.ini");
			sprintf(option, "%i", MyForm::Height);
			WritePrivateProfileStringA("FORM", "HEIGHT", option, ".\\options.ini");
			sprintf(option, "%i", Periodicity->Value);
			WritePrivateProfileStringA("OPTION", "PERIODICITY", option, ".\\options.ini");
			sprintf(option, "%i", Sensitivity->Value);
			WritePrivateProfileStringA("OPTION", "SENSITIVITI", option, ".\\options.ini");
		}
private: System::Void SaveImage(System::Object^  sender, System::EventArgs^  e) 
{
	DialogImageSave->ShowDialog();
	user_adress = DialogImageSave->SelectedPath;
	adress_label->Text = user_adress;
	adress_label->Visible=TRUE;
	
}
		
		
private: System::Void OnOrOff_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
	if(!activation)
	{
		timer->Start(); activation = true;
		capFileSaveDIB(camera_hwnd, L"Standart.bmp");
	}
	else
	{
		timer->Stop(); activation = false; 
		Warning->Visible = false;
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	readIniFile();
	timer->Interval = Periodicity->Value * 1000;
	camera_hwnd = capCreateCaptureWindow(TEXT("My Capture Window"),
		WS_CHILD | WS_VISIBLE, 0, 0, Video->Width, Video->Height, (HWND)(Video->Handle.ToPointer()), 0);
	
	if (camera_hwnd != NULL) {
		if (!capDriverConnect(camera_hwnd, 0))
			MessageBox::Show("Ошибка при подключении к веб-камере!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		capPreviewScale(camera_hwnd, true);
		capPreviewRate(camera_hwnd, 120);
		capPreview(camera_hwnd, true);
		tagBITMAPINFO info;
	capGetVideoFormat(camera_hwnd, &info, sizeof(info));
	info.bmiHeader.biBitCount = 16; //bpp
	info.bmiHeader.biPlanes = 1;
	info.bmiHeader.biSize = sizeof(info);
	info.bmiHeader.biSizeImage = (640 * 480 * 2);   //my capture window  size and 16bpp
	info.bmiHeader.biWidth = 640;
	info.bmiHeader.biHeight = 480;
	info.bmiHeader.biCompression = MAKEFOURCC('Y', 'U', 'Y', '2');	//844715353
	capSetVideoFormat(camera_hwnd, &info, sizeof(info));
	}
	else {
		MessageBox::Show("Ошибка при создании окна вебки!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void Select_Camera_Click(System::Object^  sender, System::EventArgs^  e) {
	CAPDRIVERCAPS CapDriverCaps = { };
	capDriverGetCaps(camera_hwnd, &CapDriverCaps, sizeof(CAPDRIVERCAPS));
	if (CapDriverCaps.fHasDlgVideoSource)
	{
	    capDlgVideoDisplay(camera_hwnd);
		capDlgVideoSource(camera_hwnd);
	}
	tagBITMAPINFO info;
	capGetVideoFormat(camera_hwnd, &info, sizeof(info));
	info.bmiHeader.biBitCount = 16; //bpp
	info.bmiHeader.biPlanes = 1;
	info.bmiHeader.biSize = sizeof(info);
	info.bmiHeader.biSizeImage = (640 * 480 * 2);   //my capture window  size and 16bpp
	info.bmiHeader.biWidth = 640;
	info.bmiHeader.biHeight = 480;
	info.bmiHeader.biCompression = MAKEFOURCC('Y', 'U', 'Y', '2');	//844715353
	capSetVideoFormat(camera_hwnd, &info, sizeof(info));
}
		
private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
	double difference = 0, delta=20;
	Standart = gcnew Bitmap(L"Standart.bmp");
	capFileSaveDIB(camera_hwnd, L"Probe.bmp");
	Probe = gcnew Bitmap(L"Probe.bmp");
	for (int w = 0; w < Probe->Width; w++)
	{
		for (int h = 0; h < Probe->Height; h++)
		{
			/*if (Probe->GetPixel(w, h).ToArgb() - Standart->GetPixel(w, h).ToArgb()>delta) 
				difference++;*/
			if (fabs(Probe->GetPixel(w, h).R -
				Standart->GetPixel(w, h).R) > delta)
				difference++;
			else {
				if (fabs(Probe->GetPixel(w, h).G -
					Standart->GetPixel(w, h).G) > delta)
					difference++;
				else {
					if (fabs(Probe->GetPixel(w, h).B -
						Standart->GetPixel(w, h).B) > delta)
						difference++;
				}
			}
		}
	}
	difference= (difference  / (Probe->Height*Probe->Width)) * 100;
	label4->Text = difference.ToString();
	label4->Visible = true;
	delete Probe; delete Standart;
    MoveFileEx(L"Probe.bmp", L"Standart.bmp", MOVEFILE_REPLACE_EXISTING);
	GetLastError();
	if (difference > Sensitivity->Value*25)
	{
		Warning->Visible = true;
		count++;
		String ^sum_adr;
		if (user_adress->Length != 0)
			sum_adr = user_adress + "\\Нарушение №" + count + ".bmp";
		else
			sum_adr = user_adress + "Нарушение №" + count + ".bmp";
		pin_ptr<const wchar_t> adress = PtrToStringChars(sum_adr);
		capFileSaveDIB(camera_hwnd, adress);
	}
	else Warning->Visible = false;
}
private: System::Void Periodicity_Scroll(System::Object^  sender, System::EventArgs^  e) {
	timer->Interval = Periodicity->Value * 1000;
}
private: System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	updateIniFile();
}
};
}
