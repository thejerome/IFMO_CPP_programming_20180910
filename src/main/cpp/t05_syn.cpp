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
    int n;
    map<string, string> dict;
    string w1,w2;

    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> w1 >> w2;
        dict.insert(make_pair(w1,w2));
    }
    cin >> w1;
    for(const auto &it: dict) {
        if (it.first == w1) {
            w2 = it.second;
            break;
        } else if (it.second == w1) {
            w2 = it.first;
            break;
        }
    }

    cout << w2;
}
