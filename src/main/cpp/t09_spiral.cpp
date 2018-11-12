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
int k=0, q=0;
cin >> n >> m;
int a[n][m];
while (q<n*m)
{
    for (int j=k; j<m-k && q<n*m; j++)
    {
        a[k][j]= ++q;
    }
    for (int i=k+1; i<n-k && q<n*m; i++)
    {
        a[i][m-k-1]= ++q;
    }
    for (int j=m-k-2; j>=k && q<n*m; j--)
    {
        a[n-k-1][j]= ++q;
    }
    for (int i=n-k-2; i>k && q<n*m; i--)
    {
        a[i][k]= ++q;
    }
    k++;
}
for (int i=0; i<n; i++)
{
    for (int j=0; j<m; j++)
    {
        cout << setw(4) << a[i][j];
    }
    cout << endl;
}
    return 0;
}
