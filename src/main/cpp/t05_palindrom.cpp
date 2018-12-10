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
    getline(cin,str);
    int b = str.size();
    int count=0;
    if ((b == 0) || (b == 1)) cout << "yes";
    else if (b%2 != 0)
    {
        for (int i=0; i <= (b-1)/2-1; i++){
            if (str[i] == str[b-1-i]) count++;
        }
        if (count == (b-1)/2) cout << "yes";
        else cout << "no";
    }
    else cout << "no";
    return 0;



}
