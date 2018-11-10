//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
	int number, a[100], pairs = 0, quantaty;
	cin >> number;
	for (int i = 0; i < number; i++)
		cin >> a[i];
	for (int i = 0; i < number - 1; i++) {
		if (a[i] == 0)
			continue;
		quantaty = 1;
		for (int j = i + 1; j < number; j++) {
			if (a[i] == a[j]) {
				quantaty++;
				a[j] = 0;
			}
		}
		pairs += quantaty * (quantaty - 1) / 2;
	}
	cout << pairs << endl;
}
