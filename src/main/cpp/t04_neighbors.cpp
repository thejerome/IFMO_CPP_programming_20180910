//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа.
// Если соседних элементов одного знака нет - не выводите ничего.
// Если таких пар соседей несколько - выведите первую пару.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в порядке неубывания их индексов.
//Sample Input:
//
//5
//-1 2 3 -1 -2
//Sample Output:
//
//2 3

#include "t04_neighbors.h"
#include <iostream>


using namespace std;

int t04_neighbors() {
    int count;

    cin >> count;

    int array[count];

    for (int i = 0; i < count; ++i) {
        cin >> array[i];
    }

    for (int j = 0; j < count; ++j) {
        if (array[j] < 0 && array[j + 1] < 0){
            cout << array[j] << ' ' << array[j + 1];
            break;
        }else if (array[j] > 0 && array[j + 1] > 0){
            cout << array[j] << ' ' << array[j + 1];
            break;
        }
    }
}