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
    int N, M, f1, f2, fn;
    cin >> N;
    fn=0;
    f1=1;
    f2=1;
    M=3;
    if (N<M && N!=0){
        fn=1;}
    if (N >= M)
        while (M <= N){
            fn=f1+f2;
            f1=f2;
            f2=fn;
            M++; }
    cout << fn;
    return 0;

};