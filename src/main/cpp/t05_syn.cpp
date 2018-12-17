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
 int a;
    string first_word, second_word;
    cin >> a;
    map <string, string> dictionary;
    for (int i = 0; i < a; i++){
        cin >> first_word >> second_word;
        dictionary[first_word] = second_word;
    }
    string our_word;
    cin >> our_word;
    for (auto now : dictionary){
        if (now.first == our_word){
            cout << now.second;
        }
        else if (now.second == our_word){
            cout << now.first;
        }
    }

}
