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
    int A, B, C, temp;
    cin >> A >> B >> C;
    if (A >= B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A >= C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B >= C) {
        temp = B;
        B = C;
        C = temp;
    }
    cout << A << " " << B << " " << C;
    return 0;
 };
