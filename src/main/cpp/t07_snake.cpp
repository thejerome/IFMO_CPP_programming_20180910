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
    int i,t,b,n,m;
    cin>>n;
    cin>>m;
    int ar[n][m];
    t=1;
    for (i=0;i<n;i++){
        if ((i%2)==0){
            for(b=0;b<m;b++){
                ar[i][b]=t;
                t++;
            }
        }
        else{
            for(b=(m-1);b>=0;b--){
                ar[i][b]=t;
                t++;
            }
        }
    }
    for (i=0;i<n ; i++) {
        for (b=0;b<m;b++) {
            cout<<ar[i][b]<<" ";
        }
    }

    return 0;
}
