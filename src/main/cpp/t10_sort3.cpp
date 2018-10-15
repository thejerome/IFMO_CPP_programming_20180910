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
    int A, B, C, foo;
    cin >> A >> B >> C;
    if (A >= B) {
        foo = A;
        A = B;
        B = foo;
    }
    if(A >= C) {
        foo = A;
        A = C;
        C = foo;
    }
    if (B >= C) {
        foo = B;
        B = C;
        C = foo;
    }
    cout << A << " " << B << " " << C;
 };
