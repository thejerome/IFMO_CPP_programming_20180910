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
    int N, F, F1, s;
    cin >> N;
    F=1;
    F1=0;
    s=0;
    if (N==0) {
        cout << "0";
    }
    else if (N==1) {
        cout << "1";
    }
    else {
        while (N>1) {
            N=N-1;
            s=F+F1;
            F1=F;
            F=s;
        }
        cout << s;
    }

};