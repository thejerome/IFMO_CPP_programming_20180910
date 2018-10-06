//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {
	int  f, i = 2, n1 = 1, n2 = 0, n = 0;
	cin >> f;
	n = n2 + n1;
	if (f == 0) cout << 0;
	else if (f == 1) cout << 1;
	else
	{		
		while (i < f)
		{
			n2 = n1;
			n1 = n;
			n = n1 + n2;
			i++;
		}
		cout << n;
	}
};