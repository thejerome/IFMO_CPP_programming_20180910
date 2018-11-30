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
    string s1;
    getline(cin,s1);
    int count = 0;
    int index = 0;
    int max = 0;
    string word;
    for (int i=0;i<s1.size();i++){
        
        if (s1[i] == ' ')   {
            if (count > max) {
                max = count; word = s1.substr(i - count, count);}
                count = 0;
            }
        else
            count++;
        if (count > max) {
            word = s1.substr(s1.size() - count, count);
        }
    }
        cout<<word;
        return 0;
}
