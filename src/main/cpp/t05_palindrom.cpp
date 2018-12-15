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
    getline(cin,s);
    bool res= true;
    for (int i=0; i<=s.length()/2;++i){
        if(s.at(i)!=s.at(s.length()-1-i)){
            res=false;
            break;
        }
    }
    if(res == false){
        cout<<"no";
    }else {
        cout<<"yes";
    }
}
