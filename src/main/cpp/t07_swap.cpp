//Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//2 1 4 3 5

#include "t07_swap.h"
#include <iostream>


using namespace std;

int t07_swap() {
    int count,temp;

    cin >> count;

    int array[count];

    for (int i = 0; i < count; ++i) {
        cin >> array[i];
    }

    for (int j = 0; j < count; j += 2) {
        if(count - j > 1) {
            temp = array[j + 1];
            array[j + 1] = array[j];
            array[j] = temp;
        }
    }

    for (int k = 0; k < count; ++k) {
        cout << array[k] << ' ';
    }
}