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
	int a, b, c, support;
	cin >> a >> b >> c;
	
	if (a > b)
	{
		support=a;
		a = b;
		b = support;
	}
	if (a > c)
	{
		support=a;
		a = c;
		c = support;
	}
	if (b > c) 
	{
		support=b;
		b = c;
		c = support;
	}

	cout << a << " " << b << " " << c;

	return 0;
};