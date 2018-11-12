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

    int *arr, n, m;
    cin>>n>>m;
    arr = (int*) calloc(sizeof(int), m*n);

    int k = 1, i =0, j = -1;

    if (n == 1 && m == 1)
        arr[0] = 1;

    while (k < n*m)
    {
        while ((j+1<m) && (arr[(i*m)+j+1]==0))
        {
            arr[(i*m)+(++j)] = k++;
        }
        while ((i+1<n) && (arr[((i+1)*m)+j]==0))
        {
            arr[((++i)*m)+j] = k++;
        }
        while ((j>0) && (arr[(i*m)+j-1]==0))
        {
            arr[(i*m)+(--j)] = k++;
        }
        while ((i>0) && (arr[((i-1)*m)+j]==0))
        {
            arr[((--i)*m)+j] = k++;
        }
    }

    cout.width(4);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<arr[(i*m)+j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
