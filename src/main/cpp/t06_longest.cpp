//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//
//Everyone of us has all we need
//Sample Output:
//
//Everyone

#include "t06_longest.h"
#include <iostream>
#include <string>

using namespace std;

int t06_longest() {
string s;
getline(cin,s);
int max=0,maxind=0,k=0;
for (int i=0;i<s.length();i++) {
    if (s[i]!= ' ') k++;
    else k=0;
    if (k > max) {
        max = k;
        maxind = i;
    }
}
for (int i=maxind-max+1;i<=maxind;i++)
    cout << s[i];
}
