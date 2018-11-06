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
int n,p;
cin>>n;
int m[n];
for(int z=0; z<n; z++){
    cin>>m[z];
}
p=m[n-1];
for(int z=n-1; z>0; z--){
    m[z]=m[z-1];
}
m[0]=p;
    for(int z=0; z<n; z++){
        cout<<m[z]<<' ';
    }

}
