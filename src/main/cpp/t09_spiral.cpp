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
    int mat[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) mat[i][j] = 0;
    }

    int k = 0, c = 1, i = 0, j = 0;
    while(c < n * m) {

        for(j = i; c <= n*m && j < m - k; ++j) mat[i][j] = c++;
        --j;

        for(i = i + 1; c <= n*m && i < n - k; ++i) mat[i][j] = c++;
        --i;

        for(j = j - 1; c <= n*m && j >= k; --j) mat[i][j] = c++;
        ++j;

        for(i = i - 1; c <= n*m && i > k; --i) mat[i][j] = c++;
        ++i;

        ++k;
    }
    if(mat[i][j] == 0) mat[i][j] = c;

    cout.width(4);
    for(int p = 0; p < n; ++p) {
        for(int q = 0; q < m; ++q) {
            cout << mat[p][q] << ' ';
        }
    }
    return 0;
}