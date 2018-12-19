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

void syn (int N) {
    cin >> N;
    map< string, string > text;
    string text1, text2, end;
    for (int i = 0; i < N; i++) {
        cin >> text1 >> text2;
        text[text1] = text2;
        text[text2] = text1;
    }
    cin >> end;
    cout << text[end];
}
int t05_syn() {
    int N;
    syn(N);
}
