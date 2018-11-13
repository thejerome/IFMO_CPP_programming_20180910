//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. Если соседних элементов одного знака нет - не выводите ничего. Если таких пар соседей несколько - выведите первую пару.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в порядке неубывания.
//Sample Input:
//
//5
//-1 2 3 -1 -2
//Sample Output:
//
//2 3

#include "t04_neighbors.h"
#include <iostream>


using namespace std;

int t04_neighbors() {
	int A;
	cin >> A;
	int Arr[A];
	for (int i = 0; i < A; i++)
		cin >> Arr[i];
	for (int i = 0; i < A; i++)
		if ((Arr[i] > 0 && Arr[i + 1] > 0) || (Arr[i] < 0 && Arr[i + 1] < 0)) {
			cout << Arr[i] << " " << Arr[i + 1];
			break;
		}
}
