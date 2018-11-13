//Дано нечетное число n, не превосходящее 15.
//Создайте двумерный массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива,
// средний столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение звездочки.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include "t02_star.h"
#include <iostream>


using namespace std;

int t02_star() {
    int n, Control_number;
    double Variable;
    cin >> n;
    char A[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = '.';
        }
    }
    Variable = (n/2)+0,5;
    Control_number = Variable;
    A [Control_number][Control_number] = '*';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == Control_number || j == Control_number || (Control_number + Control_number == i + j) || ((Control_number == i) && (Control_number == j))) {
                A[i][j] = '*';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
    }
    return 0;
}
