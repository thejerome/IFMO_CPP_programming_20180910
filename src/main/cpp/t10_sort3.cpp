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
    int a,b,c,o;
    cin >>a>>b>>c>>o;
    if (b>a) {o=a; a=b; b=o;}
    if (c>b) {o=b; b=c; c=o;}
    if (b>a) {o=a; a=b; b=o;}
    cout<<c<<" "<<b<<" "<<a;
};