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
    int a, b;
    int c;
    cin >> a >> b >> c;
    int t;
    if (b < a) {
        t = a;
        a = b;
        b = t;
    }
    if (c < b) {
        t = b;
        b = c;
        c = t;
    }
    if (b < a) {
        t = a;
        a = b;
        b = t;
    }
    cout << a << " " << b << " " << c;
};