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
    int *arr, len;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    for (int i = 0; i < len; i++){
        cin >> arr[i];
        if (arr[i]%2 == 0){
            cout << arr[i] << " ";
        }
    }
    free(arr);
    return 0;
}
