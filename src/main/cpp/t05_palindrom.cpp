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
    bool f = true;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1]) {
            f = false;
            break;
        }

    if (f) cout << "yes";
    else cout << "no";

    return 0;
}
