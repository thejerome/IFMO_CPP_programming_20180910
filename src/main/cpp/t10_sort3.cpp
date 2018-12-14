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
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        int t;
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        int t;
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        int t;
        t = b;
        b = c;
        c = t;
    }
    cout << a << " " << b << " " << c;
};