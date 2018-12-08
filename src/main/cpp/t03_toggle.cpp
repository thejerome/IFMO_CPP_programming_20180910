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
    if (symbol >= 'a' && symbol <= 'z') {
        int temp = symbol - 'a';
        char s = 'A' + temp;
        cout << s;
    } else if (symbol >= 'A' && symbol <= 'Z') {
        int temp = symbol - 'A';
        char s = 'a' + temp;
        cout << s;
    } else {
        cout << symbol;
    }
}