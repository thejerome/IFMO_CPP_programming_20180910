//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
	int n;
	cin >> n;
	//int a[n];
	bool check = false;
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		//a[i] = m;
		if (m % 2 != 0)
		{
			check = true;
			if (m < min)
			{
				min = m;
			}
		}
	}
	if (check)
		cout << min;
	else
		cout << "0";
	return 0;
}
