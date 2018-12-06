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
    string s1,s2;
    getline(cin,s1);
    for (int i=0;i<s1.size();i++){
        s2=s1[i]+s2;
    }
    if (s1==s2) cout << "yes";
    else cout << "no";
    return 0;
}
