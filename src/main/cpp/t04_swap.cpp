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
int q, w, i, j;
cin >> q >> w;
int a[q][w];
for (int y = 0; y < q; y++){
for (int x = 0; x < w;  x++) {
cin >> a[y][x];
}
}
cin >> i >> j;
for (int y = 0; y < q; y++){
int e = 0;
e = a[y][i];
a[y][i] = a[y][j];
a[y][j] = e;
}
for (int y = 0; y < q; y++){
for (int x = 0; x < w;  x++) {
cout << a[y][x] << " ";
}
cout << endl;
}    
return 0;
}
