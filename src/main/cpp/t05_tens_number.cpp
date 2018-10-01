//Число десятков
//
//Дано целое неотрицательное число N, определите число десятков в нем (предпоследнюю цифру числа). Если предпоследней цифры нет, то можно считать, что число десятков равно нулю.
//
//Формат входных данных
//
//        На вход дается целое положительное число N (0 ≤ N ≤ 1000000).
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//73
//Sample Output:
//
//7

#include "t05_tens_number.h"
#include <iostream>

using namespace std;

int t05_tens_number() {
    int num;
    int result;
    cin >> num;
    if ( (num >= 0) && (num <= 9) && (typeid(num) == typeid(int)) ) result = 0;
    else if ( (num >= 10) && (num <= 99) && (typeid(num) == typeid(int)) ) result = num / 10;
    else if ( (num >= 100) && (num <= 1000000) && (typeid(num) == typeid(int))) result = num / 10 % 10;
    else
    {
        cout << "Please enter a positive integer not greater than 1000000";
    }
    cout << result;

    return 0;

};