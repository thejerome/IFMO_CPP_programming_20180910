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

int t03_toggle()
{
    char input;
    cin >> input;
    if ((int)input >= (int)'a' && (int)input <= (int)'z')
        cout << (char)((int)'A' + (int)input - (int)'a');
    else
    {
        if ((int)input >= (int)'A' && (int)input <= (int)'Z')
            cout << (char)((int)'a' + (int)input - (int)'A');
        else
            cout << input;
    }
}
