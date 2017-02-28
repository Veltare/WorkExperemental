#include "stdafx.h"
#include <iostream>
#include <clocale>

float raschet(float vklad, float time_vk);

using namespace std;
void vvod()
{
	float vklad(0), time_vk(0), value(0);
	while (true)
	{
		cout << "Введите сумму вклада " << endl;
		cin >> vklad;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Неправильный ввод данных " << endl;
		cin.ignore(10, '\n');
	}
	while (true)
	{
		cout << "Введите срок вклада " << endl;
		cin >> time_vk;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Неправильный ввод данных " << endl;
		cin.ignore(10, '\n');
	}
	cout << "Ваш вклад:" << vklad << endl;
	cout << "Время:" << time_vk << endl;
	cout << "Итого:" << raschet(vklad, time_vk) << endl;
	cout << endl << "Ваш доход: " << vklad - raschet(vklad, time_vk) << endl;
}