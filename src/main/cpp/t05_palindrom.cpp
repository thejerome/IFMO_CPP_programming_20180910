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
int e,b,u;
b = 0;
getline(cin,x);
e = x.size();
u = e;
if (e%2 == 1)
{
    e -= 1;
}
for (int i = 0; i < e/2 ; i++)
{
    if (u%2 == 1){
        if(x[i] == x[e-i])
        {
            b++;
        }
    }
    else if (u%2 == 0)
    {
        if (x[i] == x[e-i-1]){
            b++;
        }
    }
}
if(b == e/2){
    cout<< "yes";
}
else
{
    cout<<"no";
}
}
