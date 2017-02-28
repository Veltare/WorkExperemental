// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void swap(float *massive, int number1, int number2);
int main()
{
	srand(time(NULL));
	float *a,**b,*t;
	int i, n;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� ����� � �������" << endl;
	cin >> n;
	a = new float [n];
	b = new float* [n];

	for (i = 0; i < n; i++)
	{
		a[i] = (float)rand() / RAND_MAX;

	}
	cout << "������������ ������" << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "___";
		b[i] = &a[i];
	}


	//���������� ���������
	int m(0), k(0);

	for (i = 0; i < n-1; i++)
	{
		for (m = 0; m <n-i-1; m++)
		{
			if (*b[m+1] < *b[m])
			{
				if (*b[m] > *b[m + 1])
					swap(*b, m,m+1);
			}
		}

	}
	
	cout << "\n��������������� ������" << endl;
	for (i = 0; i < n; i++)
	{
		cout << *b[i] << "___";
	}
	cout << "\n�������� ������" << endl;
	for (i = 0; i < n; i++)
	{
		cout << b[i] << "___";
	}
	system("pause");

	return 0;
}

void swap(float *massive, int number1, int number2)
{
	int temp = massive[number1];
	massive[number1] = massive[number2];
	massive[number2] = temp;
}