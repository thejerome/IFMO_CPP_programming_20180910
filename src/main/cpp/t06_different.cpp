//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
    int count,counter,last;

    cin >> count;

    int array[count];
    counter = 0;
    last = 0;
    for (int i = 0; i < count; ++i) {

        cin >> array[i];

        if(array[i] != last){
            counter++;
        }
        last = array[i];
    }

    cout << counter;
}