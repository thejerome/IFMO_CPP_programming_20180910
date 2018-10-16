//Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//2
//1
//0
//Sample Output:
//
//2

#include "t10_max_local.h"
#include <iostream>

using namespace std;

int t10_max_local() {
    int N1=0, N2=0, N3=0, N, sum=0;
    cin >> N;
    N1=N;
    while (N!=0) {
        cin >> N;
        N3=N2;
        N2=N1;
        N1=N;
        if (((N2!=0)&&(N3!=0))&&((N2>N1)&&(N2>N3))) {
            sum=sum+1;
        }
    }
    cout << sum;
};
