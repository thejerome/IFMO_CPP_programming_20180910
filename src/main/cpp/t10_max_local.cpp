//Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//2
//1
//0
//Sample Output:
//
//2

#include "t10_max_local.h"
#include <iostream>

using namespace std;

int t10_max_local() {
	int prev;
	int cur;
	int next;
	int n = 0;
	cin >> prev;
	if (prev!=0)
	{
		cin >> cur;
		if (cur!=0)
		{
			cin >> next;
			if (next!=0)
			{
				while (next != 0)
				{
					if ((prev < cur) && (cur > next))
						n++;
					prev = cur;
					cur = next;
					cin >> next;
				}
			}
		}
	}
	cout << n;
	return 0;
};