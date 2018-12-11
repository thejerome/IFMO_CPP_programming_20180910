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
    string str;
    int counter = 0 ;
    getline(cin, str);
    for (int i = 0; i < str.size() / 2; i++) {
        if (str[i] == str[str.size() - 1 - i]) {
            counter++;

        }
    }

    if (counter == str.size() / 2) {
        cout << "yes";
    } else {
        cout << "no";
    }
}
