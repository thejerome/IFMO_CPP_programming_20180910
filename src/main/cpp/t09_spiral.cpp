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
    int n, m, i, j, calculator = 0, cI = 0, cJ = 0;
    cin >> n >> m;
    int a[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            a[i][j] = -1;
        }
    }
    while (calculator < (n * m)) {
        for (j = 0; j < m; j++) {
            if (a[cI][j] == -1) {
                calculator++;
                a[cI][j] = calculator;
            }
        }
        for (i = 0; i < n; i++) {
            if (a[i][m - 1 - cJ] == -1) {
                calculator++;
                a[i][m - 1 - cJ] = calculator;
            }
        }
        for (j = m - 1; j >= 0; j--) {
            if (a[n - 1 - cI][j] == -1) {
                calculator++;
                a[n - 1 - cI][j] = calculator;
            }
        }
        for (i = n - 1; i >= 0; i--) {
            if (a[i][cJ] == -1) {
                calculator++;
                a[i][cJ] = calculator;
            }
        }
        cI++;
        cJ++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout.width(4);
            cout << a[i][j] << " ";
        }
    }
    return 0;
}
