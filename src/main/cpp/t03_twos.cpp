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

int t03_twos() {
	int n;
	cin >> n;
	int two = 2;
	for (int i = 2; i <= n; i++)
	{
		two = two * 2;
		if (two == n||n==1||n==2)
		{
			cout << "YES";
			break;
		}
		if (two > n)
		{
			cout << "NO";
			break;
		}
	}

	return 0;
};