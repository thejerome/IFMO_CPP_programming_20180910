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
    string str;
    int maxLen = 0, bOfWord = 0, len = 0;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') {
            len++;
        } else if (len > maxLen) {
            bOfWord = i - len;
            maxLen = len;
            len = 0;

        } else {
            len = 0;
        }
    }

    if (len > maxLen) {
        bOfWord = int(str.size()) - len;
        maxLen = len;
    }
    for (int i = bOfWord; i - bOfWord < maxLen; i++) {
        cout << str[i];
    }
}


