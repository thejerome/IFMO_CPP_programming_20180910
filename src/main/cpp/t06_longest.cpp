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
    string s;
    getline(cin, s);
    int max = 0;
    string find;
    int temp1 = 0, temp2 = 0;
    temp2 = s.find(' ', 0);
    while (s.find(' ', temp2) != 0 && temp2 > 0) {
        if (temp2 - temp1 > max) {
            max = temp2-temp1;
            find = s.substr(temp1, temp2-temp1);
        } 
        temp1 = temp2+1;
        temp2 = s.find(' ', temp2+1);
    }
    temp2 = s.size();
    if (temp2 - temp1 > max) {
        find = s.substr(temp1, temp2-temp1);
    }
    cout << find;
}
