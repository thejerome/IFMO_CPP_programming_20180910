#include <iostream>
#include <map>
#include <functional>
#include <cstring>
#include "t00_hello.h"
#include "t01_squirrels.h"
#include "t02_squirrels2.h"
#include "t03_last_number.h"
#include "t04_first_number.h"
#include "t05_tens_number.h"
#include "t06_3digits.h"
#include "t07_pies.h"
#include "t08_watch.h"
#include "t09_snail.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map <std::string, std::function<int()>> funcMap =
            {
                    {"t00_hello",        t00_hello},
                    {"t01_squirrels",    t01_squirrels},
                    {"t02_squirrels2",   t02_squirrels2},
                    {"t03_last_number",  t03_last_number},
                    {"t04_first_number", t04_first_number},
                    {"t05_tens_number",  t05_tens_number},
                    {"t06_3digits",      t06_3digits},
                    {"t07_pies",         t07_pies},
                    {"t08_watch",        t08_watch},
                    {"t09_snail",        t09_snail}
            };

    funcMap[functionName]();

    return 0;
}
