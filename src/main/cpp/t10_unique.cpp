//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
    int *arr, cur;
    unsigned int len;
    bool *uar;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    uar = (bool*) calloc(len, sizeof(bool));
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < len; i++){
        cur = arr[i];
        for(int j = i+1; j < len; j++){
            if (arr[j] == cur){
                uar[i]=true;
                uar[j]=true;
            }
        }
    }
    for (int i = 0; i < len; i++){
        if (!uar[i]){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
