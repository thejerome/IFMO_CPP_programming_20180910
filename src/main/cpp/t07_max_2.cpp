//Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.
//
//Формат входных данных
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//4
//4
//2
//3
//0
//Sample Output 1:
//
//4
//Sample Input 2:
//
//2
//1
//0
//Sample Output 2:
//
//1

#include "t07_max_2.h"
#include <iostream>

using namespace std;

int t07_max_2() {

	int n;
	cin >> n;

	int max = n;
	int premax = -1;
	while (n)
	{
		cin >> n;
		if (n > max)
		{
			premax = max;
			max = n;
		}
		else
		{
			if (n > premax)
			{
				premax = n;
			}
		}
			
			
	}
	cout << premax;

	return 0;
};