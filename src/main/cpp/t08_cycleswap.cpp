//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
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
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {

    int a;
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int last = arr[a - 1];
    for (int i = 1, f = arr[0]; i < a; i++) {
        int t = arr[i];
        arr[i] = f;
        f = t;
    }
    arr[0] = last;
    for (int i = 0; i < a; i++)
        cout << arr[i] << ' ';

}
