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

int t06_longest()
{
    int Maximum = 0, MaximumIndex = 0, Temp = 0;
    string Input;
    getline(cin, Input);

    for (int i=0; i < Input.length(); i++)
    {
        if (Input[i] != ' ')
            Temp++;
        else
            Temp = 0;
        if (Temp > Maximum)
        {
            Maximum = Temp;
            MaximumIndex = i;
        }
    }
    for (int i = MaximumIndex - Maximum + 1; i <= MaximumIndex; i++)
        cout << Input[i];
}
