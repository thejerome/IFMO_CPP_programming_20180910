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
    int arr[n][m],
    	p = 1,
    	k = 0,
    	m_max = m, 
    	n_max = n,
    	m_min = 0, 
    	n_min = 0,
    	x = 0, 
    	y = 0;
    while (k<n*m) {
        while (x<m_max && k<n*m) {
            arr[y][x] = p++;
            x++;
            k++;
        }
        x--;
        y++;
        m_max--;
        while (y<n_max && k<n*m) {
            arr[y][x] = p++;
            y++;
            k++;
        }
        y--;
        x--;
        n_min++;
        while (x>=m_min && k<n*m) {
            arr[y][x] = p++;
            x--;
            k++;
        }
        x++;
        y--;
        m_min++;
        while (y>=n_min && k<n*m) {
            arr[y][x] = p++;
            y--;
            k++;
        }
        y++;
        x++;
        n_max--;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}
