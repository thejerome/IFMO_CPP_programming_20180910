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
    int n, i,temp;
    int*Arr;
    cin >> n;
    Arr = new int[n];
    for (i = 1; i <= n; i++) {
	if (i == n) {
	    cin >> temp;
	}	
        cin >> Arr[i];
    }
    Arr[0] = temp;
    for (i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }
}
