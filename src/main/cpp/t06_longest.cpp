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
string a, b, c;
getline (cin, a);

b = "";
c = "";

for (int i = 0; i < a.size(); i++){
    if (a[i] != ' '){
            b += a[i];
        }else if (b.size() > c.size()){
            c = b;
            b.clear();
        }else{
            b.clear();
        }
    }
    if (b.size() > c.size()) {
        c = b;
    }
    cout << c;
}
