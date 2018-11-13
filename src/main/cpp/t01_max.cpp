//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//        Программа получает на вход размеры массива n и m, 
// затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//        Выведите два числа: номер строки и номер столбца, 
// в которых стоит наибольший элемент в двумерном массиве. 
// Если таких элементов несколько, то выводится тот, у которого меньше номер строки, 
// а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2

#include "t01_max.h"
#include <iostream>


using namespace std;

int t01_max()
{
	int a, b;
	int Max[3] = {0, 0, 0};
	cin >> a >> b;
	int Arr[a][b];

	for (int i = 0; i < a; i++) 
	{
		for (int j = 0; j < b; j++) 
		{
			cin >> Arr[i][j];
			if (Arr[i][j] > Max[0]) 
			{
				Max[0] = Arr[i][j];
				Max[1] = i;
				Max[2] = j;
			}
		}
	}
	cout << Max[1] << " " << Max[2];
    return 0;
}
