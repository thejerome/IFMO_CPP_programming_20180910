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
    int N, x, k;
    cin >> N;
    x=2;
    k=10001;
    while (x<=N) {
        if ((N%x==0) && k>x) {
            k=x;
        }
        ++x;
    }
    cout << k;
};