//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() {
	int n, m, i, j;
	cin >> n >> m;
	int a[n][m];
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			cin >> a[y][x];
		}
	}
	cin >> i >> j;
	for (int y = 0; y < n; y++) {
		int t = 0;
		t = a[y][i];
		a[y][i] = a[y][j];
		a[y][j] = t;
	}
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			cout << a[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}