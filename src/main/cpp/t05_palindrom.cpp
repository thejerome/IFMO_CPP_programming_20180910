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
int pal;
string a;
getline(cin,a);
int i = 0;
int j = a.length()-1;
while (i != a.length()/2){
    if (a[i] == a[j])
        pal = 1;
    else {
        pal = 0 ;
        break;
    }
    i++;
    j--;
}
if (pal == 1)
    cout << "yes";
else cout << "no";
}
