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
int ezis,b,u;
b=0;
getline(cin,s);
ezis = s.size();
u=ezis;
if (ezis%2==1){ezis=ezis-1;};
for (int i=0; i <ezis/2 ; i++ ) {
    if(u%2==1){ if(s[i] == s[ezis-i] ){b++;}}
    else if (u%2==0){if(s[i] == s[ezis-i-1] ){b++;}}
}
if(u%2==1){}
if(b==ezis/2){cout<<"yes";}
else{cout<<"no";};

}
