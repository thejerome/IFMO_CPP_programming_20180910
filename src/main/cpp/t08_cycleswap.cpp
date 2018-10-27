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
// Done
int t08_cycleswap() {
    int mas[100],
            i, n, mas_last;

    cin >> n;

    for (i = 0; i < n; i++){
        cin >> mas[i];
    }

    mas_last = mas[n-1];

    for (i = n-1; i > 0; i--){
        mas[i] = mas[i-1];
    }
    mas[0] = mas_last;

    for (i = 0; i < n; i++){
        cout << mas[i] << ' ';
    }
    return 0;
}
