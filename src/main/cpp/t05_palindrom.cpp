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

using namespace std;

int t05_palindrom() {
	string palindrom;
	getline(cin, palindrom);
	int length = palindrom.size();
	bool isPalindrom;
	for (int i=0, j=length-1; i<length && j>=0; i++, j--) {
		if (palindrom[i] == palindrom [j]) {
			isPalindrom = true;
		}
		else {
			isPalindrom = false;
			break;
		}
	}
	isPalindrom ? cout << "yes" : cout << "no";
	return 0;
}
