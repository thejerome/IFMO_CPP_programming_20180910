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

    if ((a <= b && a <= c) && c <= b) {
        cout << a << " " << c << " " << b;
    }

        else if ((a <= b && a <= c) && b < c) {
        cout << a << " " << b << " " << c;
    }

        else if ((b <= a && b <= c) && a != b && a <= c)    {
        cout << b << " " << a << " " << c;
    }

        else if ((b <= a && b <= c) && c < a) {
        cout << b << " " << c << " " << a;
    }

        else if ((c <= a && c <= b) && a <= b && c != a) {
        cout << c << " " << a << " " << b;
    }

        else if ((c <= a && c <= b) && b <= a && c != b) {
        cout << c << " " << b << " " << a;
    }

};