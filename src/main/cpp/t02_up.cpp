//Переведите символ в верхний регистр.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Если введеный символ является строчной буквой латинского алфавита, 
// то выведите такую же заглавную букву. 
// В противном случае выведите тот же символ, который был введен.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t02_up.h"
#include <iostream>


using namespace std;

char my_toupper(char c)
{
    char offset = c - 'a';
    return 'A' + offset;
}

bool my_lowercase(char c)
{
    if ((c >= 'a')&&(c <= 'z')) { return true; }
    else { return false; }
}

int t02_up() {
    char inp;
    cin >> inp;
    if (my_lowercase(inp))
    {
        inp = my_toupper(inp);
    }
    cout << inp;
    return 0;
}
