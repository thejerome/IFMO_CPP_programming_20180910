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
    int N,t,f1=0,f2=1;
    cin >> N;
    int i = 2;
    if (N == 0 || N ==1) cout << N;
    else{
        while (i<= N){
            t = f2;
            f2 = f1 + f2;
            f1 = t;
            i++;
        }
        cout<<f2;
    }

    //int i=3;
    //int N, result1, result2; fibb;
    //cin>>N;
    //fibb = 0;
    //if ((N == 1 )|| (N == 2)) fibb = 1;
    //else if(N > 2){
    //    fibb = 1;
    //    while(i <= N){
    //        fibb = result1 + result2;
    //        i++;
    //    }
    //}
    //cout<<fibb;
    return 0;


};