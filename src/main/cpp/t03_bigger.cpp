//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>


using namespace std;

int t03_bigger() {
    int count;

    cin >> count;

    int array[count];

    for (int i = 0; i < count; ++i) {
        cin >> array[i];
    }

    for (int j = 1; j < count; ++j) {
        if(array[j] > array[j-1]){
            cout << array[j] << ' ';
        }
    }
}