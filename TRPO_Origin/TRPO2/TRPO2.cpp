// TRPO.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>

float raschet(float vklad, float time_vk);
void inspection(int value);
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
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
		cout << "Непрпвильный ввод данных " << endl;
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
		cout << "Непрпвильный ввод данных " << endl;
		cin.ignore(10, '\n');
	}
	cout << endl << raschet(vklad, time_vk) << endl;
	system("pause");
	return 0;
}
float raschet(float vklad, float time_vk)
{
	float vkladnew = vklad;
	float timevknew = time_vk;

	if (vklad < 100000)
	{

		if ((timevknew <= 365) && (timevknew >= 241))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 12)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 240) && (timevknew >= 121))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 06)*timevknew)) / 365 / 100;
			cout << vkladnew;
			return vkladnew;
		}
		if ((timevknew <= 120) && (timevknew >= 31))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 03)*timevknew)) / 365 / 100;
			cout << vkladnew;
			return vkladnew;
		}
		if ((timevknew <= 30) && (timevknew > 0))
		{
			vkladnew = vkladnew - (vkladnew *((vkladnew * 0, 10)*timevknew)) / 365 / 100;
			cout << vkladnew;
			return vkladnew;
		}
	}
	{

		if ((timevknew <= 365) && (timevknew >= 241))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 15)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 240) && (timevknew >= 121))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0.08)*timevknew)) / 365 / 100;
			cout << vkladnew;
			return vkladnew;
		}
		if ((timevknew <= 120) && (timevknew >= 31))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 03)*timevknew)) / 365 / 100;
			cout << vkladnew;
			return vkladnew;
		}
		if ((timevknew <= 30) && (timevknew > 0))
		{
			vkladnew = vkladnew - (vkladnew *((vkladnew * 0, 10)*timevknew)) / 365 / 100;
			cout << vkladnew;
			return vkladnew;


		}

	}
}