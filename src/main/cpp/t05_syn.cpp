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
    pair<string, string> maps[10000];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> maps[i].first >> maps[i].second;
    string s;
    cin >> s;
    for (int i=0; i<n; i++) {
        if (maps[i].first == s) {
            cout << maps[i].second;
            return 0;
        }
        if (maps[i].second == s) {
            cout << maps[i].first;
            return 0;
        }
    }
}
