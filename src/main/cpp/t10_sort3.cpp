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
	int a, b, c, x;
	cin >> a >> b >> c;
	if (a <= b && a <= c)
	{
		if (b <= c) cout << a << " " << b << " " << c;
		else cout << a << " " << c << " " << b;
	}
	else if (b <= a && b <= c)
	{
		if (a <= c) cout << b << " " << a << " " << c;
		else cout << b << " " << c << " " << a;
	}
	else if (c <= a && c <= b)
	{
		if (a <= b) cout << c << " " << a << " " << b;
		else cout << c << " " << b << " " << a;
	}
};