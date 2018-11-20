//2] c A[3] и т.д.). Если элементов нечетное число, то поПереставьте соседние элементы массива (A[0] c A[1], A[следний элемент остается на своем месте.
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
    int i;
    cin >> i;
    int arr[i];
    for (int j = 0; j < i; j++) {
        cin >> arr[j];
    }
    if (i % 2 == 0) {
        for (int j = 0; j < i; j = j + 2) {
            int t = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = t;
        }
    } else {
        for (int j = 0; j < i - 1; j = j + 2) {
            int t = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = t;
        }
    }
    for (int j = 0; j < i; j++) {
        cout << arr[j] << " ";
    }
}
