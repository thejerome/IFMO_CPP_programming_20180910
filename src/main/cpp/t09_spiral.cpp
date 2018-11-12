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
    cin >> n;
    cin >> m;
    int a[n][m];
    int t=0;
    int z=0;
    while (t < n*m){
        for (int j=z; j<m-z && t<n*m; j++){
            a[z][j] = ++t;
            //t++;
        }
        for (int i=z+1; i<n-z && t<n*m; i++){
            a[i][m-z-1] = ++t;
            //t++;
        }
        for (int j=m-z-2; j>=z && t<n*m; j--){
            a[n-z-1][j] = ++t;
            //t++;
        }
        for (int i=n-z-2; i>z && t<n*m; i--){
            a[i][z] = ++t;
            //t++;
        }
        z++;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
