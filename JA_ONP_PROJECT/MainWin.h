#pragma once
#include <string>
#include <wtypes.h>
#include <fstream>
#include <sstream>
#include <exception>
#include <msclr\marshal_cppstd.h>
#include <filesystem>
#include <thread>
#include <windows.h>
#include <stack>
#include <chrono> 
#include <locale>
#include <iostream>

namespace JAONPPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace std::chrono;

	/// <summary>
	/// Summary for MainWin
	/// </summary>
	public ref class MainWin : public System::Windows::Forms::Form
	{
	public:
		char separator;

		MainWin(void)
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
		~MainWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ RadioBtnCpp;
	private: System::Windows::Forms::RadioButton^ RadioBtnAsm;
	private: System::Windows::Forms::Button^ BtnDo;
	protected:






	private: System::Windows::Forms::MenuStrip^ menuStrip;







	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::Label^ LabelThreads;




	private: System::Windows::Forms::GroupBox^ DataGroup;
	private: System::Windows::Forms::TextBox^ TextBoxPath;











	private: System::Windows::Forms::GroupBox^ AdditionalSettings;
	private: System::Windows::Forms::GroupBox^ GroupBoxImplementation;
	private: System::Windows::Forms::GroupBox^ GroupBoxLogs;
	private: System::Windows::Forms::TextBox^ TextBoxLogs;





	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog;
	private: System::Windows::Forms::NumericUpDown^ NumericThreads;

	private: System::Windows::Forms::Label^ LabelPath;
	private: System::Windows::Forms::Button^ BtnPath;
	private: System::Windows::Forms::GroupBox^ DataOutpuBox;
	private: System::Windows::Forms::Button^ BtnOutputPath;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextBoxOutputPath;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWin::typeid));
			this->RadioBtnCpp = (gcnew System::Windows::Forms::RadioButton());
			this->RadioBtnAsm = (gcnew System::Windows::Forms::RadioButton());
			this->BtnDo = (gcnew System::Windows::Forms::Button());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LabelThreads = (gcnew System::Windows::Forms::Label());
			this->DataGroup = (gcnew System::Windows::Forms::GroupBox());
			this->BtnPath = (gcnew System::Windows::Forms::Button());
			this->LabelPath = (gcnew System::Windows::Forms::Label());
			this->TextBoxPath = (gcnew System::Windows::Forms::TextBox());
			this->AdditionalSettings = (gcnew System::Windows::Forms::GroupBox());
			this->NumericThreads = (gcnew System::Windows::Forms::NumericUpDown());
			this->GroupBoxImplementation = (gcnew System::Windows::Forms::GroupBox());
			this->GroupBoxLogs = (gcnew System::Windows::Forms::GroupBox());
			this->TextBoxLogs = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->DataOutpuBox = (gcnew System::Windows::Forms::GroupBox());
			this->BtnOutputPath = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxOutputPath = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip->SuspendLayout();
			this->DataGroup->SuspendLayout();
			this->AdditionalSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericThreads))->BeginInit();
			this->GroupBoxImplementation->SuspendLayout();
			this->GroupBoxLogs->SuspendLayout();
			this->DataOutpuBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// RadioBtnCpp
			// 
			resources->ApplyResources(this->RadioBtnCpp, L"RadioBtnCpp");
			this->RadioBtnCpp->Checked = true;
			this->RadioBtnCpp->Name = L"RadioBtnCpp";
			this->RadioBtnCpp->TabStop = true;
			this->RadioBtnCpp->UseVisualStyleBackColor = true;
			// 
			// RadioBtnAsm
			// 
			resources->ApplyResources(this->RadioBtnAsm, L"RadioBtnAsm");
			this->RadioBtnAsm->Name = L"RadioBtnAsm";
			this->RadioBtnAsm->UseVisualStyleBackColor = true;
			// 
			// BtnDo
			// 
			this->BtnDo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtnDo->DialogResult = System::Windows::Forms::DialogResult::No;
			resources->ApplyResources(this->BtnDo, L"BtnDo");
			this->BtnDo->Name = L"BtnDo";
			this->BtnDo->UseVisualStyleBackColor = true;
			this->BtnDo->Click += gcnew System::EventHandler(this, &MainWin::BtnDo_Click);
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->plikToolStripMenuItem });
			resources->ApplyResources(this->menuStrip, L"menuStrip");
			this->menuStrip->Name = L"menuStrip";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			resources->ApplyResources(this->plikToolStripMenuItem, L"plikToolStripMenuItem");
			this->plikToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWin::plikToolStripMenuItem_Click);
			// 
			// LabelThreads
			// 
			resources->ApplyResources(this->LabelThreads, L"LabelThreads");
			this->LabelThreads->Name = L"LabelThreads";
			// 
			// DataGroup
			// 
			this->DataGroup->Controls->Add(this->BtnPath);
			this->DataGroup->Controls->Add(this->LabelPath);
			this->DataGroup->Controls->Add(this->TextBoxPath);
			resources->ApplyResources(this->DataGroup, L"DataGroup");
			this->DataGroup->Name = L"DataGroup";
			this->DataGroup->TabStop = false;
			// 
			// BtnPath
			// 
			resources->ApplyResources(this->BtnPath, L"BtnPath");
			this->BtnPath->Name = L"BtnPath";
			this->BtnPath->UseVisualStyleBackColor = true;
			this->BtnPath->Click += gcnew System::EventHandler(this, &MainWin::BtnPath_Click);
			// 
			// LabelPath
			// 
			resources->ApplyResources(this->LabelPath, L"LabelPath");
			this->LabelPath->Name = L"LabelPath";
			// 
			// TextBoxPath
			// 
			resources->ApplyResources(this->TextBoxPath, L"TextBoxPath");
			this->TextBoxPath->Name = L"TextBoxPath";
			this->TextBoxPath->ReadOnly = true;
			// 
			// AdditionalSettings
			// 
			this->AdditionalSettings->Controls->Add(this->NumericThreads);
			this->AdditionalSettings->Controls->Add(this->GroupBoxImplementation);
			this->AdditionalSettings->Controls->Add(this->LabelThreads);
			resources->ApplyResources(this->AdditionalSettings, L"AdditionalSettings");
			this->AdditionalSettings->Name = L"AdditionalSettings";
			this->AdditionalSettings->TabStop = false;
			// 
			// NumericThreads
			// 
			resources->ApplyResources(this->NumericThreads, L"NumericThreads");
			this->NumericThreads->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 64, 0, 0, 0 });
			this->NumericThreads->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NumericThreads->Name = L"NumericThreads";
			this->NumericThreads->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// GroupBoxImplementation
			// 
			this->GroupBoxImplementation->Controls->Add(this->RadioBtnCpp);
			this->GroupBoxImplementation->Controls->Add(this->RadioBtnAsm);
			resources->ApplyResources(this->GroupBoxImplementation, L"GroupBoxImplementation");
			this->GroupBoxImplementation->Name = L"GroupBoxImplementation";
			this->GroupBoxImplementation->TabStop = false;
			// 
			// GroupBoxLogs
			// 
			this->GroupBoxLogs->Controls->Add(this->TextBoxLogs);
			resources->ApplyResources(this->GroupBoxLogs, L"GroupBoxLogs");
			this->GroupBoxLogs->Name = L"GroupBoxLogs";
			this->GroupBoxLogs->TabStop = false;
			// 
			// TextBoxLogs
			// 
			resources->ApplyResources(this->TextBoxLogs, L"TextBoxLogs");
			this->TextBoxLogs->Name = L"TextBoxLogs";
			this->TextBoxLogs->ReadOnly = true;
			// 
			// DataOutpuBox
			// 
			this->DataOutpuBox->Controls->Add(this->BtnOutputPath);
			this->DataOutpuBox->Controls->Add(this->label1);
			this->DataOutpuBox->Controls->Add(this->TextBoxOutputPath);
			resources->ApplyResources(this->DataOutpuBox, L"DataOutpuBox");
			this->DataOutpuBox->Name = L"DataOutpuBox";
			this->DataOutpuBox->TabStop = false;
			// 
			// BtnOutputPath
			// 
			resources->ApplyResources(this->BtnOutputPath, L"BtnOutputPath");
			this->BtnOutputPath->Name = L"BtnOutputPath";
			this->BtnOutputPath->UseVisualStyleBackColor = true;
			this->BtnOutputPath->Click += gcnew System::EventHandler(this, &MainWin::BtnOutputPath_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// TextBoxOutputPath
			// 
			resources->ApplyResources(this->TextBoxOutputPath, L"TextBoxOutputPath");
			this->TextBoxOutputPath->Name = L"TextBoxOutputPath";
			this->TextBoxOutputPath->ReadOnly = true;
			// 
			// MainWin
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->DataOutpuBox);
			this->Controls->Add(this->GroupBoxLogs);
			this->Controls->Add(this->AdditionalSettings);
			this->Controls->Add(this->DataGroup);
			this->Controls->Add(this->BtnDo);
			this->Controls->Add(this->menuStrip);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip;
			this->MaximizeBox = false;
			this->Name = L"MainWin";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->DataGroup->ResumeLayout(false);
			this->DataGroup->PerformLayout();
			this->AdditionalSettings->ResumeLayout(false);
			this->AdditionalSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericThreads))->EndInit();
			this->GroupBoxImplementation->ResumeLayout(false);
			this->GroupBoxImplementation->PerformLayout();
			this->GroupBoxLogs->ResumeLayout(false);
			this->GroupBoxLogs->PerformLayout();
			this->DataOutpuBox->ResumeLayout(false);
			this->DataOutpuBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->ActiveControl = this->RadioBtnCpp;

		}

#pragma endregion

	private: System::Void plikToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(
			"Kalkulator odwrotnej notacji polskiej\nAutor: Konrad Skrzypczyk\nKierunek: Informatyka\nGrupa: 2\nSemestr: V\nRok akademicki: 2020/21",
			"O programie",
			MessageBoxButtons::OK
		);
	}

	private: System::Void BtnPath_Click(System::Object^ sender, System::EventArgs^ e) {
		this->folderBrowserDialog->ShowDialog();
		this->TextBoxPath->Text = this->folderBrowserDialog->SelectedPath;
	}

	private: System::Void BtnOutputPath_Click(System::Object^ sender, System::EventArgs^ e) {
		this->folderBrowserDialog->ShowDialog();
		this->TextBoxOutputPath->Text = this->folderBrowserDialog->SelectedPath;
	}

	public:
		delegate void LogDelegate(String^ text);

		void log(String^ s) {
			if (this->TextBoxLogs->InvokeRequired)
			{
				this->TextBoxLogs->BeginInvoke(gcnew LogDelegate(this, &MainWin::log), s);
			}
			else
			{
				s += "\r\n";
				this->TextBoxLogs->Text += s;
				this->TextBoxLogs->SelectionStart = this->TextBoxLogs->TextLength;
				this->TextBoxLogs->ScrollToCaret();
			}
			return;
		}

		void log(std::string text) {
			log(ToDotNetString(text));
		}

		void log(double val) {
			log(ToDotNetString(std::to_string(val)));
		}

	private:
		/** Konwertuje std::string na String^
		* @param buff: std::string
		* @return String^
		*/
		String^ ToDotNetString(std::string buff) {
			return msclr::interop::marshal_as<String^>(buff);
		}

		/** Konwertuje String^ na std::string
		* @param buff: String^
		* @return std::string
		*/
		std::string ToCppString(String^ buff) {
			return  msclr::interop::marshal_as<std::string>(buff);
		}

	public:
		// Typ CONVERT_TO_RPN potrzebny do wywolania funkcji ConvertToRPN z DLL
		typedef void (*CONVERT_TO_RPN)(const char*, char*, char);

		// Typ CALC_RPN potrzebny do wywolania funkcji CalcRPN z DLL
		typedef void (*CALC_RPN)(const char*, char, double&);

		CONVERT_TO_RPN convertToRpnProc;	// Uchwyt dla funkcji ConverToRPN 
		CALC_RPN calcRpnProc;				// Uchwyt dla funkcji CalcRPN 

	private: System::Void BtnDo_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->BtnDo->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		this->TextBoxLogs->Text = "";
		log(L"================PARAMETRY=================");
		log("Dane �r�d�owe: " + this->TextBoxPath->Text);
		log("Ilo�� w�tk�w: " + this->NumericThreads->Value.ToString());
		this->RadioBtnCpp->Checked ? log(L"Implementacja: C++") : log(L"Implementacja: ASM");

		HINSTANCE hDll = NULL;													// Uchwyt dla biblioteki

		log(L"=================BIBLIOTEKA=================");
		log(L"Pr�ba �adowania biblioteki DLL, prosz� czeka� ...");
		hDll = this->RadioBtnCpp->Checked ?
			LoadLibrary(TEXT("DLLCpp")) : LoadLibrary(TEXT("DLLAsm"));

		try {
			if (this->TextBoxOutputPath->Text == "") {
				throw(std::exception("Sciezka katalogu wynikowego jest pusta"));
			}

			if (hDll != NULL)
			{
				log(L"Uda�o za�adowa� si� bibliotek� DLL :)");
				log(L"Pr�ba �adowania potrzebnych funkcji biblotecznych, prosz� czeka� ...");
				
																							// Zaladowanie funkcji bibliotecznych
				convertToRpnProc = (CONVERT_TO_RPN)GetProcAddress(hDll, "ConvertToRPN");
				calcRpnProc = (CALC_RPN)GetProcAddress(hDll, "CalcRPN");
				int numOfThreads = static_cast<int>(this->NumericThreads->Value);			// Ilosc faktycznie uruchomionych watkow

				if (convertToRpnProc != NULL && calcRpnProc != NULL)
				{
					log(L"Uda�o za�adowa� si� wymagane funkcje biblioteczne :)");
					log(L"=================PLIKI=================");
					log(L"Analizowanie plikow w katalogu �r�d�owym");

					std::stack<std::string> filesInDir;										// Stos zawierajacy sciezki do plikow	
					for (const auto& entry : std::filesystem::directory_iterator(ToCppString(this->TextBoxPath->Text))) {
						if (entry.is_regular_file())
							filesInDir.push(entry.path().string());
					}

					if (filesInDir.size() == 0)
						throw std::runtime_error("Brak plik�w do przetworzenia...");
					// Sprawdzenie czy ilosc watkow > ilosci plikow
					if (filesInDir.size() < this->NumericThreads->Value)
					{
						log(L"Ilo�� plik�w jest mniejsza ni� zadeklarowana ilo�� w�tk�w");
						numOfThreads = filesInDir.size();									// Nie zezwalamy na "puste" watki
						log("Liczba w�tk�w zostaje zmniejszona do: " + std::to_string(numOfThreads));
					}

					log(L"Pobranie separatora dziesietnego");

					separator = std::use_facet< std::numpunct<char>>(std::locale("")).decimal_point();

					log(L"Segregacja plik�w ze wzgl�du na ilo�� w�tk�w");

					array<ThreadClass^>^ cf = gcnew array<ThreadClass^>(numOfThreads);		// Tablica obiektow watkowych
																							// Przyporzadkowanie plikow tak aby kazdy watek mial zblizona ilosc plikow
					int step = round(filesInDir.size() / numOfThreads);
					int counter = 0;
					for (counter = 0; counter < numOfThreads - 1; counter++) {
						cf[counter] = gcnew ThreadClass(this, counter + 1);
						for (int j = 0; j < step; j++) {
							cf[counter]->AddPath(ToDotNetString(filesInDir.top()));
							filesInDir.pop();
						}
					}
					cf[counter] = gcnew ThreadClass(this, counter + 1);
					while (filesInDir.size() > 0) {
						cf[counter]->AddPath(ToDotNetString(filesInDir.top()));
						filesInDir.pop();
					}

					log(L"Tworzenie w�tk�w");

					array<Thread^>^ threads = gcnew array<Thread^>(numOfThreads);			// Tablica watkow

					for (int i = 0; i < numOfThreads; i++) {
						threads[i] = gcnew Thread(gcnew ParameterizedThreadStart(&CalculateFiles::CalFile));
						threads[i]->IsBackground = true;
					}

					log(L"Rozpocz�cie wczytywania i przetwarzania danych z plik�w w w�tkach");
					log(L"Prosz� czeka� ...");
						
																							// Otrzymanie czasu poczatkowego timera
					LARGE_INTEGER frequency;
					QueryPerformanceFrequency(&frequency);
					LARGE_INTEGER start;
					QueryPerformanceCounter(&start);

					for (int i = 0; i < numOfThreads; i++) {
						log("Rozpocz�to w�tek: " + std::to_string(i+1));
						threads[i]->Start(cf[i]);
					}
																						// Wystartowanie watkow
						
					for (int i = 0; i < numOfThreads; i++)
						threads[i]->Join();

																							// Otrzymanie czasu koncowego timera
					LARGE_INTEGER end;
					QueryPerformanceCounter(&end);
					double interval = static_cast<double>(end.QuadPart - start.QuadPart) / frequency.QuadPart;

					// INVOKE
					this->TextBoxLogs->Invoke(gcnew LogDelegate(this, &MainWin::log),
						L"Zako�czono przetwarzanie plik�w w w�tkach");

					log(L"Pliki zosta�y utworzone w katalogu: " + this->TextBoxOutputPath->Text);
					log("Czas przetwarzania plik�w w sekundach: " + interval);
				}
				else throw std::runtime_error("Nie uda�o wczyta� si� wszystkich potrzebnych funkcji z DLL");
				FreeLibrary(hDll);															// Zwolnienie biblioteki
				hDll = NULL;																// Ustawienie uchwytu biblioteki na NULL
			}
			else throw std::runtime_error("Nie uda�o za�adowa� si� DLL: [hDLL is NULL]");
		}
		catch (const std::exception& ex) {
			log(L"=================ERROR===================");
			log(ex.what());
			FreeLibrary(hDll);																// Zwolnienie biblioteki
			hDll = NULL;
		}
		this->BtnDo->Cursor = System::Windows::Forms::Cursors::Hand;
		return;
	}

	/** Klasa zawierjaca obiekt watkowy */
	ref class ThreadClass {
	public:
		MainWin^ mw; // "this" MainWIn
		int i;		// numer watkow (logi)
		// Lista z sciezkami do przetworzenia
		System::Collections::Generic::List<String^>^ paths = gcnew System::Collections::Generic::List<String^>();
	public:
		ThreadClass(MainWin^ _mw, int _i) {
			mw = _mw;
			i = _i;
		}
		/* Metoda dodaje sciezke do listy
		* @param String^ p sciezka do pliku
		*/
		void AddPath(String^ p) {
			paths->Add(p);
		}
	};

	/** Klasa obslugujaca watek */
	ref class CalculateFiles {
	private:
		/* Metoda sprawdza poprawnosc pobranego wyrazenia
		* @param pobrany ciag znakow: std::string&
		* @param lokalny seperator dziesietny: const char&
		* @return komunikat bledu: std::string 
		* @waring w przypadku braku bledu funkcja zwraca pusty ciag ""
		* @warning metoda usuwa spacje z wyrazenia
		*/
		static std::string CheckMathExpressionInput(std::string& exp, char separator) {
			int i = 0;
			int openBracket = 0;
			int closeBracket = 0;
			bool wasNum = false;
			bool bSep = false;

																		// Usuwanie spacji
			for (i = 0; i < exp.size(); i++) {
				if (exp[i] == ' ') {
					exp.erase(i, 1);
					i--;
				}
			}

			i = 1;														// Ustawienie licznika na drugi znak
					
																		// Pierwszy znak albo cyfra albo minus
			if (exp[0] >= '0' && exp[0] <= '9') {
				wasNum = true;
			} else {
				if (exp[0] != '-' && exp[0] != '(' && (exp[0] < '0' || exp[0] > '9'))
					return "Niedozwolny znak na pozycji 1";
				if(exp[0] == '(') openBracket++;
			}

																		// Sprawdzenie poprawnosci znakow
			for (i; i < exp.size(); i++) {
				if (exp[i] >= '0' && exp[i] <= '9') {					// Sprawdzenie czy liczba ma max. 1 seperator
					wasNum = true;
					do {
						if(exp[i] == separator) {
							if (bSep == true)
								return "Niedopuszczalny seperator na pozycji na pozycji [bez spacji]: " + std::to_string(i + 1);
							if(i >= exp.size() - 1)
								return "Niedopuszczalny seperator na pozycji na pozycji [bez spacji]: " + std::to_string(i + 1);
							else if(exp[i+1] < '0' || exp[i+1] > '9')
								return "Niedopuszczalny seperator na pozycji na pozycji [bez spacji]: " + std::to_string(i + 1);
							bSep = true;
						}
						i++;
					} while ((exp[i] >= '0' && exp[i] <= '9') || exp[i] == separator);
					if (i > exp.size() - 1 || exp[i] == 0) break;
					bSep = false;
				}
																		// Analiza operatora, gdyby wystapil
				if (exp[i] == separator) {
					if(bSep)
						return "Niedozwolony seperator dziesietny na pozycji [bez spacji]: " + std::to_string(i + 1);
					else {
																		// Najprawdopodobniej wczytno seperator na poz. 2
						if (i == 1 && (exp[i - 1] >= '0' && exp[i - 1] <= '9')) {
							bSep = true;
							continue;
						}
						else return "Brak cyfry przed seperatorem dziesietnym na pozycji [bez spacji]: " + std::to_string(i + 1);
					}
					continue;
				}

				switch (exp[i]) {
				case '(':
					openBracket++;
																		// Nie zezwalamy na ()
					if (exp[i + 1] == ')') 
						return "() jest niedopuszczalne na pozycji [bez spacji]: " + std::to_string(i + 1);				
					break;
				case ')':
					closeBracket++;
					if (openBracket < closeBracket)						// Sprawdzenie kolejnosci nawiasow
						return "Nieporawna kolejno�� nawias�w na pozycji [bez spacji]: " + std::to_string(i + 1);
					if(i+1 < exp.size() && (exp[i+1] >= '0' && exp[i+1] <= '9'))
						return "Brak operatora matemtycznego na pozycji [bez spacji]: " + std::to_string(i + 2);
					break;
				case '/':
					if (i == exp.size() - 1)							// Ostatni znak nie moze by operatorem
						return "Niedozwolony operator na pozycji na pozycji [bez spacji]: " + std::to_string(i + 1);
					if (exp[i + 1] == '0')								// Sprawdzenei czy dzilimy przez 0
					{
						int j = i + 2;
						bool isZero = true;
																		// Sprawdzenie czy liczba jest 0
						while (j <= exp.size() - 1) {
							if ((exp[j] > '0' && exp[j] <= '9')) {
								isZero = false;
								break;
							}
							else if (exp[j] == separator || exp[j] == '0')
								j++;
							else break;
						}

						if (isZero) {
							return "Nie wolno dzielic przez 0 na pozycji [bez spacji]: " + std::to_string(i + 2);
						}

					}
				case '+':
				case '-':
				case '*':
																		// Sprawdzenie czy nie wystepuja dwa operatory kolo siebie
					if (exp[i - 1] == '+' || exp[i - 1] == '-' || exp[i - 1] == '*' || exp[i - 1] == '/')
						return "Niedozwolony operator na pozycji [bez spacji]: " + std::to_string(i + 1);
					if (exp[i + 1] == '+' || exp[i + 1] == '-' || exp[i + 1] == '*' || exp[i + 1] == '/')
						return "Niedozwolony operator na pozycji [bez spacji]: " + std::to_string(i + 1);
					if (i == exp.size() - 1)							// Ostatni znak nie moze by operatorem
						return "Niedozwolony operator na pozycji [bez spacji]: " + std::to_string(i + 1);
					if(exp[i] == '-' && (exp[i-1] == '(' && exp[i+1] == ')'))
						return "Niedozwolone jest stosowanie zapisu (-) na pozycji [bez spacji]: " + std::to_string(i + 1);
					break;
				default: 												// Pobranie niewiadomego znaku == false
					return "Niedozwolony znak na pozycji [bez spacji]: " + std::to_string(i + 1);
				}
			}
			if (openBracket != closeBracket)							// Sprawdzenie czy zgadza sie ilosc nawiasow
				return "Niepoprawna liczba nawias�w otwierj�cych i zamykaj�cych";

			if (wasNum == false) {
				return "Hmm... Co mam obliczy� skoro nie ma �adnej cyfry ani liczby";
			}

			return "";
		}

	public:
		/* Metoda wykonujaca obliczenia w watkach
		* @param Object^ data obiekt watkowy klasy ThreadClass
		*/
		static void CalFile(Object^ data)
		{	
			ThreadClass^ TC = (ThreadClass^)data;									// Zrzutowanie na typ pakujacy dane	
			std::ifstream file;														// Plik wejsciowy
			std::ofstream fOut;														// Plik wynikowy
			std::string srcPath;													// �cie�ka do pliku zrodlowego
			std::string outPath;													// �cie�ka do pliku wynikowego
			std::string fInputline;													// Zm. zawierajaca pobrana linie z pliku
			std::string fOutnName;													// Zm. zawierjaca nazwe pliku wynikowego
			std::string ext =														// "Rozszerzenie" pliku wynikowego
				TC->mw->RadioBtnCpp->Checked ? ".rCPP" : ".rASM";
			int bSlashPosNext;														// Zm. wykorzystywan do zdobycia nazwy pliku z sciezki
																					// Przetworzenie plikow w petli
			for each (String ^ %st in TC->paths) {
				srcPath = std::string();
				outPath = std::string();
				fInputline = std::string();
				
				srcPath = TC->mw->ToCppString(st);
				bSlashPosNext = srcPath.find_last_of('\\') + 1;
				fOutnName = srcPath.substr(bSlashPosNext, srcPath.size() - bSlashPosNext);
				outPath = TC->mw->ToCppString(TC->mw->TextBoxOutputPath->Text) + "\\" +fOutnName + ext;
	
				if (std::filesystem::file_size(srcPath) > 1024) {					// Sprawdzenie rozmiaru pliku (MAX. 1kB)
					fOut = std::ofstream(outPath, std::ios::out);
					if (fOut.is_open()) {
						fOut << "Plik [" + TC->mw->ToCppString(st) + "] jest za du�y\n";
						fOut << "Maksymalny rozmiar pliku to 1KB\n";
						fOut.close();
					}
					continue;
				}
				file = std::ifstream(srcPath, std::ios::in);
				if (file.is_open()) {
					std::getline(file, fInputline);													// Wczytanie wyrazenia z pliku
					file.close();
					double interval = 0;															
																									//Sprawdzenie poprawnosci i uzupelnienie danych
					std::string com = CheckMathExpressionInput(fInputline, TC->mw->separator);
					if (com != "") {
						fOut = std::ofstream(outPath, std::ios::out);
						if (fOut.is_open()) {
							fOut << "Wyra�enie wej�ciowe: " << fInputline << '\n';
							fOut << com;
							fOut.close();
						}
						continue;
					}
					char* rpn = (char*)calloc(round(fInputline.size() * 2.5), sizeof(char*));			// Alokacja pamieci dla wyrazenia ONP
					double result = 0;																	// Wynik wyrazenia ONP
					try {
																										// Timer start
						LARGE_INTEGER frequency;
						QueryPerformanceFrequency(&frequency);
						LARGE_INTEGER start;
						QueryPerformanceCounter(&start);
						(TC->mw->convertToRpnProc)(fInputline.c_str(), rpn, TC->mw->separator);			// Konwersja wyrazenia matemaycznego na ONP
						(TC->mw->calcRpnProc)(rpn, TC->mw->separator, result);							// Obliczenie wyrazenia ONP
																										// Otrzymanie czasu koncowego timera
						LARGE_INTEGER end;
						QueryPerformanceCounter(&end);
						interval = static_cast<double>(end.QuadPart - start.QuadPart) / frequency.QuadPart;
					}
					catch (const std::runtime_error& e) {
						fOut = std::ofstream(outPath, std::ios::out);
						if (fOut.is_open()) {
							fOut << "Wyra�enie wej�ciowe: " << fInputline << '\n';
							fOut << "Nie uda�o dokona� si� konwersji wyra�enia'\n'";
							fOut.close();
							delete rpn;
						}
						continue;
					}
					catch (...) {
						String^ msg = L"Wyst�pi� niespodziewany b��d dla pliku: " + st;
						MessageBox::Show(msg);
						delete rpn;
						continue;
					}

					fOut = std::ofstream(outPath, std::ios::out);						// Stworzenie pliku do zapisu
					if (fOut.good()) {
																						// Wypisanie wyrazenia ONP, czasu i wyniku do pliku 
						fOut << "Wyra�enie wej�ciowe: " << fInputline << '\n';
						fOut << "Uzyskane wyra�enie ONP: ";
						for (int c = 0; c < strlen(rpn); c++) {							// Zapis wyrazenia ONP do pliku wynikowego (this->TextBoxOutputPath->Text)
							fOut << rpn[c];
						}
																						// Zapis wyniku ONP do pliku wynikowego
						fOut.precision(std::numeric_limits<long double>::digits10);
						fOut << "\nUzyskany wynik oblicze�: " << result << "\n";
																						// Zapis czasu przetwarzania do pliku wynikowego
						fOut << "Czas wykonywania oblicze� [ConvertToRpn i CalcRpn} w sekunach: " << interval << '\n';
						fOut.close();
					} // if fOut.good()
					delete rpn;
				}
				else {
					String^ msg = L"Nie uda�o otworzy� si� pliku: " + st;
					MessageBox::Show(msg);
				}
			} // for each (String ^ %st in threadClass->paths)
			TC->mw->log("Sko�czono w�tek: " + std::to_string(TC->i));
		}
	}; 	
}; 
}
