//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//
//Формат входных данных
//        Вводится целое положительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//15
//Sample Output:
//
//3

#include "t02_divisor.h"
#include <iostream>

using namespace std;

int t02_divisor() {
    int n, a, k;
    cin >> n;
    a=2;
    k=10001;
    while (a<=n) {
        if ((n%a==0) && k>a)
            k=a;
        ++a;
    }
    cout << k;
};