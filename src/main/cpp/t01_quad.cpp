//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
//
//Формат входных данных
//        Вводится натуральное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//50
//Sample Output:
//
//1 4 9 16 25 36 49

#include "t01_quad.h"
#include <iostream>

using namespace std;

int t01_quad() {
int N,K;
cin>> N;
K=1;
 while ((K*K)<=N) {cout<<K*K<<" "; K++;}

 return 0;
};