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
	int N;
	cin>>N;
	int ed=N%10;
	N = N/10;
	int des=N%10;
	N = N/10;
	int sot=N%10;
	cout << ed+des+sot;
	return 0;
};
