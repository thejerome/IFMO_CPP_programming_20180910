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
    int	i,n,last;
    cin	>>	n;
    int v[n];
    for	(int m=0;m<n;m++){
        cin	>>	v[m];
    }
    last=v[n-1];
    for	(int	m=	n-1;m>0;m--){
        i=v[m-1];
        v[m-1]=v[m];
        v[m]=i;
    }
    v[0]=last;

    for    (auto now    :    v){
        cout<<now<<" ";
    }
}
