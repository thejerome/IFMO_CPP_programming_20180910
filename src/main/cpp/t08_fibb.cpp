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
    int N,f0,f1,f2;
    bool t = 0;
    f0 = 0;
    f1 = 1;
    int i = 2;
    cin >> N;
    if( N == 0) {
        cout << f0;
        t = 1;
    }
    if ( N == 1){
        cout << f1;
        t = 1;
    }
    while((i <= N)&& !t){
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
        i++;
    }
    if (!t)
        cout << f2;
};