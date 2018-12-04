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
#include <iostream> K


using namespace std;
//tests are passed
int t01_char() {
    char smb;

    cin >> smb;

    if ((smb >= '0') && (smb <= '9')){
        cout << "yes";
    }
    else{
        cout << "no";
    }
}
