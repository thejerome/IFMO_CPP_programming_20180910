//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
	int n;
	cin >> n;
	//int a[n];
	int prev = 9999999;
	int f = 0;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		//a[i] = m;
		if (i == 0)
		{
			prev = m;
		}
		else
		{
			if (m != prev)
			{
				f++;
			}
			prev = m;
		}
	}
	cout << f+1;
	return 0;
}
