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
    char c;
    cin >> c;
    if ((int(c) >= int('a')) and (int(c) <= int('z'))){
        cout << char(int(c) - int('a') + int('A'));
    }
    else if ((int(c) >= int('A')) and (int(c) <= int('Z'))){
        cout << char(int(c) - int('A') + int('a'));
    }
    else {
        cout << c;
    }
}
