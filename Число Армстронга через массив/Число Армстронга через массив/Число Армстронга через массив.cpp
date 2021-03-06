// Число Армстронга через массив.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>

using namespace std;

int CheckPowerSum(int number_i, int number, int thepower)
{
	number = 0;
	while (number_i != 0)
	{
		number += pow(number_i % 10, thepower);
		number_i /= 10;
	}
	return number;
}

int main()
{
	setlocale(0, "Rus");

	cout << "Давайте найдем числа Армстронга!" << endl;

	int** Degree = new int*[10000000];

	for (int i = 0; i < 10000000; i++) Degree[i] = new int[8];

	for (int i = 0; i < 10000000; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			Degree[i][j] = CheckPowerSum(i, 0, j);
		}
	}

	auto begin = std::chrono::steady_clock::now();

	for (int i = 0; i < 10000000; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i == Degree[i][j]) cout << Degree[i][j] << endl;
		}
	}

	auto end = std::chrono::steady_clock::now();

	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

	std::cout << "The time: " << elapsed_ms.count() << " ms\n";

	system("pause");

    return 0;
}

