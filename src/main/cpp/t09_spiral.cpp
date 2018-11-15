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
   int n,m,t,p,w,r,h,l,z;
   n=0;m=0;
    cin>>n>>m;
    int ar[n][m];
    h=n*m;
    t=1;
    p=0;
    w=n-1;
    r=0;
    z=m-1;
    if ((n%2)==1){l=((n/2)+1);}
   else {l=(n/2);}
if(n*m!=1){
    for (int i=0;i<l;i++){
        if(h>t){
            p++;
        for(int b=i;b<=z;b++){
            ar[i][b]=t;
            t++;
        }
        if(h>t){
        for( int d=(i+1);d<=w;d++) {
            ar[d][z]=t;
            t++;
        }}
        if(h>t){
        for(int u=(z-1);u>=r;u--){
            ar[w][u]=t;
            t++;
        }}
        if(h>t){
        for(int q=(w-1);q>=p;q--){
            ar[q][r]=t;
            t++;
        }}
        w--;
        r++;
        z--;
    }}
    for(int i=0;i<n;i++){
        for(int b=0;b<m;b++){
            cout<<ar[i][b]<<" ";
        }
    }}
    else{cout<<1;}
    return 0;
}
