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
        if ((A<=B && A<=C)&& C<=B)
            cout << A << " " << C << " " << B;
        if ((A<=B && A<=C)&& B<C)
            cout << A << " " << B << " " << C;
        if ((B<=A && B<=C)&& A!=B && A<=C)
            cout << B << " " << A << " " << C;
        if ((B<=A && B<=C)&& C<A)
            cout << B << " " << C << " " << A;
        if ((C<=A && C<=B)&& A<=B && C!=A)
            cout << C << " " << A << " " << B;
        if ((C<=A && C<=B)&& B<=A && C!=B)
            cout << C << " " << B << " " << A;
    return 0;

};