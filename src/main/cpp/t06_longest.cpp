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
    int str_len = s.length();
    int count = 0, max_count = 0;
    string current, result;
    for (int i = 0; i < str_len; i++)
    {
        if (s[i] != ' ') {
            count++;
            current += s[i];
        }
        else
        {
            count = 0;
            current.erase();
        }
        if (count > max_count) {
            max_count = count;
            result = current;
        }
    }
    cout<<result;
}
