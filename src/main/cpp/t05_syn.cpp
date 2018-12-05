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
//tests're passed
int t05_syn() {

    int count;
    string word1, word2;
    map < string, string> dict = {};

    cin >> count;

    for (int i = 0; i < count; i++){
        cin >> word1 >> word2;
        dict[word1] = word2;
        dict[word2] = word1;
    }

    cin >> word1;

    cout << dict[word1];
}
