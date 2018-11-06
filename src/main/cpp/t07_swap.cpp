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
    int *arr, len, swp;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    for (int i=0; i < len; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < len-1; i+=2){
        swp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = swp;
    }
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
