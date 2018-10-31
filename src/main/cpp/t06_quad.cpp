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

int t06_quad() {
	double a = 0, b = 0, c = 0, x1 = 0, discr = 0;
	cin >> a >> b >> c;
	discr = b * b - 4 * a*c;
	if (discr == 0) {
		x1 = -b / (2 * a);
		cout << x1 << endl;
	}
	if (discr > 0) {
		x1 = (-b + sqrt(discr)) / (2 * a);
		if (a < 0)
			cout << x1 << " " << x1-(sqrt(discr)/a) << endl;
		if (a > 0)
			cout << x1-(sqrt(discr)/a) << " " << x1 << endl;
	}
};
