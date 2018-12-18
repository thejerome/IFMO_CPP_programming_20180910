//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2

#include "t03_both.h"
#include <iostream>
#include <set>

using namespace std;

int t03_both() {
	set <int> Number_list;
	int result = 0, list_size;
	cin >> list_size;
	for (int i = 0; i < list_size; i++) {
		int element;
		cin >> element;
		Number_list.insert(element);
	}
	cin >> list_size;
	for (int i = 0; i < list_size; i++) {
		int a;
		cin >> a;
		if (Number_list.count(a) > 0)
			result++;
	}
	cout << result << endl;
}
