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

int t06_longest()
{

    string word;

    getline(cin, word);

    int count, max, X;

    count = 0;
    max = -1;
    X = 0;

    for (int i = 0; i <= word.size() - 1; i++)
    {
        if (word[i] != ' ')
        {
            count++;
        }
        else
            {
            if (count > max)
            {
                max = count;
                X = abs(max - i);
            }
            count = 0;
            }
    }

    if (count > max)
    {
        max = count;
        X = word.size() - max;
    }
    for (int j = X; j < X + max; j++)
    {
        cout << word[j];
    }

}
