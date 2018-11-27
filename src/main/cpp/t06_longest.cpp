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
    string s;
    getline(cin, s);
    int n = (int)s.length(), k = 0, ans = 0;
    string ansString;
    for (int i = 0; i < n; i++)
        if (s[i] == ' ') {
            if (k > ans) {
                ans = k;
                ansString = s.substr(i - k, k);
            }
            k = 0;
        }
        else
            k++;
    if (k > ans)
        ansString = s.substr(n - k, k);
    cout << ansString;
}
