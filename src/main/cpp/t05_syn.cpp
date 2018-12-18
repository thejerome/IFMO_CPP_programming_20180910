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

#include "t05_syn.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

#include "t05_syn.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

int t05_syn() {
    map<string,string>NA_MES;
    int N;
    string d,a,u;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>d>>a;
        NA_MES.insert(pair<string,string>(d,a));
    }
    cin>>u;
    for (auto i = NA_MES.begin(); i!= NA_MES.end(); i++)
    {
        if((*i).first==u) {
            cout << (*i).second;
        }
        if((*i).second==u){
            cout<<(*i).first;
        }
    }
    return 0;
}