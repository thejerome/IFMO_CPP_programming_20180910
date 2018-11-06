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
    int size, middle;
    char *arr;
    cin >> size;
    arr = (char*) malloc(sizeof(char)*size*size);
    for(int i = 0; i < size*size; i++){
        arr[i] = '.';
    }
    middle = size/2;
    for(int i = 0; i < size; i++){ //cross-vertical-bar
        arr[(i*size)+middle] = '*';
    }
    for(int i = 0; i < size; i++){ //cross-horizontal-bar
        arr[(middle*size)+i] = '*';
    }
    for(int i = 0; i < size; i++){ //diagonal
        arr[(size*i)+i] = '*';
        arr[(i*size) + (size-1-i)] = '*';
    }
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout<<arr[i*size+j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
