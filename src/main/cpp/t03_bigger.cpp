//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>


using namespace std;

int t03_bigger() {
    int *arr, len;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    cin >> arr[0];
    for (int i = 1; i < len; i++){
        cin >> arr[i];
        if (arr[i] > arr[i-1]){
            cout << arr[i]<<" ";
        }
    }
    free(arr);
    return 0;
}
