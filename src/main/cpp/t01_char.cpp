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

int t01_char()
{
    char input;
    cin >> input;
    if (int(input) >= (int)'0' && int(input) <= (int)'9')
        cout << "yes";
    else
        cout << "no";
}
