//Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//2
//1
//0
//Sample Output:
//
//2

#include "t10_max_local.h"
#include <iostream>

using namespace std;

int t10_max_local() {
    int k=0,n=0,m=0,x,y,z;
    cin>>x>>y>>z;
    do
    {
        k++;
        if((y>z)&&(x<y))
        {
            n++;
            if((n>1)&&(n==2||n>2&&k<m)) {
                m = k;
            }
            k=0;
        }
        x=y;
        y=z;
        cin>>z;}
    while(z);
    cout<<m;
};