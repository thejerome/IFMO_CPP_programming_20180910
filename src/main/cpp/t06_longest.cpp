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
    string line;
    getline(cin, line);
    int lenght = 0, max_lenght =  0, position = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] != ' ') {
            lenght++;
        }
        else{
            if (lenght > max_lenght) {
                max_lenght = lenght;
                position = abs(max_lenght - i);
            }
            lenght = 0;
        }
    }
    if (lenght > max_lenght) {
        max_lenght = lenght;
        position = line.size() - max_lenght;
    }
    for (int i = position; i < position + max_lenght; i++){
        cout << line[i];
    }
}
