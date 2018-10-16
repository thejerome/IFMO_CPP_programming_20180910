//Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//
//Формат входных данных
//        Вводится натуральное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//2
//Sample Output 2:
//
//YES

#include "t03_twos.h"
#include <iostream>

using namespace std;

int t03_twos()
{
	int a, b = 1;
	cin >> a;
	for (int i = 0; b <= a; ++i)
	{
		if (a == b)
		{
			cout << "YES";
			return 0;
		}
		b *= 2;
	}
	cout << "NO";
	return 0;
};