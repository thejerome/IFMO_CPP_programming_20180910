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
    if ((a <= b) and (b <= c))
        cout << a << ' ' << b << ' ' << c;
    else
        if ((a <= c) and (c <= b))
        cout << a << ' ' << c << ' ' << b;
        else
            if ((c <= a) and (a <= b))
                cout << c << ' ' << a  << ' ' << b;
            else
                if ((b <= c) and (c <= a))
                    cout << b << ' ' << c  << ' '<< a;
                else
                    if ((c <= a ) and (b <= a))
                        cout << c << ' ' << b  << ' ' << a;
                    else
                        if ((b <= a) and (a <= c))
                            cout << b << ' ' << a << ' ' << c;





};