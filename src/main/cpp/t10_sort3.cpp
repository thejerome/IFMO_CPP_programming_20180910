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
    int A, B, C;
    cin >> A >> B >> C;
    if (A <= B && A <= C  && B <= C) {
    cout << A << " " << B << " " << C;
    } else if (A <= B && A <= C  && B >= C) {
    cout << A << " " << C << " " << B;
   } else if (B <= A && B <= C  && A <= C) {
    cout << B << " " << A << " " << C;
   } else if (B <= A && B <= C  && A >= C) {
    cout << B << " " << C << " " << A;
   } else if (C <= A && C <= B  && A <= B) {
    cout << C << " " << A << " " << B;
   } else if (C <= A && C <= B  && A >= B) {
    cout << C << " " << B << " " << A;
    }
};