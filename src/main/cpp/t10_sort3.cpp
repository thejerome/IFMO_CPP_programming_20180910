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
   int a, b, c ,k;
    cin >> a >> b >> c;
    if (a>b)
    {k = b; b = a; a = k;};
    if (b>c)
    {k = b; b = c; c = k;};
    if (a>b)
    {k = b; b = a; a = k;};
    cout << a << " " << b << " " << c;
};