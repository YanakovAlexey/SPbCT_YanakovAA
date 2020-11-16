#pragma once
#include <iostream>
#include <mutex>
#include <fstream>
#include <vector>
#include <thread>
#include <iterator>
#include <string>
#include <algorithm>
#include "FillDLL.h"

using namespace std;

namespace Practic {

	

	static vector<wchar_t> str1(10) , str2(10), str3(10), str4(10), str5(10), str6(10), str7(10), str8(10), str9(10), str10(10);

	static void sortirovka(vector<wchar_t>& v)
	{
		sort(v.begin(), v.end());
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::TextBox^ textBox2;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Обработать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 63);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 252);
			this->textBox2->TabIndex = 11;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 455);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));
		char buff[100];

		buff[99] = fillstr(&buff[0]);
		
		int j = 0;
		for (int i = 0; i < 10; i++)
		{
				str1.at(j) = buff[i];//Обработка строки 1
				j++;
		}
		j = 0;
		for (int i = 10; i < 20; i++)
		{
		
			str2.at(j) = buff[i];//Обработка строки 2
			j++;
		}
		j = 0;
		for (int i = 20; i < 30; i++)
		{

			str3.at(j) = buff[i];//Обработка строки 3
			j++;
		}
		j = 0;
		for (int i = 30; i < 40; i++)
		{

			str4.at(j) = buff[i];//Обработка строки 4
			j++;
		}
		j = 0;
		for (int i = 40; i < 50; i++)
		{

			str5.at(j) = buff[i];//Обработка строки 5
			j++;
		}
		j = 0;
		for (int i = 50; i < 60; i++)
		{

			str6.at(j) = buff[i];//Обработка строки 6
			j++;
		}
		j = 0;
		for (int i = 60; i < 70; i++)
		{

			str7.at(j) = buff[i];//Обработка строки 7
			j++;
		}
		j = 0;
		for (int i = 70; i < 80; i++)
		{

			str8.at(j) = buff[i];//Обработка строки 8
			j++;
		}
		j = 0;
		for (int i = 80; i < 90; i++)
		{

			str9.at(j) = buff[i];//Обработка строки 9
			j++;
		}
		j = 0;
		for (int i = 90; i < 100; i++)
		{

			str10.at(j) = buff[i];//Обработка строки 10
			j++;
		}
		j = 0;
		sort(str1.begin(), str1.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str2.begin(), str2.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str3.begin(), str3.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str4.begin(), str4.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str5.begin(), str5.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str6.begin(), str6.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str7.begin(), str7.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str8.begin(), str8.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str9.begin(), str9.end());//Сортировка по алфавиту(в порядке убывания)
		sort(str10.begin(), str10.end());//Сортировка по алфавиту(в порядке убывания)

		thread potok1(sortirovka, str1);
		thread potok2(sortirovka, str2);
		thread potok3(sortirovka, str3);
		thread potok4(sortirovka, str4);
		thread potok5(sortirovka, str5);
		thread potok6(sortirovka, str6);
		thread potok7(sortirovka, str7);
		thread potok8(sortirovka, str8);
		thread potok9(sortirovka, str9);
		thread potok10(sortirovka, str10);

		potok1.join();//Добавление потоков для каждой строки
		potok2.join();//Добавление потоков для каждой строки
		potok3.join();//Добавление потоков для каждой строки
		potok4.join();//Добавление потоков для каждой строки
		potok5.join();//Добавление потоков для каждой строки
		potok6.join();//Добавление потоков для каждой строки
		potok7.join();//Добавление потоков для каждой строки
		potok8.join();//Добавление потоков для каждой строки
		potok9.join();//Добавление потоков для каждой строки
		potok10.join();//Добавление потоков для каждой строки

		for (int i = 0; i < 10; i++)
			textBox2->Text += str1[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str2[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str3[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str4[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str5[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str6[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str7[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str8[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str9[i];
		textBox2->Text += " ";// Вывод строк в TextBox
		for (int i = 0; i < 10; i++)
			textBox2->Text += str10[i];
		textBox2->Text += " ";// Вывод строк в TextBox

	}
};
}
