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
    string text;
    getline(cin, text);
    int i = 0;
    int length = text.length();
    int j = length - 1;
    bool check;
    while (i != length){
        if (text[i] == text[j]) {
            check = 1;
        }
        else {
            check = 0;
            break;
        }
        i++;
        j--;
    }
    if (check == 1) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
