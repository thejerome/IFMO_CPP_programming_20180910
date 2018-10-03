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
    int i = 2, pos1, pos2;
    int n, s = 0;
    cin >> n;
    pos1 = 0;
    pos2 = 1;
    if (n == 0) {
        cout << 0;
    }
    else if (n == 1) {
        cout << 1;
    }
    else {
        while (i <= n) {
            s = pos1 + pos2;
            pos1 = pos2;
            pos2 = s;
            i = i + 1;
        }
        cout << s;
    }
};