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
    int n; cin >> n;
    int f1, f2, f = 0;
    f1 = f2 = 1;
    if (n >= 3) {
        for (int i = 3; i<=n; ++i) {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
    } else if(n > 0) f = f1;
    cout << f;
};