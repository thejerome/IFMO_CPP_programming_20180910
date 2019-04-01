//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//
//Everyone of us has all we need
//Sample Output:
//
//Everyone

#include "t06_longest.h"
#include <iostream>


using namespace std;

int t06_longest() {
	string n;
	int m = 0, mind = 0, k = 0;
	getline(cin, n);
	for (int i = 0; i < n.length(); i++) {
		if (n[i] != ' ') ++k;
		else k = 0;
		if (k > m) {
			m = k;
			mind = i;
		}
	}
	for (int i = mind - m + 1; i <= mind; i++)
		cout << n[i];
}
