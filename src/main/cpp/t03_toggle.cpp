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
    char s;
    cin >> s;
    if ((int)s >= (int)'a' && (int)s <= (int)'z')
        cout << (char)((int)'A' + (int)s - (int)'a');
    else
        if ((int)s >= (int)'A' && (int)s <= (int)'Z')
            cout << (char)((int)'a' + (int)s - (int)'A');
        else
            cout << s;
}
