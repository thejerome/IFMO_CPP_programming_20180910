//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {
    int N, NN;
    cin >> N;
    int F0=0, F1 = 1;
    if (N == 0)
        cout << F0;
    if (N == 1)
        cout << F1;
    if ( N > 1) {
        while (N > 1) {
            --N;
            NN = F0 + F1;
            F0 = F1;
            F1 = NN;
        }
        cout << NN;
    }
};