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
    int a, b, c, pa;
    cin >> a >> b >> c;
    if (a >= b){
    pa = a;
    a = b;
    b = pa;
    }
    if(a >= c){
    pa = a;
    a = c;
    c = pa;
    }
    if (b >= c){
    pa = b;
    b = c;
    c = pa;
    }
    cout << a << " " << b << " " << c;
 };
