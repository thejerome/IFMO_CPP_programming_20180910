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
    int n, m, cnt = 0, cur_i = 0, cur_j = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = -1;

    while (cnt < n * m) {
        for (int j = 0; j < m; j++)
            if (a[cur_i][j] == -1) {
                cnt++;
                a[cur_i][j] = cnt;
            }

        for (int i = 0; i < n; i++)
            if (a[i][m - 1 - cur_j] == -1) {
                cnt++;
                a[i][m - 1 - cur_j] = cnt;
            }

        for (int j = m - 1; j >= 0; j--)
            if (a[n - 1 - cur_i][j] == -1) {
                cnt++;
                a[n - 1 - cur_i][j] = cnt;
            }

        for (int i = n - 1; i >= 0; i--)
            if (a[i][cur_j] == -1) {
                cnt++;
                a[i][cur_j] = cnt;
            }
        cur_i++;
        cur_j++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
