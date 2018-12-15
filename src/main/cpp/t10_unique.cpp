//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
    int count;
    bool flag = true;

    cin >> count;

    int array[count];

    for (int i = 0; i < count; ++i) {
        cin >> array[i];
    }

    for (int j = 0; j < count; ++j) {
        for (int k = 0; k < count; ++k) {
            if(array[j] == array[k] & k != j){
                flag = false;
            }
        }
        if(flag){
            cout << array[j] << ' ';
        }
        flag = true;
    }
}