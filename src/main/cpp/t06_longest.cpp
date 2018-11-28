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

using namespace std;

int t06_longest() {
    bool ok = true;
    string s, max, t;
    int left,right,maxlength;
    maxlength=0;
    left=0; right=0;
    getline(cin,s);
    while(ok){
       int space = s.find(' ',left);
       if (space != -1 && maxlength < space-left) {maxlength = space-left; right=space-1;}
       if (space==-1) {
           ok=false;
           if (s.length()-left > maxlength) {
               right = s.length()-1;
               maxlength=s.length()-left;
           }
       }
       left=space+1;
    }
    for (int i=right-maxlength+1; i<=right;i++){
        cout << s[i];
    }
}
