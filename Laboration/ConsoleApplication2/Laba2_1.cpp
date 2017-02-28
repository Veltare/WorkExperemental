// // Laba_2.1.cpp : Лабораторная работа №2.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>

using namespace std;
void recurs();


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите последовательность чисел" << endl;
	recurs();
	system("pause");
	return 0;
}
void recurs()
{
	int a;
	cin >> a;
	if (a == 0)
	{
		return;

	}
	if (a > 0)
	{
		cout << a << " ";
		
	}
	recurs();
	
}

