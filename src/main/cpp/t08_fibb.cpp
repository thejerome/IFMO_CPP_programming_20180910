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
    int n, f0 = 0, f1 = 1, current = 0, i = 1;
    cin>>n;
    if (n == 1){
        cout<<f1;
        return 0;
    }
    while (i < n) {
        current = f0 + f1;
        f0 = f1;
        f1 = current;
        i++;
    }
    cout<<current;
};