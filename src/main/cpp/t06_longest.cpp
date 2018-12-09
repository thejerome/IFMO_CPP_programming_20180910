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
	string x1, x2, x3;

    getline (cin, x1);
    
    x2 = "";
    x3 = "";

    for (int i = 0; i < x1.size(); i++){
        if (x1[i] != ' '){
            x2 += x1[i];
        }else if (x2.size() > x3.size()){
            x3 = x2;
            x2.clear();
        }else{
            x2.clear();
        }
    }
    if (x2.size() > x3.size()) {
        x3 = x2;
    }

    cout<<x3;
}
