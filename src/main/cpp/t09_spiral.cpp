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
    int n, m,k,x;
    cin >> n;
    cin >> m;
    int a[n][m];
k=0;
x=0;
    while (k < n*m){
        
        for (int j=x; j<m-x && k<n*m; j++){
            a[x][j] = ++k;
        }
        
        for (int i=x+1; i<n-x && k<n*m; i++){
            a[i][m-x-1] = ++k;
        }
        
        for (int j=m-x-2; j>=x && k<n*m; j--){
            a[n-x-1][j] = ++k;
        }
        
        for (int i=n-x-2; i>x && k<n*m; i--){
            a[i][x] = ++k;
        }
        
x++;
        
    }
   
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
