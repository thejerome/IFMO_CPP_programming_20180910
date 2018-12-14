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
	int n, i, j;
    
    cin >> n;
    
    string a[n][n];
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if ((i == ((n-1)/2)) || 
                (j == ((n-1)/2)) || 
                (i == j) || 
                ((i + j) == (n - 1))){
                cout << "*" << " ";
            }else{
                cout << "." << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
