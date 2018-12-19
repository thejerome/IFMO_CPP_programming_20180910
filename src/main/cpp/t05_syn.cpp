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
    map<string,string> map1;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string str1,str2;
        cin >> str1 >> str2;
        /**map1[str1] = str2;
        map1[str2] = str1;**/
        map1.insert(pair<string,string>(str1,str2));
        map1.insert(pair<string,string>(str2,str1));
    }
    string str3;
    cin >> str3;
    cout << map1[str3];
    return 0;

}
