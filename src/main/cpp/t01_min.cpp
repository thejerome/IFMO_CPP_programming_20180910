//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>

using namespace std;

//function min 
int min (int a, int b) {
		return (a < b) ? a : b;
}
//function min4 
int min4 (int a, int b, int c, int d) {
	if (min(a, b) < min(c, d)) {
		return min(a, b);
	}
	else {
		if (min(c, d) < min(a, b)) {
			return min(c, d);
		}
		else {
			if (min(a, c) < min(b, d)) {
				return min(a, c);
			}
			else {
				return min(b, d);
			}
		}
	}
}

int t01_min() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min4(a, b, c, d);
    return 0;
}
