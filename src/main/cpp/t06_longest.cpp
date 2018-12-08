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
    string s1,s2,s3 ;
    getline (cin,s1);
    s2="";
    s3="";
for(int i=0;i<=s1.size()-1;i++) {
    if (s1[i] != ' ') {
        s2+=s1[i];
    } else if (s2.size() > s3.size()) {
        s3 = s2;
        s2.clear();
    }
    else {
        s2.clear();
    }
}
    if (s2.size() > s3.size()) {
        s3 = s2;
    }
    cout<<s3;
    return 0;
}



