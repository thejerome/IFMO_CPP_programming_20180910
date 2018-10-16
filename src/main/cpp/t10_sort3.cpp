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
    int a, b ,c, n;
    cin  >> a >> b >> c;
    if (a > b) {
        n = b;
        b = a;
        a = n;
    }
    if (b > c) {
        n = c;
        c = b;
        b = n;
    }
    if (a > b) {
        n = a;
        a = b;
        b = n;
    }
    cout << a << " " << b << " " << c;
};