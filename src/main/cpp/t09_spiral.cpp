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
    int c[m][n], x = 0, y = 0, value = 1, numberstep = (m >= n)? n * 2 - 1: m * 2;
    for (int i = 0; i < m; i++){
        c[x][y] = value;
        x++;
        value++;
    }
    x--;
    for (int i = 1; i < numberstep; i++){
        int expectedl = (i % 2 == 0)? m - (i - 1) / 2: n - (i - 1) / 2, l = 1;
        while (l < expectedl){
            if (i % 2 == 0) {
                x += ((i % 4) % 3 == 0)? 1 : -1;
            }
            else {
                y += (i % 4 < 2)? 1 : -1;
            }
            l++;
            c[x][y] = value;
            value++;
        }
    }
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cout << c[x][y] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
