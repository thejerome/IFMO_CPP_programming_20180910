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

// tests're done

string sub(std::string str, int first, int last){
    string substr="";
    for (int i = first; i < last; i++){
        substr += str[i];
    }
    return substr;
};


int t06_longest() {
    string str, word = "";
    int pos = -1, max_size = 0;

    getline(cin,str);
    str += ' ';

    while (pos != str.size() - 1){
        int pos0 = pos;
        pos = str.find(' ', pos+1);
        if (max_size < pos-pos0-1){
            max_size = pos-pos0-1;
            word = sub(str, pos0+1, pos);
        }
    }

    cout << word;
}
