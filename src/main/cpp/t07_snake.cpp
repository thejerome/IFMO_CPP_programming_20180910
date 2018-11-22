//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>


using namespace std;

int t07_snake() {
    int n,m,k;
    k=1;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        if (i%2!=1) {
            for (int j = 0; j < m; ++j) {
                arr[i][j]=k;
                k++;
            }
        } else{
            for (int j = m-1; j > -1; --j) {
                arr[i][j]=k;
                k++;
            }
        }
    }
    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < m; ++i) {
            cout.width(4);
            cout<<arr[l][i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
