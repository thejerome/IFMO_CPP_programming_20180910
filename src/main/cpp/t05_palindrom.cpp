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
    int n,b,m;
    b=0;
    getline(cin,s);
    n = s.size();
    m=n;
    if (n%2==1){n=n-1;};
    for (int i=0; i <n/2 ; i++ ) {
        if(m%2==1){ if(s[i] == s[n-i] ){b++;}}
        else if (m%2==0){if(s[i] == s[n-i-1] ){b++;}}
    }
    if(m%2==1){}
    if(b==n/2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    };


}
