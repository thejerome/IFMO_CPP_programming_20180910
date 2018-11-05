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
int n, first, second, now;
first = second = 1;
cin >> n;
if(n==0) {cout<<0; return 0;}
 if (n==1||n==2) {cout<<1; return 0;} else
     for(int z=3; z<=n;z++){
         now = first+second;
         first = second; second = now;
     }
     cout<<now;
};