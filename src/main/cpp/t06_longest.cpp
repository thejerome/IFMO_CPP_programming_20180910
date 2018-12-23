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
    string x;
    int dlin, dlinmax;
    dlin = 0;
    dlinmax = 0;
    int pos;
    getline(cin, x);
    for (int i = 0; i < x.length() + 1; i++)
    {
        dlin++;
        if (x[i] == ' ')
        {
            if (dlin > dlinmax)
            {
                pos = i;
                dlinmax = dlin;
            }
            dlin = 0;
        }
    }
    if (dlin > dlinmax)
    {
        pos = x.length();
        dlinmax = dlin;
    }
    cout << x.substr(pos - dlinmax + 1, dlinmax);
}

