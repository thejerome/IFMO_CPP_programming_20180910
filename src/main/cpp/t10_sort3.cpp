//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
int a,b,c,hand;
    cin>>a>>b>>c;
    if(a>b){
        hand=a;
        a=b;
        b=hand;
    }
    if(a>c){
        hand=a;
        a=c;
        c=hand;
    }
    if(b>c){
        hand=b;
        b=c;
        c=hand;
    }
    cout<<a<<" "<<b<<" "<<c;
};