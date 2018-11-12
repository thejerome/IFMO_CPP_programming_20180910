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
#include <iomanip>


using namespace std;

int t09_spiral() {
    int n, m;
    cin >> n >> m;
    int a[n][m], p = 1, k = 0, mmax = m, nmax = n, mmin = 0, nmin = 0, x = 0, y = 0;
    while (k<n*m) {
        while (x<mmax and k<n*m) {
            a[y][x] = p++;
            x++;
            k++;
        }
        x--;
        y++;
        mmax--;
        while (y<nmax and k<n*m) {
            a[y][x] = p++;
            y++;
            k++;
        }
        y--;
        x--;
        nmin++;
        while (x>=mmin and k<n*m) {
            a[y][x] = p++;
            x--;
            k++;
        }
        x++;
        y--;
        mmin++;
        while (y>=nmin and k<n*m) {
            a[y][x] = p++;
            y--;
            k++;
        }
        y++;
        x++;
        nmax--;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout <<setw(4)<< a[i][j];
        }
    }
    return 0;
}
