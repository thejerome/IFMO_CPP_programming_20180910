//Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение наибольшего элемента последовательности.
//
//Формат входных данных
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//9

#include "t05_max.h"
#include <iostream>

using namespace std;

int t05_max() {
    int m, k, i;
    cin >> i;
    m = i;
    k = 0;
    while (i != 0) {
        if (i > m) {
            m = i;
            k = 1;
        }
        else if (i == m) {
            k = k + 1;
        }
        cin >> i;
    }

    cout << k;

};