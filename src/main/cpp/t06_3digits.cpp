//Сумма цифр трехзначного числа
//
//Дано целое трехзначное число. Найдите сумму его цифр.
//
//Формат входных данных
//
//        На вход дается число от 100 до 999.
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//476
//Sample Output:
//
//17

#include "t06_3digits.h"
#include <iostream>

using namespace std;

int t06_3digits() {
    int inp, sum;
    cin >> inp;
    sum += inp / 100; // first digit
    sum += (inp % 100) / 10; // second digit
    sum += inp % 10; // third digit
    cout << sum;
    return 0;
};