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
    cin>>s;
    int len = s.length();
    bool flag = true;

    for (int i = 0, j = len-1; i != j && i != len/2 && flag; i++, j--) {
        if (s[i] != s[j]) {
            flag = false;
        }
    }
    if (flag)
        cout<<"yes";
    else
        cout<<"no";
}
