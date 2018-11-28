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
#include <cmath>
using namespace std;

int t05_palindrom() {
    string s;
    cin >> s;
    int p=0;
    float l=s.length()-1;
    for (int i=0;i<(ceil(l/2));i++)
        if (s[i]==s[l-i]) p+=1;
    if (p==(ceil(l/2))) cout << "yes";
    else cout << "no";
}
