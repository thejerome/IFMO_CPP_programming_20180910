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
    int n,m,x=2,F1=0,F2=1;
    cin >> n;
    while (x<=n) {
        m=F1+F2;
        F1=F2;
        F2=m;
        x++;
    } if (n<=1){
        cout << n;
    } else
        cout << m;
};