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
#include <set>
#include <map>

using namespace std;

int t05_syn()
{
    int MapCount;
    cin >> MapCount;
    map<string,string> Dic1;
    map<string,string> Dic2;
    for(int i = 0; i < MapCount; i++)
    {
        string Tmp1, Tmp2;
        cin >> Tmp1 >> Tmp2;
        Dic2.insert( pair<string, string>(Tmp1, Tmp2));
        Dic1.insert( pair<string, string>(Tmp2, Tmp1));
    }
    string OutSin;
    cin >> OutSin;
    if(Dic1.find(OutSin) != Dic1.end())
        cout << Dic1[OutSin];
    else
        cout << Dic2[OutSin];
}
