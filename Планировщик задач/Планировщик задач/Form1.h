#pragma once

#include <string.h>

namespace CppCLR_WinformsProjekt {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите задачу";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(12, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(284, 12);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(238, 94);
			this->checkedListBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(283, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(239, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Удалить выбранные задачи";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(283, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(239, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Удалить все задачи";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 116);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Сохранить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 145);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Загрузить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(16, 204);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(506, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Удалить сохраненные задачи";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(534, 241);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(550, 280);
			this->Name = L"Form1";
			this->Text = L"Планировщик задач";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { /*Добавление задачи*/
		checkedListBox1->Items->Add(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { /*Удаление выбранных задач*/
		for (int i = checkedListBox1->Items->Count-1; i >= 0; i--)
		{
			if (checkedListBox1->GetItemChecked(i)) checkedListBox1->Items->RemoveAt(i);
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { /*Удаление всех задач*/
		checkedListBox1->Items->Clear();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { /*Сохранение задач*/
		
		if (!File::Exists("text.txt")) System::IO::File::Create("text.txt")->Close(); /*Проверка на существование файла*/

		System::String ^path = "text.txt";

		for (int i = 0; i < checkedListBox1->Items->Count; i++)
		{
			System::String ^contents = checkedListBox1->Items[i]->ToString();

			//File::OpenWrite(path);

			File::AppendAllText(path, contents);

			File::AppendAllText(path, "$");
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { /*Загрузка задач*/
		if (!File::Exists("text.txt")) MessageBox::Show("Файл не найден!", "Ошибка"); /*Существует ли файл*/
		else
		{
			int i = 0;
			bool Found = false;
			
			System::String ^contents = File::ReadAllText("text.txt");

			if (contents == "") /*Есть ли задачи в файле. Если нету, то сообщение об ошибке*/
			{
				MessageBox::Show("Запланированных задач нету!", "Ошибка");
				return;
			}

			System::String ^text = "";

			do /*Загрузка задач в CheckListBox*/
			{
				if (contents[i] != '$') text += contents[i]; /*Формирование текста*/
				else
				{
					for (int j = 0; j < checkedListBox1->Items->Count; j++)
					{
						if(checkedListBox1->Items[j]->ToString() == text) Found = true; /*Проверка на совпадающие задачи*/
					}
					if(!Found) checkedListBox1->Items->Add(text); /*Если совпадение не найдено, то элемент добавим в список*/
					text = "";
				}
				i++;
				Found = false;
			} while (i<contents->Length);
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) { /*Удаляем задачи в файле text.txt*/
		File::WriteAllText("text.txt", ""); /*Просто записываем в файл пустоту*/
	}
};
}
