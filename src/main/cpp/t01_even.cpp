//Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
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
//1 3 5

#include "t01_even.h"
#include <iostream>


using namespace std;

int t01_even() {
    int *arr, len;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    for (int i = 0; i < len; i++){
        cin >> arr[i];
        if (i%2 == 0){
            cout << arr[i]<< " ";
        }
    }
    free(arr);
    return 0;
}
