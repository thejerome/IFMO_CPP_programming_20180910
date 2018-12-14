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
    string text, memory, copy;
    memory = "";
    copy = "";
    getline(cin, text);
    int size = text.size();
    int i = 0;
    while (i != size) {
        if (text[i] != ' ') {
            memory = memory + text[i];
        }
        else {
            if (memory.size() > copy.size()) {
                copy = memory;
                memory.clear();
            }
            else {
                memory.clear();
            }
        }
        i++;
    }
    if (memory.size() > copy.size()) {
        copy = memory;
    }
    cout<< copy;
}
