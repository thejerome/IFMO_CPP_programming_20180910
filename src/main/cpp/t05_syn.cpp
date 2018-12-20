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
    cin>>n;
    string dict[n*2];
    for (int i = 0; i < n*2; i+=2) {
        cin>>dict[i]>>dict[i+1];
    }

    string my_word;
    cin>>my_word;

    for (int j = 0; j < n*2; j+=2) {
        if (dict[j] == my_word)
            cout<<dict[j+1];
        else if (dict[j+1] == my_word)
                cout<<dict[j];
    }
}
