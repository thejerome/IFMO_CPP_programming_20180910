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

int t05_palindrom()
{
    string input;
    cin >> input;
    int inputL = input.length();
    bool test = true;

    for (int i = 0; i < inputL; i++)
        if (input[i] != input[inputL - 1 - i])
            test = false;
    if (test)
        cout << "yes";
    else
        cout << "no";
}
