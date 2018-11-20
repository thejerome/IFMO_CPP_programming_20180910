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
    int mat[n+2][m+2];
    for (int i=0; i<n+2; i++){
        for (int j=0; j<m+2; j++) {
            mat[i][j]=0;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            mat[i][j] = -1;
        }
    }
    int k = 1;
    int i = 1, j = 1;
    for (int t = 1; t <= m * n; t++) {
        mat[i][j] = t;
        int p = 0;
        //если вправо
        if (k == 1) {
            if (mat[i][j + 1] == -1) {
                j++;
            }
            else {
                k = 2;
                p = 1;
                i++;
            }
        }
        // если вниз
        if (k == 2 && p == 0) {
            if (mat[i + 1][j] == -1) {
                i++;
            }
            else {
                k = 3;
                p = 1;
                j--;
            }
        }
        //если влево
        if (k == 3 && p == 0) {
            if (mat[i][j - 1] == -1) {
                j--;
            }
            else {
                k = 4;
                p = 1;
                i--;
            }
        }
        //если вверх
        if (k == 4 && p == 0) {
            if (mat[i-1][j] == -1) {
                i--;
            }
            else {
                k = 1;
                j++;
            }
        }
    }
    //вывод
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << setw(4) << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}
