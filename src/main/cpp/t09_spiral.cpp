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
    int n,m,cnt=1;
    cin >> n >> m;
    int a[n][m], x=0, y=0, dx=0, dy=1;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++) a[i][j]=0;
    a[x][y]=cnt++;
    while(true) {
        bool flag = false;
        if (x+dx < 0 || x+dx >= n || y+dy < 0 || y+dy >= m || a[x+dx][y+dy] != 0) {
            if (x+1 < n && a[x+1][y] == 0) dx=1, dy=0;
            else if (x-1 >= 0 && a[x-1][y] == 0) dx=-1, dy=0;
            else if (y+1 < m && a[x][y+1] == 0) dx=0, dy=1;
            else if (y-1 >= 0 && a[x][y-1] == 0) dx=0, dy=-1;
            else flag = true;
        }
        if (flag) break;
        x += dx;
        y += dy;
        a[x][y] = cnt++;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
