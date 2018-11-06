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
    int N;
    cin >> N;
    int A[N];
    int temp;
    for (int i=0; i<N; i++){
        cin >> A[i];
    }
    for (int j=N-1; j>0; j--){
        temp = A[j];
        A[j] = A[j-1];
        A[j-1] = temp;
    }
    for (int k=0; k<N; k++){
        cout << A[k] << " ";
    }
    return 0;


}
