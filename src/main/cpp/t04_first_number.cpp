//Первая цифра двузначного числа
//
//Дано двузначное число. Выведите его первую цифру (число десятков)
//
//Формат входных данных
//
//        На вход дается натуральное двузначное число N.
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//42
//Sample Output:
//
//4

#include "t04_first_number.h"
#include <iostream>

using namespace std;

int t04_first_number() {
    int number, first_number;
    cin >> number;
    first_number = number /10;
    cout << first_number;
};