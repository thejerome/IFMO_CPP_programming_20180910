//В обувном магазине продается обувь разного размера. 
// Известно, что одну пару обуви можно надеть на другую, 
// если она хотя бы на три размера больше. 
// В магазин пришел покупатель. 
// Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так,
// чтобы он смог надеть их все одновременно.
//
//Входные данные
//
//Сначала вводится размер ноги покупателя 
// (обувь меньшего размера он надеть не сможет),
// затем количество пар обуви в магазине и размер каждой пары.
// Размер — натуральное число, не превосходящее 100, 
// количество пар обуви в магазине не превосходит 1000.
//
//Выходные данные
//
//Выведите единственное число — максимальное количество пар обуви.
//
//Sample Input:
//
//26
//5
//30 35 40 41 42
//Sample Output:
//
//3

#include "t02_shoes.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t02_shoes() {
	int size;
	unsigned int amount_of_shoes;
	cin >> size;
	cin >> amount_of_shoes;
	vector<int> shoes(amount_of_shoes);
	int count = 0;
	for (int i = 0; i < amount_of_shoes; i++) {
		cin >> shoes[i];
	}
	sort(shoes.begin(), shoes.end());
	for (int j = 0; j < amount_of_shoes; j++) {
		if (shoes[j] >= size) {
			size = shoes[j];
			count++;
			break;
		}
	}
	for (int j = 0; j < amount_of_shoes; j++) {
		if ((shoes[j] - size) >= 3) {
			size = shoes[j];
			count++;
		}
	}
	cout << count << endl;
}
