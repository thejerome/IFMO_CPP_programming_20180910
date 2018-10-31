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
    int n, m, a[100][100];
    cin >> n >> m;

    // fill nearby cells
    int i = 0, j = -1, count = 0;
    while (count < n*m) {
        while (j < m - 1 && !a[i][j+1])
            a[i][++j] = ++count;    // right
        while (i < n - 1 && !a[i+1][j])
            a[++i][j] = ++count;    // down
        while (j > 0 && !a[i][j-1])
            a[i][--j] = ++count;    // left
        while (i > 0 && !a[i-1][j])
            a[--i][j] = ++count;    // up
    }

    // output
    cout.setf(ios::left);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
        return 0;
    }
