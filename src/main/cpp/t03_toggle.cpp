//Вводится один символ, измените его регистр. 
// То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. 
// Символы, не являющиеся латинской буквой, нужно выводить без изменений.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t03_toggle.h"
#include <iostream>


using namespace std;

int t03_toggle() {
    char symb;
    cin >> symb;
    if (symb>='a' && symb<='z') { symb=symb+('A'-'a'); cout<<symb;}
    else {if (symb>='A' && symb<='Z') { symb=symb-('A'-'a');} cout<<symb;}
    return 0;
}
