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
// Done
int t04_swap() {
    int mas[100][100],
        i, j, n, m,
        column1, column2;

    cin >> n >> m;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> mas[i][j];
        }
    }

    cin >> column1 >> column2;

    for (i = 0; i < n; i++){
        int tmp = mas[i][column1];
        mas[i][column1] = mas[i][column2];
        mas[i][column2] = tmp;
    }

    for (i = 0; i < n; i++){
        cout << endl;
        for (j = 0; j < m; j++){
            cout << mas[i][j] << ' ';
        }
    }


    return 0;
}
