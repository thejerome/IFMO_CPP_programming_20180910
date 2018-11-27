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
    string s;
    cin >> s;
    bool ok = true;
    int n = s.length();
    for (int i = 0; i < n; i++)
        if (s[i] != s[n - 1 - i])
            ok = false;
    if (ok)
        cout << "yes";
    else
        cout << "no";
}
