#include <iostream>
#include <map>
#include <functional>
#include <cstring>
#include "t01_even.h"
#include "t02_even2.h"
#include "t03_bigger.h"
#include "t04_neighbors.h"
#include "t05_minodd.h"
#include "t06_different.h"
#include "t07_swap.h"
#include "t08_cycleswap.h"
#include "t09_equals.h"
#include "t10_unique.h"
#include "t11_queen.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map <std::string, std::function<int()>> funcMap =
            {
                    {"t01_even", t01_even},
                    {"t02_even2", t02_even2},
                    {"t03_bigger", t03_bigger},
                    {"t04_neighbors", t04_neighbors},
                    {"t05_minodd", t05_minodd},
                    {"t06_different", t06_different},
                    {"t07_swap", t07_swap},
                    {"t08_cycleswap", t08_cycleswap},
                    {"t09_equals", t09_equals},
                    {"t10_unique", t10_unique},
                    {"t11_queen", t11_queen}

            };

    funcMap[functionName]();

    return 0;
}