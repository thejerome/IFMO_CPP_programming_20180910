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
    int arr[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = 0;

    int i = 0;
    int j = 0;
    int cur = 1;

    while (cur <= n * m) {
        while (j < m & arr[i][j] == 0)
        {
            arr[i][j] = cur;
            cur++;
            j++;
        }
        j--;
        i++;

        while (i < n & arr[i][j] == 0)
        {
            arr[i][j] = cur;
            cur++;
            i++;
        }
        i--;
        j--;

        while (j >= 0 & arr[i][j] == 0)
        {
            arr[i][j] = cur;
            cur++;
            j--;
        }
        j++;
        i--;

        while (i >= 0 & arr[i][j] == 0)
        {
            arr[i][j] = cur;
            cur++;
            i--;
        }
        i++;
        j++;
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
