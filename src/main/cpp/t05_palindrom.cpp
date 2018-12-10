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
    string s;
    cin >> s;
    bool palin = true;
    for(int i = 0, len = s.length(), j = len-1; i < j && palin; ++i, --j)
        if(s[i] != s[j])
            palin = false;
    cout << ( palin ? "yes" : "no");

}
