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
	int n, m, i, j, iColumn = 0, jColumn = 0;
    
    cin >> n >> m;
    
    int a[n][m];
    
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    cin >> iColumn >> jColumn;
    
    for (i = 0; i < n; i++){
            int k = a[i][iColumn];
            a[i][iColumn] = a[i][jColumn];
            a[i][jColumn] = k;
    }
    
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
