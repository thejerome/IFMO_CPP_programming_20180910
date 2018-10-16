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
    int a=0,b=1, inp, counter = 0;

    cin >> inp;
    while (counter < inp-1)
    {
        int result;
        result = a + b;
        a = result;
        counter++;
        result = a + b;
        b = result;
        counter++;
    }
    if (counter < inp) {cout<<b;}
    else {cout<<a;}
    return 0;
};
