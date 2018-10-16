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
	int N, last, next, sum;
	sum = 0;
	last = 0;
	next = 1;
	cin >> N;
	if (N == 1) {
		sum = 1;
	}
	else {
		while ((N != 1) && (N != 0)) {
			sum = last + next;
			last = next;
			next = sum;
			N--;
	}
	}
	cout << sum;

};