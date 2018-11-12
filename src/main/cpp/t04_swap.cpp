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
    int n, m, i, j, *arr;
    int swp;
    cin >> n >> m;
    arr = (int*) malloc(sizeof(int)*n*m);
    for(int a = 0; a < n*m; a++){
        cin>>arr[a];
    }
    cin >> i >> j;

    for(int a = 0; a < n; a++){
        swp = arr[(a*m)+i];
        arr[(a*m+i)] = arr[(a*m)+j];
        arr[(a*m)+j] = swp;
    }

    for(int a = 0; a < n; a++){
        for(int b = 0; b < m; b++){
            cout<<arr[a*m+b]<<" ";
        }
        cout<<endl;
    }

    free(arr);
    return 0;
}
