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
#include <string>


using namespace std;

int t05_syn() {
    int count;

    cin >> count;

    map <string, string> first, second;
    for (int i = 0; i < count; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        first[s1] = s2;
        second[s2] = s1;
    }
    string word;

    cin >> word;

    cout << first[word] << second[word];
}
