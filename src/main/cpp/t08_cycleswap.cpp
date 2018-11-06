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
    int *arr, len, prv, swp;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }
    prv = arr[0];
    for (int i = 1; i < len; i++){
        swp = arr[i];
        arr[i] = prv;
        prv = swp;
    }
    arr[0] = prv;
    for (int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
