//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() 
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a)
	{
		double d = b * b - 4 * a*c;
		double ba = -b / (2.0*a);
		if (d > 0)
		{
			double sd = sqrt(d) / (2.0*a);
			if (a > 0)
				cout << ba - sd << " " << ba + sd;
			else
				cout << ba + sd << " " << ba - sd;
		}
		else
			if (d == 0)
	    	{
			cout << ba;
			}
		
	}
	return 0;
};