//Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
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
//1 3 5

#include "t01_even.h"
#include <iostream>


using namespace std;

int t01_even() {
int n;
cin >> n;
int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];}
        for(int i = 0;i < n;i++){
            if(i % 2==0){
                cout<<A[i]<<' '; }

        }

    return 0;
}
