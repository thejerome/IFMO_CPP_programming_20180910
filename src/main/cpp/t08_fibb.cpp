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
    int N, prev;
    int i = 2;
    cin >> N;

    int F1 = 1;
    int F2 = 1;
    if (N == 1 | N == 2)
    {
        cout << '1';
        exit(0);
    }

    if (N)
    {
        while (N - i)
        {
            prev = F2;
            F2 += F1;
            F1 = prev;
            i++;
        }
        cout << F2;
    }
    else cout << '0';
    return 0;
};