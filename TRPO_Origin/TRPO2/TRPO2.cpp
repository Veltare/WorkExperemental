// TRPO.cpp: ������������ ������ �� ���� 2.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>

float raschet(float vklad, float time_vk);
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
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
		cin.ignore(10, '\n');	}
	cout << "��� �����:"<< vklad << endl;
	cout << "�����:" << time_vk << endl;
	cout << "�����:" << raschet(vklad, time_vk) << endl;
	cout << endl <<"��� �����: "<<vklad-raschet(vklad, time_vk) << endl;
	system("pause");
	return 0;
}
