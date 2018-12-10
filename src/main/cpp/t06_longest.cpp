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
    getline(cin,str);
    int i=0;
    int length=0;
    int maxlength=0;
    int maxi;
    if (str.find(" ",i) == string::npos) cout << str;
    else {
        while (i < str.size()) {
            if (str.find(" ", i) != string::npos) {
                length = str.find(" ", i) - i;
                i = str.find(" ", i) + 1;
                if (length > maxlength) {
                    maxlength = length;
                    maxi = i - 2;
                }
            } else break;
        }
        for (int j = maxi - maxlength + 1; j <= maxi; j++) {
            cout << str[j];
        }
    }
    return 0;

}
