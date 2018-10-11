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
    int first, second, third, c = 0;
    cin>>first>>second>>third;
    if (first == second && second == third)
        c = 3;
    else if (first == second)
        c+=2;
    else if (second == third)
        c+=2;
    else if (first == third)
        c+=2;
    cout<<c;
};