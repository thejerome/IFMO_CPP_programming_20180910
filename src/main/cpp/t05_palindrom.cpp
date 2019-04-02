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
    string x;
    int a,b,c;
    b = 0;
    getline(cin,x);
    a = x.size();
    c = a;
    if (a%2 == 1) {
        a -= 1;
    }
    for (int i = 0; i < a/2 ; i++) {
        if (c%2 == 1){
            if(x[i] == x[a-i]) {
                b++;
            }
        }
        else if (c%2 == 0) {
            if (x[i] == x[a-i-1]){
                b++;
            }
        }
    }
    if(b == a/2){
        cout<< "yes";
    }
    else {
        cout<<"no";
    }
}
