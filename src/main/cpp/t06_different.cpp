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
    int i;
    cin >> i;
    int arr[i];
    int k = 0;
    for (int j = 0; j < i; j++) {
        cin >> arr[j];
    }
    for (int j = 0; j < i; j++) {
        if (arr[j] != arr[j + 1])
            k = k + 1;
    }
    cout << k;
}
