// Laba 2_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <clocale>

using namespace std;

void recurs_perevod(int arg);

int main()
{
	int arg(0);
	setlocale(LC_ALL, "Russian");
	cout << "Введите чмсло для перевода" << endl;
	cin >> arg;
	recurs_perevod(arg);
	system("pause");
    return 0;

}

void recurs_perevod(int arg)
{
	if (arg >= 1)
	{   
		arg = arg / 2;
		recurs_perevod(arg);
		arg = arg % 2;
		cout << arg;
	}
	
}

