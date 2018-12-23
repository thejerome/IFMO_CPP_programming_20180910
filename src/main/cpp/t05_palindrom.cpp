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
    string k,x;
    k="yes";
    getline(cin,x);
    for (int i = 0; i <=x.size(); ++i) {
        if (x[i]!=x[x.length()-i-1]) {
            k="no";
        }
    }
    cout<<k;
}
