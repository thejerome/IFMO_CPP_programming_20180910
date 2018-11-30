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
    string some_words;
    getline(cin, some_words);
    int count, max_count, position;
    count = 0;
    max_count = -1;
    position = 0;
    for (int i = 0; i <= some_words.size() - 1; i ++){
        if (some_words[i] != ' '){
            count += 1;
        }
        else {
            if (count > max_count){
                max_count = count;
                position = abs(max_count - i);
            }
            count = 0;
        }
    }
    if (count > max_count){
        max_count = count;
        position = some_words.size() - max_count;
    }
    for (int j = position; j < position + max_count; j ++){
        cout << some_words[j];
    }

}
