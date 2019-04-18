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
    int M, N;
    cin >> M >> N;

    int a[M][N];
    for (int r = 0; r < M; r++)
       for (int q = 0; q < N; q++)
            cin >> a[r][q];

    int i, j;
    cin >> i >> j;
    
    for (int h = 0; h < M; h++)
        swap(a[h][i], a[h][j]);

    for (int p = 0; p < M; p++)
    {
        for (int q = 0; q < N; q++)
             cout << a[p][q] << " ";
        
        cout << endl;
    }
    return 0;
}
