//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>
#include <string>

using namespace std;

int t05_palindrom() {
	string maybe_palindrom;
	int a = 1;
	getline(cin, maybe_palindrom);
	for (int i = 0; i < maybe_palindrom.size() / 2; i++) {
		if (maybe_palindrom[i] != maybe_palindrom[maybe_palindrom.size() - 1 - i]) {
			a = 0;
			break;
		}
	}
	if (a == 1) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
}
