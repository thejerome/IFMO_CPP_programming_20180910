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


using namespace std;

int t05_syn() {
	int n;
	cin >> n;
	string a[n];
	string b[n];
	for (int i = 0; i < n; i++)
	{
		string first;
		string second;
		cin >> first;
		cin >> second;
		a[i] = first;
		b[i] = second;
	}
	string t;
	cin >> t;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] == t)
			cout << b[i];
		else
			if (b[i] == t)
				cout << a[i];
	}
	return 0;
}
