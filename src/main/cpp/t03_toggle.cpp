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
    char char1;
    cin >> char1;
    if (char1 >= 'a' && char1 <= 'z') char1 = char1-32;
    else if (char1 >= 'A' && char1 <= 'Z') char1 = char1+32;
    cout << char1;
    return 0;

}
