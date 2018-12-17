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
	string input;
	getline(cin, input);
	string max = "";
	string temp = "";
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == ' ') {
			if (temp.size() > max.size()) {
				max = temp;
			}
			temp = "";
		}
		else {
			temp += input[i];
		}
	}
	if (temp.size() > max.size()) {
		max = temp;
	}
	cout << max;
}
