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

	string s;
	getline(cin, s);

	int l = 0, r = 0, maxl = 0, maxr = 0;

	while (r < s.length()) {
		r = s.find(' ', r);
		r = (r == -1) ? s.length() : r;

		if (r - l > maxr - maxl) {
			maxl = l;
			maxr = r;
		}
		r++;
		l = r;
	}
	cout << s.substr(maxl, maxr - maxl);
}