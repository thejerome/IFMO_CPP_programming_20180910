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
    int first, second, third;
    cin >> first >> second >> third;
    int help;
    if (first > second){
        help = first;
        first = second;
        second = help;
    }
    if (second > third){
        help = second;
        second = third;
        third = help;
    }
    if (first > second){
        help = first;
        first = second;
        second = help;
    }
    cout << first << " " << second << " " << third;
};