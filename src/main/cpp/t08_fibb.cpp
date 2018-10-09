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
    int n, f1, f2, pos;
    cin >> n;
    pos = 2;
    f1 = 0;
    f2 = 1;
    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else
        while (pos != n+1){
            f1 = f1 + f2;
            pos += 1;
            if (pos == n+1){
                cout << f1;
                break;
            }
            f2 = f1 + f2;
            pos += 1;
            if (pos == n+1) {
                cout << f2;
                break;
            }
        }

};