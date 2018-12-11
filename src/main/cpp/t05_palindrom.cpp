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
    string line;
    int a = 0;
    getline(cin, line);
    for (int i = 0; i < line.size()/2; i++) {
        if (line[i] == line[line.size()-1-i]) {
            a++;
        }
    }
    if (a == line.size()/2) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
