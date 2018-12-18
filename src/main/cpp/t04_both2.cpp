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
	multiset <int> numbers;
	set <int> both;
	int N,M;
	cin >> N;
	for (int i=0; i<N; i++) {
		int number1 = 0;
		cin >> number1;
		numbers.insert(number1);
	}
	cin >> M;
	for (int i=0; i<M; i++) {
		int number2 = 0;
		cin >> number2;
		if (numbers.find(number2) != numbers.end()) {
			both.insert(number2);
		}
	}
	for (auto n : both) {
		cout << n << " ";
	}
	return 0;
}
