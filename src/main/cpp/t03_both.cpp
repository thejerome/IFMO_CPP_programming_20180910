//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Входные данные
//
//Вводится число n - количество элементов первого списка, а затем n чисел первого списка.
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
#include <vector>
#include <set>
using namespace std;

int t03_both() {
	int n, M, f, count = 0;
	set<int> a;
	set<int> b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f;
		a.insert(f);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> f;
		b.insert(f);
	}
	for (auto i = a.begin(); i != a.end(); i++) {
		int k = *i;
		for (auto j = b.begin(); j != b.end(); j++) {
			int l = *j;
			if (k == l) {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
