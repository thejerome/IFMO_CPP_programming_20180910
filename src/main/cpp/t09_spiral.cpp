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
    int k = 1;
    int x1 = 0;
    int x2 = m - 1;
    int y1 = 0;
    int y2 = n - 1;
    while(k <= n * m) {
        for (int j = x1; j <= x2; j++) {
            a[y1][j] = k;
            k++;
        }
        y1++;
        if (k <= n * m) {
            for (int i = y1; i <= y2; i++) {
                a[i][x2] = k;
                k++;
            }
            x2--;
        }
        if (k <= n * m) {
            for (int j = x2; j >= x1; j--) {
                a[y2][j] = k;
                k++;
            }
            y2--;
        }
        if (k <= n * m) {
            for (int i = y2; i >= y1; i--) {
                a[i][x1] = k;
                k++;
            }
            x1++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << a[i][j] << " ";
        }
        cout <<"\n";
    }
}
