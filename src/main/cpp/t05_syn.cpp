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

#include <map>
#include "t05_syn.h"
#include <iostream>


using namespace std;

int t05_syn() {

    map <string, string> syn;

    int N;

    cin >> N;

    string value, val, word;

    for (int i = 0; i < N; i++)
    {
        cin >> val >> value;
        syn[val] = value;
    }

    cin >> word;

    for (auto el: syn)
    {
        if (word == el.first)
        {
            cout << el.second;
        }
        else
            if (word == el.second)
        {
            cout << el.first;
        }
    }

}
