//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>


using namespace std;

int t09_spiral() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			a[i][j] = 0;
	int  g = 1, i = 0, j = 0, koef = 0;
	while (g < n * m) {
		for (j = i; (g <= n * m) && (j < m - koef); ++j) a[i][j] = g++;
		--j;
		for (i = i + 1; (g <= n * m) && (i < n - koef); ++i) a[i][j] = g++;
		--i;
		for (j = j - 1; (g <= n * m) && (j >= koef); --j) a[i][j] = g++;
		++j;
		for (i = i - 1; (g <= n * m) && (i > koef); --i) a[i][j] = g++;
		++i;
		++koef;
	}
	if (a[i][j] == 0) a[i][j] = g;
	for (int k = 0; k < n; k++) {
		for (int c = 0; c < m; c++) {
			cout.width(4);
			cout << a[k][c];
		}
		cout << endl;
	}

    return 0;
}
