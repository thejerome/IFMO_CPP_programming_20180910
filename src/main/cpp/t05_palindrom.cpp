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
string stroka;
cin >> stroka;
bool palindrom = true;
int l;
l= static_cast<int>(stroka.length());
    for(int i=0, j=l-1; i<j && palindrom; i++, j--){
        if(stroka[i]!=stroka[j])
            palindrom=false;}
    if (palindrom)
        cout<<"yes";
    else
        cout<<"no";
return 0;

}
