#include <iostream>
#include <stdafx.h>
using std::cout;
using std::endl;


void FillInc(int *adress, int dlinna)
{
	int i, b(0);
	for (i = 0; i<dlinna; i++)
	{
		adress[i] = (++b);

	}
}
void FillDec(int *adress, int dlinna)
{
	int i, b(10);
	for (i = 0; i<dlinna; i++)
	{
		adress[i] = (--b);

	}
}
void FillRand(int *adress, int dlinna)
{
	int i;
	for (i = 0; i<dlinna; i++)
	{
		adress[i] = rand();

	}
}
int CheckSum(int *adress, int dlinna)
{
	int i, summa(0);
	for (i = 0; i<dlinna; i++)
	{
		summa = adress[i] + summa;

	}
	return summa;
}
int RunNumber(int *adress, int dlinna)
{
	int i, b(1);
	for (i = 0; i<dlinna; i++)
	{
		if (adress[i] <= adress[i + 1])
		{
			continue;
		}
		{
			b++; 
		}


	}
	return b;
}
void PrintMas(int *adress, int dlinna)
{
	int i;
	for (i = 0; i<dlinna; i++)
	{
		cout << adress[i] << "  ";
	}
}
void swap(int *massive, int number1, int number2)
{
	int temp = massive[number1];
	massive[number1] = massive[number2];
	massive[number2] = temp;
}