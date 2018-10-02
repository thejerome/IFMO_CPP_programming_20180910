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
    if (a < b && a < c) {
        cout << a << " ";
        if (b < c)
            cout << b << " " << c;
        else
            cout << c << " " << b;
    }
    else
        if (b < c && b < a) {
            cout << b << " ";
            if (a < c)
                cout << a << " " << c;
            else
                cout << c << " " << a;
        }
        else {
            cout << c << " ";
            if (a < b)
                cout << a << " " << b;
            else
                cout << b << " " << a;
        }
};