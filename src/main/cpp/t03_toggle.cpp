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

bool my_alpha_func(char c)
{
    auto cc = (int) c;
    if (((cc >= (int) 'a')&&(cc <= (int) 'z'))||((cc >= (int) 'A')&&(cc <= (int) 'Z')))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool my_upper_func(char c)
{
    auto cc = (int) c;
    if ((cc >= (int) 'A')&&(cc <= (int) 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char mytoupper(char c)
{
    char offset = c - 'a';
    return ('A' + offset);
}

char mytolower(char c)
{
    char offset = c - 'A';
    return ('a' + offset);
}

int t03_toggle() {
    char inp;
    cin >> inp;
    if (my_alpha_func(inp))
    {
        if(my_upper_func(inp))
        {
            inp = mytolower(inp);
        }
        else
        {
            inp = mytoupper(inp);
        }
    }
    cout << inp;
    return 0;
}
