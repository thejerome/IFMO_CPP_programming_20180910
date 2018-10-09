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
    int a, b, c, s;
    cin >> a >> b >> c;
    if (a > b){
        s = a;
        a = b;
        b = s;
    }
    if (b > c){
        s = b;
        b = c;
        c = s;
    }
    if (a > b){
        s = a;
        a = b;
        b = s;
    }
    cout << a << ' ' << b << ' ' << c;
};