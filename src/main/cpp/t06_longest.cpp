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
    string a;
    int len = 0; int lenmax = 0; int place = 0;
    getline(cin,a);
    for (int i=0; i<a.length(); i++){
        if (a[i]!= ' ') len++;
        if (a[i]== ' ' || i == a.length()-1){
            if (len > lenmax) {
                lenmax = len;
                place = i;
            }
            len = 0;
        }
    }
    for (int i = place - lenmax; i<= place; i++){
        cout << a[i];
    }

}
