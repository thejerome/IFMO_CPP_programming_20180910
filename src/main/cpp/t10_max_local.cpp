//Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//2
//1
//0
//Sample Output:
//
//2

#include "t10_max_local.h"
#include <iostream>

using namespace std;

int t10_max_local() {
    int first, second, third;
    cin >> first;
    cin >> second;
    if (second != 0) {
        third = 1;
        int i = 0;
        while (1) {
            cin >> third;
            if (third == 0) { break; }
            if (second > first && second > third) {
                i = i + 1;
            }
            first = second;
            second = third;
        }
        cout << i;
    }
    else {
        cout << 0;
    }
};