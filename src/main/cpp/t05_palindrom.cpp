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

bool isPalindrom(string value){
	for (int i = 0; i < value.size(); i++) {
		if (value[i] != value[value.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

int t05_palindrom() {
	string input;
	getline(cin, input);
	if (isPalindrom(input)) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}
