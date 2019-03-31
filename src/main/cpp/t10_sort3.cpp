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
	int A, B, C;
	cin >> A >> B >> C;
	int x;
	if (A > B) { x = A; A = B; B = x; }
	if (A > C) { x = A; A = C; C = x; }
	if (B > C) { x = B; B = C; C = x; }

	cout << A << " " << B << " " << C;
	return 0;
};