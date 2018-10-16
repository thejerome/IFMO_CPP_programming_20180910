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
    cin>>a>>b>>c;
    if ((a<=b) && (a<=c) && (b<=c)) cout << a <<" "<< b << " " << c;
    else if ((b<=c) && (c<=a)) cout << b <<" " << c <<" " << a;
    else if ((b<=c) && (a<=c)) cout << b <<" " << a <<" " << c;
    else if (b<=a) cout << c <<" " << b <<" " << a;
    else cout << c <<" " << a <<" " << b;
    return 0;

};