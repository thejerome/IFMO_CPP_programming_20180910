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
    getline(cin, s);
    unsigned int len = s.length(), max = 0, c = 0, idx = 0;
    for(int i = 0; i < len; ++i) {
        if(s[i] == ' ' || i == len - 1) {
            if(i == len - 1) c++;
            if(max < c) {
                max = c + (i == len - 1);
                idx = i - c;
            }
            c = 0;
        } else c++;
    }
    cout << s.substr(idx, max);

}
