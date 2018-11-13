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
    int n,m,k,a,c;
    c=0;
    k=0;
    a=1;
    cin>>n>>m;
    int arr[n][m];
    while(c<n*m){
        k++;
        for(int j=k-1; j<m-k+1&&c<n*m; j++){
            arr[k-1][j]=a++;
            c++;}
        for(int j=k; j<n-k+1&&c<n*m; j++){
            arr[j][m-k]=a++;
            c++;}
        for(int j=m-k-1; j>=k-1&&c<n*m; j--){
            arr[n-k][j]=a++;
            c++;}
        for(int j=n-k-1; j>=k&&c<n*m; j--){
            arr[j][k-1]=a++;
            c++;}}

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout.width(4);
            cout<<arr[i][j]<<' ';}
    cout<<endl;}

    return 0;
}
