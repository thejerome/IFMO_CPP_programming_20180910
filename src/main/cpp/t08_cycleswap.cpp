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
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i < n; i++) {
        cin>>a[i];
    }
    int last = a[n-1];
    for (int i=1, prev = a[0]; i < n; i++) {
        int tmp = a[i];
        a[i] = prev;
        prev = tmp;
    }
    a[0] = last;

    for (int i=0; i < n; i++)
        cout<<a[i]<<' ';
}
