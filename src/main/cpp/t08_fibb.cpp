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
    int a,b,fib,n;
    cin>>n;
    a=0;
    b=1;
    if (n==0 || n==1) {
        if (n == 0) {
            cout << a;
        }
        if (n == 1) {
            cout << b;
        }
    }else {
        n=n-1;
        while (n!=0) {
            fib=a+b;
            a=b;
            b=fib;
            n=n-1;
        }
        cout<<fib;
    }
};