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
    char symbol;
    cin >> symbol;
    if ((int)symbol >= 'A' && (int)symbol <= 'Z') {
        symbol = (char)('a' + (int)symbol - 'A');
        cout << symbol;
    } else if ((int)symbol >= 'a' && (int)symbol <= 'z') {
        symbol = (char)('A' + (int)symbol - 'a');
        cout << symbol;
    } else {
        cout << symbol;
    }
}
