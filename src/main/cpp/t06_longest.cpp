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
	int leng = 0, lengmax = 0;
	int pos;
	getline(cin, a);
	for (int i = 0; i < a.length() + 1; i++)
	{
		leng++;
		if (a[i] == ' ')
		{
			if (leng > lengmax)
			{
				pos = i;
				lengmax = leng;
			}
			leng = 0;
		}
	}
	if (leng > lengmax)
	{
		pos = a.length();
		lengmax = leng;
	}
	cout << a.substr(pos - lengmax + 1, lengmax);
}
