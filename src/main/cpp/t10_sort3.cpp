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
    int a, b, c, max_1, max_2, max_3;
    cin >> a >> b >> c;
    if (a >= b)
        if (c >= a){
            max_1 = c;
            max_2 = a;
            max_3 = b;
        }
        else if (c >= b){
            max_1 = a;
            max_2 = c;
            max_3 = b;
        }
        else{
            max_1 = a;
            max_2 = b;
            max_3 = c;
        }
    else if (c >= b){
        max_1 = c;
        max_2 = b;
        max_3 = a;
    }
    else if (c >= a){
        max_1 = b;
        max_2 = c;
        max_3 = a;
    }
    else{
        max_1 = b;
        max_2 = a;
        max_3 = c;
    }
    cout << max_3 << " " << max_2 << " " << max_1;
};