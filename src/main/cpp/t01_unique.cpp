//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>
#include <set>

using namespace std;

int t01_unique() {
	int N,
		count = 0;
	set <int> numbers;
	cin >> N;
	for (int i=0; i<N; i++) {
		int number = 0;
		cin >> number;
		numbers.insert(number);
	}
	for (auto n : numbers) {
		count++;
	}
	cout << count;
    return 0;
}
