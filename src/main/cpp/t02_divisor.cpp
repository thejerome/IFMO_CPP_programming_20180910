//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//
//Формат входных данных
//        Вводится целое положительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//15
//Sample Output:
//
//3

#include "t02_divisor.h"
#include <iostream>

using namespace std;

int t02_divisor() {
	int a;
	cin >> a;
	int d = a;
	int min = a;
	while (d >= 2)
	{
		if (a % d == 0) {
			min = d;
		}
		d--;
	}
	cout << min;
};