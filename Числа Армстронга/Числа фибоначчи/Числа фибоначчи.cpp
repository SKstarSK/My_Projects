// Числа фибоначчи.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

/*Будем искать Армстронга*/

void CompareNumbers(int i, int j, int thepower);

void CheckPowerSum(int check_number, int number_i, int number, int thepower);

void FindNumberFibonachi(int start, int end) /*Функция поиска чисел*/
{
	int j = 0;

	for (int i = start; i < end; i++)
	{
		if (i > 0 && i < 10) /*Если число до 10*/
		{
			if (pow(i, 1) == i) cout << i << endl;
		}
		else if (i >= 10 && i < 100) /*Если число до 100*/
		{
			j = 1;
			CompareNumbers(i, j, 2);
		}
		else if (i >= 100 && i < 1000) /*Число до 1000*/
		{
			j = 2;
			CompareNumbers(i, j, 3);
		}
		else if (i >= 1000 && i < 10000) /*Число до 10000*/
		{
			j = 3;
			CompareNumbers(i, j, 4);
		}
		else if (i >= 10000 && i < 100000) /*Число до 100000*/
		{
			j = 4;
			CompareNumbers(i, j, 5);
		}
		else if (i >= 100000 && i < 1000000) /*Число до 1000000*/
		{
			j = 5;
			CompareNumbers(i, j, 6);
		}
		else if (i >= 1000000 && i < 10000000) /*Число до 10000000*/
		{
			j = 6;
			CompareNumbers(i, j, 7);
		}

	}
}

void CompareNumbers(int i, int j, int thepower) /*Проверка чисел на возрастание цифр*/
{
	int NumberArr[7] = { 0,0,0,0,0,0,0 };
	int number = 0;
	int number_i = 0;
	int check_number = 0;
	bool FlagGoOut = false; /*Нужно выходить из цикла, т.к цифры идут не в порядке возрастания*/

	number_i = i;
	number = 0;
	while (number_i != 0)
	{
		NumberArr[j] = number_i % 10;

		switch (thepower)
		{
		case 2:
			if (NumberArr[0] <= NumberArr[1])
			{
				number += pow(number_i % 10, thepower);
				number_i /= 10;
				j--;
			}
			else FlagGoOut = true;
			break;
		case 3:
			if (NumberArr[0] <= NumberArr[1] && NumberArr[1] <= NumberArr[2])
			{
				number += pow(number_i % 10, thepower);
				number_i /= 10;
				j--;
			}
			else FlagGoOut = true;
			break;
		case 4:
			if (NumberArr[0] <= NumberArr[1] && NumberArr[1] <= NumberArr[2] && NumberArr[2] <= NumberArr[3])
			{
				number += pow(number_i % 10, thepower);
				number_i /= 10;
				j--;
			}
			else FlagGoOut = true;
			break;
		case 5:
			if (NumberArr[0] <= NumberArr[1] && NumberArr[1] <= NumberArr[2] && NumberArr[2] <= NumberArr[3] && NumberArr[3] <= NumberArr[4])
			{
				number += pow(number_i % 10, thepower);
				number_i /= 10;
				j--;
			}
			else FlagGoOut = true;
			break;
		case 6:
			if (NumberArr[0] <= NumberArr[1] && NumberArr[1] <= NumberArr[2] && NumberArr[2] <= NumberArr[3] && NumberArr[3] <= NumberArr[4] && NumberArr[4] <= NumberArr[5])
			{
				number += pow(number_i % 10, thepower);
				number_i /= 10;
				j--;
			}
			else FlagGoOut = true;
			break;
		case 7:
			if (NumberArr[0] <= NumberArr[1] && NumberArr[1] <= NumberArr[2] && NumberArr[2] <= NumberArr[3] && NumberArr[3] <= NumberArr[4] && NumberArr[4] <= NumberArr[5] && NumberArr[5] <= NumberArr[6])
			{
				number += pow(number_i % 10, thepower);
				number_i /= 10;
				j--;
			}
			else FlagGoOut = true;
			break;
		}
		if (FlagGoOut)
		{
			NumberArr[0] = NumberArr[1] = NumberArr[2] = NumberArr[3] = NumberArr[4] = NumberArr[5] = NumberArr[6] = 0;
			number_i = 0;
			FlagGoOut = true;
			break;
		}

		
	}
	if (!FlagGoOut && number > i) CheckPowerSum(check_number = number, number_i = number, number, thepower);
}

void CheckPowerSum(int check_number, int number_i, int number, int thepower)
{
	number = 0;
	while (number_i != 0)
	{
		number += pow(number_i % 10, thepower);
		number_i /= 10;
	}
	if (check_number == number) cout << check_number << endl;
}

int main()
{
	auto begin = std::chrono::steady_clock::now();
	setlocale(0, "Rus");

	cout << "Давайте найдем числа Армстронга от 1 до 10000000" << endl;

	FindNumberFibonachi(1, 10000000);

	thread th1(FindNumberFibonachi, 1, 2500000);
	thread th2(FindNumberFibonachi, 2500001, 5000000);
	thread th3(FindNumberFibonachi, 5000001, 7500000);
	thread th4(FindNumberFibonachi, 7500001, 10000000);

	th1.join();
	th2.join();
	th3.join();
	th4.join();

	auto end = std::chrono::steady_clock::now();

	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

	std::cout << "The time: " << elapsed_ms.count() << " ms\n";

	system("pause");

    return 0;
}

