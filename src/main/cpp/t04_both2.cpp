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
#include <vector>
using namespace std;

int t04_both2() {
	int n, m;
	set<int> a;
	set<int> b;
	vector<int> result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int f;
		cin >> f;
		a.insert(f);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int l;
		cin >> l;
		b.insert(l);
	}
	for (auto i = a.begin(); i != a.end(); i++) {
		int f = *i;
		for (auto j = b.begin(); j != b.end(); j++) {
			int g = *j;
			if (f == g) {
				result.push_back(f);
			}
		}
	}
	for (int i = 0; i < (result.size() - 1); i++) {
		for (int j = i + 1; j < result.size(); j++) {
			if (result[i] > result[j]) {
				int t = result[j];
				result[j] = result[i];
				result[i] = t;
			}
		}
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	return 0;
}
