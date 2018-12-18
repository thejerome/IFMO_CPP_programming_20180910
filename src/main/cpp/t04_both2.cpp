//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
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
//2 3

#include "t04_both2.h"
#include <iostream>
#include <set>

using namespace std;

int t04_both2() {
	set <int> First_list, Second_list, Union_of_lists;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		Union_of_lists.insert(a);
		First_list.insert(a);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		Union_of_lists.insert(a);
		Second_list.insert(a);
	}
	for (auto i = Union_of_lists.begin(); i != Union_of_lists.end(); i++) {
		if (First_list.count(*i) > 0 && Second_list.count(*i) > 0)
			cout << *i << ' ';
		cout << endl;
	}
}
