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
    int a[n][m], x, y, znac, b, c, d, e;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            a[i][j] = 0;
        }
    }
    x = 0;
    y = 0;
    znac = 1;
    b = m;
    d = 0;
    c = -1;
    e = n;
    while (znac != n * m+1){
        while (y != b){
            a[x][y] = znac;
            znac += 1;
            y += 1;
        }
        x += 1;
        y -= 1;
        if (znac >= n * m+1){
            break;
        }
        while (x != e){
            a[x][y] = znac;
            znac += 1;
            x += 1;
        }
        x -= 1;
        y -= 1;
        if (znac >= n * m+1){
            break;
        }
        while (y != c){
            a[x][y] = znac;
            y -= 1;
            znac += 1;
        }
        x -= 1;
        y += 1;
        if (znac >= n*m+1){
            break;
        }
        while (x != d){
            a[x][y] = znac;
            x -= 1;
            znac += 1;
        }
        x += 1;
        y += 1;
        b -= 1;
        c += 1;
        d += 1;
        e -= 1;
        if (znac >= n * m+1){
            break;
        }
    }
    cout.setf(ios::left);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
