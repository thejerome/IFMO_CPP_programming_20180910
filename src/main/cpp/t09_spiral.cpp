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
    int n,m,count,a,k;
    k=0;
    count=0;
    a=1;
    cin>>n>>m;
    int arr[n][m];
    while(k<n*m){
        count++;
        for(int j=count-1; j<m-count+1&&k<n*m; j++){
            arr[count-1][j]=a++;
            k++;}
        for(int j=count; j<n-count+1&&k<n*m; j++){
            arr[j][m-count]=a++;
            k++;}
        for(int j=m-count-1; j>=count-1&&k<n*m; j--){
            arr[n-count][j]=a++;
            k++;}
        for(int j=n-count-1; j>=count&&k<n*m; j--){
            arr[j][count-1]=a++;
            k++;}}
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout.width(4);
            cout<<arr[i][j]<<' ';}
        cout<<endl;}

    return 0;
}
