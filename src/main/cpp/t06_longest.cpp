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
#include <string>

using namespace std;

int t06_longest() {
	string sentence;
	getline(cin, sentence);
	int word_lenght = 0, max_word_lenght = 0, position = 0;
	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] != ' ') {
			word_lenght++;
		}
		else {
			if (word_lenght > max_word_lenght) {
				max_word_lenght = word_lenght;
				position = abs(max_word_lenght - i);
			}
			word_lenght = 0;
		}
	}
	if (word_lenght > max_word_lenght) {
		max_word_lenght = word_lenght;
		position = sentence.size() - max_word_lenght;
	}
	for (int i = position; i < position + max_word_lenght; i++) {
		cout << sentence[i];
	}
	cout << endl;
}
