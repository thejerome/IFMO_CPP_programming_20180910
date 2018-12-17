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
	set<int> values1;
	set<int> fin;
	int n;
	int m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		values1.insert(temp);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		if (values1.count(temp)) {
			fin.insert(temp);
		}
	}
	for (auto i = fin.begin(); i != fin.end(); i++) {
		cout << *i << ' ';
	}
}
