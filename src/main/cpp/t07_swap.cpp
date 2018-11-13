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
    int n, i, j, temp;
    int*Arr;
    cin >> n;
    Arr = new int[n];
    for (i = 0; i < n; i++) {
        cin >> Arr[i];
    }
    temp = Arr[0];
    j = n;
    if (j % 2 != 0) {
        j = j - 1;
    }
    for (i = 1; i < j; i++) {
        if (i % 2 != 0) {
	    Arr[i - 1] = Arr[i];
	    Arr[i] = temp;
	} else {
	    temp = Arr[i];
	}
    }
    for (i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }
}
