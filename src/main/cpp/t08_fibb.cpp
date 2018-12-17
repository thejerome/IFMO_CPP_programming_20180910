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
	int n;
	cin >> n;
	int f1 = 1;
	int f2 = 1;
	if (n != 0)
	{
		for (int i = 2; i < n; i++)
		{
			int temp = f2;
			f2 = f1 + f2;
			f1 = temp;
		}
		cout << f2;
	}
	else
	{
		cout << "0";
	}
	return 0;
};