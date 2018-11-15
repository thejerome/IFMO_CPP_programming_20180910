//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() {
    int a,i,d,b,n,u,g;
    cin>>n;
    cin>>b;
    int ar[n][b];
    int ar1[n];
    for(i=0;i<n;i++){
        for(d=0;d<b;d++){
            cin>>a;
            ar[i][d]=a;
        }
    }
    cin>>u;
    cin>>g;
    for(i=0;i<n;i++){
        ar1[i]=ar[i][u];
    }
    for(i=0;i<n;i++){
        ar[i][u]=ar[i][g];
        ar[i][g]=ar1[i];
    }
    for(i=0;i<n;i++){
        for(d=0;d<b;d++){
            cout<<ar[i][d]<<" ";
        }
    }
    return 0;
}
