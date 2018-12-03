//
// Created by theje on 2018-11-26.
//

#include "t03_toggle.h"
#include <iostream>


using namespace std;

int t03_toggle() {
    char inp;
    cin >> inp;
    if (isalpha(inp))
    {
        if(isupper(inp))
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
