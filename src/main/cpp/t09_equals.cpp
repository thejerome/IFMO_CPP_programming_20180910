//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
    int *arr, len, cur, pairs=0;
    cin >> len;
    arr = (int*) malloc(sizeof(int)*len);
    for (int i = 0; i < len; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < len-1; i++){
        cur = arr[i];
        for(int j = i+1; j < len; j++ ){
            if (cur==arr[j]){pairs++;}
        }
    }
    cout<<pairs;
    free(arr);
    return 0;
}
