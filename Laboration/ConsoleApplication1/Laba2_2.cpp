// // Laba_2.2.cpp : ������������ ������ �2..
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <clocale>
using namespace std;

void recurs(int *massive, int a, int znak, int i);


int main()
{
	setlocale(LC_ALL, "Russian");
	int massive[10];
	int i;
	
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		massive[i] = rand();

	}
	for (i = 0; i < 10; i++)
	{
		cout << massive[i]<<"_"<<endl;

	}
	cout << "�����" << endl;

	recurs(massive,10,0,0);
	system("pause");
    return 0;
}

void recurs(int *massive, int a, int znak, int i)
{
	//�������� ��������
	if (i < a)
	{
		i++;
		//�������� ����� -
		if (znak == 0)
		{
			//���� �������� ������� < 0 ����� ����� ����� ���������� ����� � ���� � ��������.
			if (massive[i] < 0)
			{


				
				cout << massive[i] << endl;
				return recurs(massive, a, znak, i);

			}
			{
				return recurs(massive, a, 0, i);
			}
		}
		//�������� ����� +
		if (znak == 1)
		{
			//���� �������� ������� > 0 ����� ����� ����� ���������� ����� � ���� � ��������.
			if (massive[i] > 0)
			{



				cout << massive[i] << endl;
				return recurs(massive, a, 1, i);
			}
			{
				return recurs(massive, a, 1, i);
			}
		}
	}
	{
		//������ �� ����������� ��������
		if(znak==0)
			return recurs(massive, a, 1, 0);

	}


	
}