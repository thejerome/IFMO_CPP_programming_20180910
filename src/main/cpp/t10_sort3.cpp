//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
	int a, b, c, i;
	cin >> a >> b >> c;
	if (a > b) {
		i = a;
		a = b;
		b = i;
	}
	if (b > c) {
		i = c;
		c = b;
		b = i;
	}
	if (a > b) {
		i = a;
		a = b;
		b = i;
	}
	cout << a << " " << b << " " << c << endl;
};