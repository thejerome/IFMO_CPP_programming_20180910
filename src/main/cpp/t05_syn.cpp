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
    string a[N], b[N], cur;

    for (int i = 0; i < N; i++)
    {
        cin >> cur;
        a[i] = cur;

        cin >> cur;
        b[i] = cur;
    }
    
    cin >> cur;

    for (int i = 0; i < N; i++)
    {
        if (a[i] == cur)
            cout << b[i];
        else
            if (b[i] == cur)
                cout << a[i];
    }

    return 0;
}
