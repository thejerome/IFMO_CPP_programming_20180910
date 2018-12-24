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
    int N;
    cin >> N;
    string list[N * 2];
    for (int i = 0; i < N * 2; i=i+2) {
        cin >> list[i] >> list[i+1];
    }
    string word;
    cin >> word;
    for (int j = 0; j < N*2; j+=2) {
        if (word == list[j]) {
            cout << list[j + 1];
        } else {
            if (word==list[j + 1]) {
                cout << list[j];
            }
        }
    }
}
