//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
//
//Формат входных данных
//        Вводится натуральное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//50
//Sample Output:
//
//1 4 9 16 25 36 49

#include "t01_quad.h"
#include <iostream>

using namespace std;

int t01_quad() {
    int inp, counter = 1;
    cin >> inp;
    while (counter*counter <= inp)
    {
        cout<<counter*counter<<" ";
        counter++;
    }
    return 0;
};