#pragma once
#include <cmath>
namespace Прямыеизмерения {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 94);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 94);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(245, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 22);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(295, 94);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 22);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(345, 94);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 22);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(395, 94);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 22);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"0";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(37, 220);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 22);
			this->textBox8->TabIndex = 7;
			this->textBox8->Text = L"0";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(87, 220);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(44, 22);
			this->textBox9->TabIndex = 8;
			this->textBox9->Text = L"0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(137, 220);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(44, 22);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(187, 220);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(44, 22);
			this->textBox11->TabIndex = 10;
			this->textBox11->Text = L"0";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(237, 220);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(44, 22);
			this->textBox12->TabIndex = 11;
			this->textBox12->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(287, 220);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(44, 22);
			this->textBox13->TabIndex = 12;
			this->textBox13->Text = L"0";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(337, 220);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(44, 22);
			this->textBox14->TabIndex = 13;
			this->textBox14->Text = L"0";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(387, 220);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(44, 22);
			this->textBox15->TabIndex = 14;
			this->textBox15->Text = L"0";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(437, 220);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(44, 22);
			this->textBox16->TabIndex = 15;
			this->textBox16->Text = L"0";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(487, 220);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(44, 22);
			this->textBox17->TabIndex = 16;
			this->textBox17->Text = L"0";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(37, 261);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(44, 22);
			this->textBox18->TabIndex = 17;
			this->textBox18->Text = L"0";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(87, 261);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(44, 22);
			this->textBox19->TabIndex = 18;
			this->textBox19->Text = L"0";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(137, 261);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(44, 22);
			this->textBox20->TabIndex = 19;
			this->textBox20->Text = L"0";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(187, 261);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(44, 22);
			this->textBox21->TabIndex = 20;
			this->textBox21->Text = L"0";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(237, 261);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(44, 22);
			this->textBox22->TabIndex = 21;
			this->textBox22->Text = L"0";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(287, 261);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(44, 22);
			this->textBox23->TabIndex = 22;
			this->textBox23->Text = L"0";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(337, 261);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(44, 22);
			this->textBox24->TabIndex = 23;
			this->textBox24->Text = L"0";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(387, 261);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(44, 22);
			this->textBox25->TabIndex = 24;
			this->textBox25->Text = L"0";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(437, 261);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(44, 22);
			this->textBox26->TabIndex = 25;
			this->textBox26->Text = L"0";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(487, 261);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(44, 22);
			this->textBox27->TabIndex = 26;
			this->textBox27->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(211, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 17);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Обработка прямых измерений";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(492, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 17);
			this->label2->TabIndex = 28;
			this->label2->Text = L"U1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(574, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 17);
			this->label3->TabIndex = 29;
			this->label3->Text = L"U2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(37, 393);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 22);
			this->textBox28->TabIndex = 31;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(387, 392);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 22);
			this->textBox29->TabIndex = 32;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(493, 393);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 17);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Среднее u2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(143, 392);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 17);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Среднее u1";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(37, 452);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 22);
			this->textBox30->TabIndex = 35;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(387, 451);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(100, 22);
			this->textBox31->TabIndex = 36;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(234, 425);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 17);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Оценка дисперсии";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(37, 508);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 22);
			this->textBox32->TabIndex = 39;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(387, 508);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(100, 22);
			this->textBox33->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(143, 452);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 17);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Случ. погрешности";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(493, 451);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 17);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Случ. погрешности";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(143, 511);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 17);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Погрешности";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(493, 508);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 17);
			this->label10->TabIndex = 44;
			this->label10->Text = L"Погрешности";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(37, 565);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(100, 22);
			this->textBox34->TabIndex = 45;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(387, 565);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 22);
			this->textBox35->TabIndex = 46;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(184, 568);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(171, 17);
			this->label11->TabIndex = 47;
			this->label11->Text = L"Погрешность измерения";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(211, 642);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(196, 17);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Отличный софт от Николая!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(647, 694);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Прямые измерения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// Заполнение массивовов данными
		float mass_u1[7];
		float mass_u2[20];
		int i;
		mass_u1[0] = System::Convert::ToDouble(textBox1->Text);
		mass_u1[1] = System::Convert::ToDouble(textBox2->Text);
		mass_u1[2] = System::Convert::ToDouble(textBox3->Text);
		mass_u1[3] = System::Convert::ToDouble(textBox4->Text);
		mass_u1[4] = System::Convert::ToDouble(textBox5->Text);
		mass_u1[5] = System::Convert::ToDouble(textBox6->Text);
		mass_u1[6] = System::Convert::ToDouble(textBox7->Text);

		mass_u2[0] = System::Convert::ToDouble(textBox8->Text);
		mass_u2[1] = System::Convert::ToDouble(textBox9->Text);
		mass_u2[2] = System::Convert::ToDouble(textBox10->Text);
		mass_u2[3] = System::Convert::ToDouble(textBox11->Text);
		mass_u2[4] = System::Convert::ToDouble(textBox12->Text);
		mass_u2[5] = System::Convert::ToDouble(textBox13->Text);
		mass_u2[6] = System::Convert::ToDouble(textBox14->Text);
		mass_u2[7] = System::Convert::ToDouble(textBox15->Text);
		mass_u2[8] = System::Convert::ToDouble(textBox16->Text);
		mass_u2[9] = System::Convert::ToDouble(textBox17->Text);
		mass_u2[10] = System::Convert::ToDouble(textBox18->Text);
		mass_u2[11] = System::Convert::ToDouble(textBox19->Text);
		mass_u2[12] = System::Convert::ToDouble(textBox20->Text);
		mass_u2[13] = System::Convert::ToDouble(textBox21->Text);
		mass_u2[14] = System::Convert::ToDouble(textBox22->Text);
		mass_u2[15] = System::Convert::ToDouble(textBox23->Text);
		mass_u2[16] = System::Convert::ToDouble(textBox24->Text);
		mass_u2[17] = System::Convert::ToDouble(textBox25->Text);
		mass_u2[18] = System::Convert::ToDouble(textBox26->Text);
		mass_u2[19] = System::Convert::ToDouble(textBox27->Text);
		// Вычисленеи среднего значения
		float u1_half = 0;
		float u2_half = 0;
		// Значение количества введенных данных(чисел)
		int n1 = 0;
		int n2 = 0;

		for (i = 0; i < 7; i++)
		{
			if (mass_u1[i] != 0)
			{
				u1_half = u1_half + mass_u1[i];
				n1++;
			}
		}
		for (i = 0; i < 20; i++)
		{
			if (mass_u2[i] != 0)
			{
				u2_half = u2_half + mass_u2[i];
				n2++;
			}
		}
		// Среднее значение
		u1_half = u1_half / n1;
		u2_half = u2_half / n2;

		n1 = 0;
		n2 = 0;
		textBox28->Text = System::Convert::ToString(u1_half);
		textBox29->Text = System::Convert::ToString(u2_half);
		// СКО случ. погрешности
		float sko_u1 = 0;
		float sko_u2 = 0;

		for (i = 0; i < 7; i++)
		{
			if (mass_u1[i] != 0)
			{
				sko_u1 = sko_u1 + pow((mass_u1[i] - u1_half), 2);
				n1++;
			}
		}
		for (i = 0; i < 20; i++)
		{
			if (mass_u2[i] != 0)
			{
				sko_u2 = sko_u2 + pow((mass_u2[i] - u2_half), 2);
				n2++;
			}
		}
		sko_u1 = sko_u1 / (n1-1);
		sko_u2 = sko_u2 / (n2-1);

		textBox30->Text = System::Convert::ToString(sko_u1);
		textBox31->Text = System::Convert::ToString(sko_u2);
		// СКО погрешности
		float sko_u1_half = 0;
		float sko_u2_half = 0;

		sko_u1_half = sko_u1 / n1;
		sko_u2_half = sko_u2 / n2;

		textBox32->Text = System::Convert::ToString(sko_u1_half);
		textBox33->Text = System::Convert::ToString(sko_u2_half);
		// Извлечение корня
		sko_u1_half = pow(sko_u1_half, 0.5);
		sko_u2_half = pow(sko_u2_half, 0.5);
		// Погрешности
		float inaccuracy_u1 = 0;
		float inaccuracy_u2 = 0;
		// Коэффициенты Стьюдента
		float mass_koef_stud[10] = {12.7, 4.3, 3.2, 2.8, 2.6, 2.4, 2.3, 2.2, 2.1, 2.0};

		if (n1 == 2)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[0];
		}
		if (n1 == 3)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[1];
		}
		if (n1 == 4)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[2];
		}
		if (n1 == 5)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[3];
		}
		if (n1 == 6)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[4];
		}
		if (n1 == 7 || n1 == 8)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[5];
		}
		if (n1 == 9 || n1 == 10)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[6];
		}
		if (n1 >= 11 && n1 < 15)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[7];
		}
		if (n1 >= 16 && n1 < 21)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[8];
		}
		if (n1 > 20)
		{
			inaccuracy_u1 = sko_u1_half * mass_koef_stud[9];
		}



		if (n2 == 2)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[0];
		}
		if (n2 == 3)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[1];
		}
		if (n2 == 4)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[2];
		}
		if (n2 == 5)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[3];
		}
		if (n2 == 6)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[4];
		}
		if (n2 == 7 || n2 == 8)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[5];
		}
		if (n2 == 9 || n2 == 10)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[6];
		}
		if (n2 >= 11 && n2 < 15)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[7];
		}
		if (n2 >= 16 && n2 < 21)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[8];
		}
		if (n2 > 20)
		{
			inaccuracy_u2 = sko_u2_half * mass_koef_stud[9];
		}

		textBox34->Text = System::Convert::ToString(inaccuracy_u1);
		textBox35->Text = System::Convert::ToString(inaccuracy_u2);
	}
};
}
