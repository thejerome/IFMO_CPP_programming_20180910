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
    int *arr, len, unique;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    cin >> arr[0];
    unique = 1;
    for (int i = 1; i < len; i++){
        cin >> arr[i];
        if (arr[i]!=arr[i-1]){
            unique++;
        }
    }
    cout << unique;
    return 0;
}
