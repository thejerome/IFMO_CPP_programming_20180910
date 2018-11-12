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
    int n,m,k=0,p=1,c=0;
    cin>>n>>m;
    int A[n][m];
    while(c<n*m){
        k++;
        for(int j=k-1; j<m-k+1&&c<n*m; j++){
            A[k-1][j]=p++;
            c++;}
        for(int j=k; j<n-k+1&&c<n*m; j++){
            A[j][m-k]=p++;
            c++;}
        for(int j=m-k-1; j>=k-1&&c<n*m; j--){
            A[n-k][j]=p++;
            c++;}
        for(int j=n-k-1; j>=k&&c<n*m; j--){
            A[j][k-1]=p++;
            c++;}}
    cout.width(4);
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
        cout<<A[i][j]<<' ';}
return 0;

}
