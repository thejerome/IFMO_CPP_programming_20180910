//Последняя цифра
//
//Дано натуральное число, выведите его последнюю цифру.
//
//Формат входных данных
//
//        На вход дается натуральное число N, не превосходящее 10000.
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//753
//Sample Output:
//
//3

#include "t03_last_number.h"
#include <iostream>

using namespace std;

int t03_last_number() 
{
	int input;
	cin >> input;
	cout << input % 10;

	return 0;
};