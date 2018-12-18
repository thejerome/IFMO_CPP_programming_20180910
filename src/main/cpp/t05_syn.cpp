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
#include <string>
#include <map>

using namespace std;

int t05_syn() {
	map <string,string> synonyms;
	string synonym;
	int N;
	cin >> N;
	for (int i=0; i<N; i++) {
		string word1, word2;
		cin >> word1 >> word2;
		synonyms[word1] = word2;
		synonyms[word2] = word1;
	}
	cin >> synonym;
	cout << synonyms[synonym];
	return 0;
}
