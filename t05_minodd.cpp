//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
	int a[100], n = 0, num;
	cin >> n;
	num = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (abs (a[i]) % 2 == 1 && (num == 0 || a[i]<num ) ) 
			num = a[i];
	}
	cout << num << endl;	

}
