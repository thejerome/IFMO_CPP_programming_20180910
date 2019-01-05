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
int a, b, c, tmp;
cin>>a>>b>>c;
if (a>b)
{
    tmp=a;
    a=b;
    b=tmp;
}
if(b>c)
{
    tmp=c;
    c=b;
    b=tmp;
}

if (a>b)
{
    tmp=a;
    a=b;
    b=tmp;
}
cout<<a<<' '<<b<<' '<<c;
};