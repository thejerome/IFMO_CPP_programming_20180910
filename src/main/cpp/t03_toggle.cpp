//
// Created by theje on 2018-11-26.
//

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

int t03_toggle() {
    char inp;
    cin >> inp;
    if (my_alpha_func(inp))
    {
        if(my_upper_func(inp))
        {
            inp = (char) tolower(inp);
        }
        else
        {
            inp = (char) toupper(inp);
        }
    }
    cout << inp;
    return 0;
}
