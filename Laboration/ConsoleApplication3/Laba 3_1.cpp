// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;
int main()
{
	srand(time(NULL));
	int *link,n,i;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� ����� � �������" << endl;
	cin >> n;
	link =(int *) malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		link[i] = -50 + rand() % 100;
		
	}
	cout << "������������ ������" << endl;
	for (i = 0; i < n; i++)
	{
		cout <<link[i]<<"___";
	}
	//������� ������������� � ������������� �����
	int m(0), k(0);
	
	for (i = 0; i < n; i++)
	{
		if (link[i]>0)
		{
			m++;

		}
		if (link[i]<0)
		{
			k++;
		}
	}
	
	//���������  ������������ ������ ��� 2 ����� �������.
	int *c, *d;
	
	c = (int *)malloc(m * sizeof(int));
	d = (int *)malloc(k * sizeof(int));
	//���� ��������� ��������
	int f(0),j(0);
	for (i = 0; i < n; i++)
	{
		if (link[i]>0)
		{
			c[f] = link[i];
			f++;
		}
		if (link[i]<0)
		{
			d[j] = link[i];
			j++;
		}


	}
		// ����� �������� 
	cout << "\n������ ������������� �����" << endl;
	for (i = 0; i < m; i++)
	{
		if(c[i]!=NULL)
		  cout << c[i] << "___";
	}
	cout << "\n������ ������������� �����" << endl;
	for (i = 0; i < k; i++)
	{
		if (d[i]!= NULL)
		  cout << d[i] << "___";
	}
	free(link);
	free(c);
	free(d);
	link, c, d = NULL;

	system("pause");

    return 0;
}

