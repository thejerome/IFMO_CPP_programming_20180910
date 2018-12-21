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
    string input = "";
    string rev_input = "";
    while (cin) {
        string temp;
	cin >> temp;
	input = input + temp;
    }
    rev_input = input;
    for (int i = 0; i < rev_input.length() / 2; i++) {
        swap(rev_input[i], rev_input[rev_input.length() - i - 1]);
    }
    if (input == rev_input) {
        cout << "yes";
    } else {
        cout << "no";
    }
}
