//По введенному символу определите, является ли он цифрой.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите "yes", если символ является цифрой и "no" в противном случае. 
// Обратите внимание, что слова нужно выводить маленькими буквами.
//
//Sample Input 1:
//
//1
//Sample Output 1:
//
//yes
//
//Sample Input 2:
//
//a
//Sample Output 2:
//
//no

#include "t01_char.h"
#include <iostream>


using namespace std;

bool my_digit_func(char c)
{
    char digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (char digit : digits) {
        if (digit == c)
        {
            return true;
        }
    }
    return false;
}

int t01_char() {
    char inp;
    cin >> inp;
    if (my_digit_func(inp))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
