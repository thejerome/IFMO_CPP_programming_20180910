//Выведите все четные элементы массива.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
//Sample Input:
//
//7
//1 2 2 3 3 3 4
//Sample Output:
//
//2 2 4

#include "t02_even2.h"
#include <iostream>


using namespace std;

int t02_even2() {
    int i, j, k;
    cin >> i;
    int a[i];
    for (int j = 0; j < i; ++j) {

        cin >> a[j];
    }
    for (int k = 0; k < i; ++k) {
        if (a[k] % 2 == 0) {
            cout << a[k]<<' ';
        }
    }
}
