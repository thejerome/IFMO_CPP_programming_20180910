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
    int A, B, C, T;
    cin >> A >> B >> C;

    if (A > B)
    {
        T = A;
        A = B;
        B = T;
    }

    if (A > C)
    {
        T = A;
        A = C;
        C = T;
    }

    if (B > C)
    {
        T = B;
        B = C;
        C = T;
    }

    cout << A << " " << B << " " << C;
};