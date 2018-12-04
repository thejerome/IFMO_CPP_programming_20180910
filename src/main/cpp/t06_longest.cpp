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
    string inp, tmp, longest; //tmp str, longest str
    getline(cin, inp);
    for (char i : inp) {
        if (i == ' ')
        {
            if (tmp.length() > longest.length())
            {
                longest = tmp;
            }
            tmp = "";
        }
        else
        {
            tmp.append(1, i);
        }
    }

    if (tmp.length() > longest.length())
    {
        longest = tmp;
    }

    cout <<longest;
    return 0;
}
