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
	int n, m, count = 1, k = 0, g = 0;
	cin >> n >> m;
	int a[n][m];
	if (!(n == 1 && m == 1)) {
		while (count < n*m) {
			for (int j = k; j < m - g; j++)
			{
				if (count == n * m + 1)break;
				a[k][j] = count++;
			}
			k++;
			for (int j = k; j < n - g; j++)
			{
				if (count == n * m + 1)break;
				a[j][m - g - 1] = count++;
			}
			for (int j = k; j < m - g; j++)
			{
				if (count == n * m + 1)break;
				a[n - g - 1][m - j - 1] = count++;
			}
			for (int j = k; j < n - k; j++)
			{
				if (count == n * m + 1)break;
				a[n - j - 1][g] = count++;
			}
			g++;
			if (count == n * m + 1)break;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout.width(4);
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	else cout << 1;
	return 0;
}
