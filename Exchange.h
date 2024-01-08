#pragma once
namespace L5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Exchange
	/// </summary>
	public ref class Exchange : public System::Windows::Forms::Form
	{
	public:
		Exchange(void)
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
		~Exchange()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ convertGB;
	private: System::Windows::Forms::TextBox^ inputTB;

	private: System::Windows::Forms::Label^ currency1Lbl;
	private: System::Windows::Forms::TextBox^ outputTB;








	private: System::Windows::Forms::Label^ staticLbl1;
	private: System::Windows::Forms::Label^ currency2Lbl;

	private: System::Windows::Forms::Label^ rateLbl;
	private: System::Windows::Forms::TextBox^ rateInput;
	private: System::Windows::Forms::GroupBox^ currencyGB;
	private: System::Windows::Forms::RadioButton^ usdRubRB;

	private: System::Windows::Forms::RadioButton^ rubEurRB;
	private: System::Windows::Forms::RadioButton^ rubUsdRB;
	private: System::Windows::Forms::RadioButton^ eurRubRB;
	private: System::Windows::Forms::Label^ StaticLbl2;
	private: System::Windows::Forms::TextBox^ originalTB;
	private: System::Windows::Forms::Label^ warningLbl;
	private: System::Windows::Forms::Button^ exchangeBtn;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Exchange::typeid));
			this->convertGB = (gcnew System::Windows::Forms::GroupBox());
			this->originalTB = (gcnew System::Windows::Forms::TextBox());
			this->staticLbl1 = (gcnew System::Windows::Forms::Label());
			this->currency2Lbl = (gcnew System::Windows::Forms::Label());
			this->currency1Lbl = (gcnew System::Windows::Forms::Label());
			this->outputTB = (gcnew System::Windows::Forms::TextBox());
			this->warningLbl = (gcnew System::Windows::Forms::Label());
			this->inputTB = (gcnew System::Windows::Forms::TextBox());
			this->rateLbl = (gcnew System::Windows::Forms::Label());
			this->rateInput = (gcnew System::Windows::Forms::TextBox());
			this->currencyGB = (gcnew System::Windows::Forms::GroupBox());
			this->eurRubRB = (gcnew System::Windows::Forms::RadioButton());
			this->usdRubRB = (gcnew System::Windows::Forms::RadioButton());
			this->rubEurRB = (gcnew System::Windows::Forms::RadioButton());
			this->rubUsdRB = (gcnew System::Windows::Forms::RadioButton());
			this->StaticLbl2 = (gcnew System::Windows::Forms::Label());
			this->exchangeBtn = (gcnew System::Windows::Forms::Button());
			this->convertGB->SuspendLayout();
			this->currencyGB->SuspendLayout();
			this->SuspendLayout();
			// 
			// convertGB
			// 
			this->convertGB->Controls->Add(this->originalTB);
			this->convertGB->Controls->Add(this->staticLbl1);
			this->convertGB->Controls->Add(this->currency2Lbl);
			this->convertGB->Controls->Add(this->currency1Lbl);
			this->convertGB->Controls->Add(this->outputTB);
			resources->ApplyResources(this->convertGB, L"convertGB");
			this->convertGB->Name = L"convertGB";
			this->convertGB->TabStop = false;
			// 
			// originalTB
			// 
			resources->ApplyResources(this->originalTB, L"originalTB");
			this->originalTB->Name = L"originalTB";
			this->originalTB->ReadOnly = true;
			this->originalTB->TabStop = false;
			// 
			// staticLbl1
			// 
			resources->ApplyResources(this->staticLbl1, L"staticLbl1");
			this->staticLbl1->Name = L"staticLbl1";
			// 
			// currency2Lbl
			// 
			resources->ApplyResources(this->currency2Lbl, L"currency2Lbl");
			this->currency2Lbl->Name = L"currency2Lbl";
			// 
			// currency1Lbl
			// 
			resources->ApplyResources(this->currency1Lbl, L"currency1Lbl");
			this->currency1Lbl->Name = L"currency1Lbl";
			// 
			// outputTB
			// 
			resources->ApplyResources(this->outputTB, L"outputTB");
			this->outputTB->Name = L"outputTB";
			this->outputTB->ReadOnly = true;
			this->outputTB->TabStop = false;
			// 
			// warningLbl
			// 
			resources->ApplyResources(this->warningLbl, L"warningLbl");
			this->warningLbl->Name = L"warningLbl";
			// 
			// inputTB
			// 
			resources->ApplyResources(this->inputTB, L"inputTB");
			this->inputTB->Name = L"inputTB";
			this->inputTB->TextChanged += gcnew System::EventHandler(this, &Exchange::textBoxTextChanged);
			this->inputTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Exchange::textBoxKeyPress);
			this->inputTB->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Exchange::textBoxValidating);
			// 
			// rateLbl
			// 
			resources->ApplyResources(this->rateLbl, L"rateLbl");
			this->rateLbl->Name = L"rateLbl";
			// 
			// rateInput
			// 
			resources->ApplyResources(this->rateInput, L"rateInput");
			this->rateInput->Name = L"rateInput";
			this->rateInput->TextChanged += gcnew System::EventHandler(this, &Exchange::textBoxTextChanged);
			this->rateInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Exchange::textBoxKeyPress);
			this->rateInput->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Exchange::textBoxValidating);
			// 
			// currencyGB
			// 
			this->currencyGB->Controls->Add(this->eurRubRB);
			this->currencyGB->Controls->Add(this->usdRubRB);
			this->currencyGB->Controls->Add(this->rubEurRB);
			this->currencyGB->Controls->Add(this->rubUsdRB);
			resources->ApplyResources(this->currencyGB, L"currencyGB");
			this->currencyGB->Name = L"currencyGB";
			this->currencyGB->TabStop = false;
			// 
			// eurRubRB
			// 
			resources->ApplyResources(this->eurRubRB, L"eurRubRB");
			this->eurRubRB->Name = L"eurRubRB";
			this->eurRubRB->UseVisualStyleBackColor = true;
			this->eurRubRB->CheckedChanged += gcnew System::EventHandler(this, &Exchange::eurRubRB_CheckedChanged);
			// 
			// usdRubRB
			// 
			resources->ApplyResources(this->usdRubRB, L"usdRubRB");
			this->usdRubRB->Name = L"usdRubRB";
			this->usdRubRB->UseVisualStyleBackColor = true;
			this->usdRubRB->CheckedChanged += gcnew System::EventHandler(this, &Exchange::usdRubRB_CheckedChanged);
			// 
			// rubEurRB
			// 
			resources->ApplyResources(this->rubEurRB, L"rubEurRB");
			this->rubEurRB->Name = L"rubEurRB";
			this->rubEurRB->UseVisualStyleBackColor = true;
			this->rubEurRB->CheckedChanged += gcnew System::EventHandler(this, &Exchange::rubEurRB_CheckedChanged);
			// 
			// rubUsdRB
			// 
			resources->ApplyResources(this->rubUsdRB, L"rubUsdRB");
			this->rubUsdRB->Checked = true;
			this->rubUsdRB->Name = L"rubUsdRB";
			this->rubUsdRB->TabStop = true;
			this->rubUsdRB->UseVisualStyleBackColor = true;
			this->rubUsdRB->CheckedChanged += gcnew System::EventHandler(this, &Exchange::rubUsdRB_CheckedChanged);
			// 
			// StaticLbl2
			// 
			resources->ApplyResources(this->StaticLbl2, L"StaticLbl2");
			this->StaticLbl2->Name = L"StaticLbl2";
			// 
			// exchangeBtn
			// 
			resources->ApplyResources(this->exchangeBtn, L"exchangeBtn");
			this->exchangeBtn->Name = L"exchangeBtn";
			this->exchangeBtn->UseVisualStyleBackColor = true;
			this->exchangeBtn->Click += gcnew System::EventHandler(this, &Exchange::exchangeBtn_Click);
			// 
			// Exchange
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->exchangeBtn);
			this->Controls->Add(this->warningLbl);
			this->Controls->Add(this->StaticLbl2);
			this->Controls->Add(this->currencyGB);
			this->Controls->Add(this->rateInput);
			this->Controls->Add(this->rateLbl);
			this->Controls->Add(this->convertGB);
			this->Controls->Add(this->inputTB);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Exchange";
			this->ShowIcon = false;
			this->convertGB->ResumeLayout(false);
			this->convertGB->PerformLayout();
			this->currencyGB->ResumeLayout(false);
			this->currencyGB->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Массив курсов для каждого вида конвертации
		double* rate = new double[4] {0, 0, 0, 0};
		// Индекс установленного режима
		int mode = 0;

		/* 
		* Вспомогательная функция для конвертации строки в число
		* Считает десятичным разделителем запятую
		* При невозможности конвертации возвращает ноль
		*/
		double convertToDouble(String^ string)
		{
			try
			{
				return Math::Floor(System::Convert::ToDouble(string->Replace(L",", L"."))*100)/100;
			}
			catch (FormatException^ e)
			{
				return 0;
			}
		}

		/*
		* Вспомогательная функция для конвертации числа в строку
		* Считает десятичным разделителем запятую
		* Всегда оставляет два знака после запятой
		*/
		String^ convertToString(double number)
		{
			return (Math::Floor(number * 100) / 100).ToString(L"f2")->Replace(L".", L",");
		}

		// Очистка выводов
		void clearOutput() {
			originalTB->Text = L"";
			outputTB->Text = L"";
			warningLbl->Text = L"";
		}

		// Фильтрация ввода
		void textBoxKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			// Определяем используемый текс бокс и его характеристики
			const auto textBox = safe_cast<TextBox^>(sender); // элемент
			const auto text = textBox->Text; // текст
			const auto length = text->Length; // длина текста
			const auto integerText = text->Split(',')[0]; // целая часть
			const auto integerLength = text->Length; // длина целой части
			String^ fractionalText; // дробная часть
			try
			{
				fractionalText = text->Split(',')[1];
			}
			catch (System::IndexOutOfRangeException^ e)
			{
				fractionalText = L"";
			}
			const auto fractionalLength = fractionalText->Length; // длина дробной части
			// замена точки на запятую
			if (e->KeyChar == '.')
				e->KeyChar = ',';
			if (!Char::IsControl(e->KeyChar) && // возможность использовать управляющие символы
				(
					(
						!Char::IsDigit(e->KeyChar) &&
						e->KeyChar != ',' // удаление символов кроме цифр и запятых
					) ||
					(
						(
							length == 0 || // нельзя поставить запятую в начале числа
							text->IndexOf(L",") != -1 // нельзя поставить две запятых
						) &&
						e->KeyChar == ','
					) ||
					(
						textBox->SelectionStart > length - 3 &&
						fractionalLength == 2 // нельзя ввести больше трех знаков после запятой
					)
				))
				e->Handled = true; // отключение ввода
		}

		// Коррекция введенного числа
		void textBoxValidating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			textBox->Text = textBox->Text == L"" ? L"" : convertToString(convertToDouble(textBox->Text));
		}

		// обновление курса и очистка выводов при начале следующего ввода
		void textBoxTextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			rate[mode] = convertToDouble(rateInput->Text);
			clearOutput();
		}

		// Обработчики нажатия на радио боксы
		void rubUsdRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			mode = 0;
			rateLbl->Text = L"Курс обмена (руб./$):";
			rateInput->Text = rate[mode] == 0 ? L"" : rate[mode].ToString(L"f2");
			currency1Lbl->Text = L"руб.";
			currency2Lbl->Text = L"$";
			clearOutput();
		}

		void usdRubRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			mode = 1;
			rateLbl->Text = L"Курс обмена (руб./$):";
			rateInput->Text = rate[mode] == 0 ? L"" : rate[mode].ToString(L"f2");
			currency1Lbl->Text = L"$";
			currency2Lbl->Text = L"руб.";
			clearOutput();
		}

		void rubEurRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			mode = 2;
			rateLbl->Text = L"Курс обмена (руб./€):";
			rateInput->Text = rate[mode] == 0 ? L"" : rate[mode].ToString(L"f2");
			currency1Lbl->Text = L"руб.";
			currency2Lbl->Text = L"€";
			clearOutput();
		}

		void eurRubRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			mode = 3;
			rateLbl->Text = L"Курс обмена (руб./€):";
			rateInput->Text = rate[mode] == 0 ? L"" : rate[mode].ToString(L"f2");
			currency1Lbl->Text = L"€";
			currency2Lbl->Text = L"руб.";
			clearOutput();
		}

		void exchangeBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Обработка некорректных вводов
			const auto input = convertToDouble(inputTB->Text);
			if (rateInput->Text == L"")
			{
				warningLbl->Text = L"Курс не введён. Операция не произведена";
				return;
			}

			if (rate[mode] == 0)
			{
				warningLbl->Text = L"Введённый курс равен нулю. Операция не произведена";
				return;
			}

			if (inputTB->Text == L"")
			{
				warningLbl->Text = L"Сумма не введена. Операция не произведена";
				return;
			}

			if (input == 0)
			{
				warningLbl->Text = L"Введённая сумма равна нулю. Операция не произведена";
				return;
			}

			String^ res;
			// При режимах с чётными индексами перевод из рублей, с нечётными в
			if(mode % 2 == 0)
					res = convertToString(input / rate[mode]);
			else
					res = convertToString(input * rate[mode]);
			if (res == L"0,00")
			{
				warningLbl->Text = L"Введённая сумма слишком мала. Операция не произведена";
			}
			else
			{
				originalTB->Text = inputTB->Text;
				outputTB->Text = res;
			}
		}
	};
}
