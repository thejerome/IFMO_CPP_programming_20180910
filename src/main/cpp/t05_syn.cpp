//Вам дан словарь, состоящий из пар слов. 
// Каждое слово является синонимом к парному ему слову. 
// Все слова в словаре различны. 
// Для одного данного слова определите его синоним.
//
//Входные данные
//
//Программа получает на вход количество пар синонимов N. 
// Далее следует N строк, каждая строка содержит ровно два слова-синонима. 
// После этого следует одно слово.
//
//Выходные данные
//
//Программа должна вывести синоним к данному слову.
//
//Sample Input:
//
//3
//Hello Hi
//Bye Goodbye
//List Array
//Goodbye
//
//Sample Output:
//
//Bye

#include "t05_syn.h"
#include <iostream>
#include <map>

using namespace std;

int t05_syn() {
	map <string, string> Synonym_vocabulary;
	string word;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string first_word, second_word;
		cin >> first_word >> second_word;
		Synonym_vocabulary[first_word] = second_word;
		Synonym_vocabulary[second_word] = first_word;
	}
	cin >> word;
	cout << Synonym_vocabulary[word] << endl;
}
