#include "stdafx.h"
#include <iostream>
#include <clocale>

using namespace std;

float raschet(float vklad, float time_vk)
{
	float vkladnew = vklad;
	float timevknew = time_vk;

	if (vklad < 100000)
	{
		//Если вклад меньше чем 100000.

		if ((timevknew <= 365) && (timevknew >= 241))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 12)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 240) && (timevknew >= 121))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 06)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 120) && (timevknew >= 31))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 03)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 30) && (timevknew > 0))
		{
			vkladnew = vkladnew - (vkladnew *((vkladnew * 0, 10)*timevknew)) / 365 / 100;
			return vkladnew;
		}
	}
	{
		//Если вклад больше 100000.
		if ((timevknew <= 365) && (timevknew >= 241))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 15)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 240) && (timevknew >= 121))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0.08)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 120) && (timevknew >= 31))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 03)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 30) && (timevknew > 0))
		{
			vkladnew = vkladnew - (vkladnew *((vkladnew * 0, 10)*timevknew)) / 365 / 100;
			return vkladnew;


		}

	}
}