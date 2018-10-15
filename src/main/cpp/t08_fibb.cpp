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
    int N, fibn,fib1,fib2, a;
    cin>>N;
    a=3;
    fibn=0;
    fib1=1;
    fib2=1;
    if (N<a and N!=0){
        fibn=1;}
    if (N>=a)
        while (a <= N){
            fibn=fib1+fib2;
            fib1=fib2;
            fib2=fibn;
            a++; }
    cout << fibn;


};