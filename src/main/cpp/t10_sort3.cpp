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
    int a,b,c;
    cin >> a >> b >> c;
    if (a >= b && b >= c) cout << c << ' ' << b << ' ' << a;
    else if (b >= a && a >= c) cout << c << ' ' << a << ' ' << b;
    else if (a >= c && c >= b) cout << b << ' ' << c << ' ' << a;
    else if (c >= a && a >= b) cout << b << ' ' << a << ' ' << c;
    else if (c >= b && b >= a) cout << a << ' ' << b << ' ' << c;
    else if (b >= c && c >= a) cout << a << ' ' << c << ' ' << b;
};