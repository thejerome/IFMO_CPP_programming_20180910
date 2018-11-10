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
    int n,m,x=0,y=0,xmax,ymax,xmin=0,ymin=0, s=1,k=0;
    cin>> n>> m;
    int a[n][m];
    int Size=n*m;
    xmax=m, ymax=n;
    while(k<Size){
    for(x;x<xmax&&k<Size;x++,k++){
        a[y][x]=s++;
    }
    x--;
    y++;
    xmax--;

    for(y;y<ymax&&k<Size;y++,k++){
           a[y][x]=s++;
    }
    y--;
    x--;
    ymin++;
    for(x;x>=xmin&&k<Size;x--,k++){
    a[y][x]=s++;
    }
    y--;
    x++;
    xmin++;

    for(y;y>=ymin&&k<Size;y--,k++){
        a[y][x]=s++;
    }
    x++;
    y++;
    ymax--;
    }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<< setw(4)<< a[i][j];
            }
            cout<< endl;
        }
    return 0;
}
