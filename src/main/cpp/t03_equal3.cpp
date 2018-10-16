//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//0

#include "t03_equal3.h"
#include <iostream>

using namespace std;

int t03_equal3() {
    int A, B, C, counter;
    counter = 0;
    cin >> A >> B >> C;
    if (A == B) {
        counter = 2;
        if (A == C) {
            counter  = counter + 1;
        }
    } else if (A == C) {
        counter = 2;
        if (A == B) {
            counter = counter + 1;
        }
    } else if (B == C) {
        counter = 2;
        if (B == A) {
            counter = counter + 1;
        }
    }
    cout << counter;
}