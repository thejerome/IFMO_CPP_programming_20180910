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
    int num, sum;
    cin >> num;
    if ((num >= 100) && (num <= 999) && (typeid(num) == typeid(int)))
    {
        sum = num % 10 + num / 10 % 10 + num / 100;
        cout << sum;
    }
    else
    {
        cout << "Please enter a three-digit number";
    }

    return 0;
};