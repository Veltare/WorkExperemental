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
		cout << "������� ����� ������ " << endl;
		cin >> vklad;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "������������ ���� ������ " << endl;
		cin.ignore(10, '\n');
	}
	while (true)
	{
		cout << "������� ���� ������ " << endl;
		cin >> time_vk;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "������������ ���� ������ " << endl;
		cin.ignore(10, '\n');
	}
	cout << "��� �����:" << vklad << endl;
	cout << "�����:" << time_vk << endl;
	cout << "�����:" << raschet(vklad, time_vk) << endl;
	cout << endl << "��� �����: " << vklad - raschet(vklad, time_vk) << endl;
}