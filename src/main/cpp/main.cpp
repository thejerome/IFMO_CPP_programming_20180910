
#include <iostream>
#include <map>
#include <functional>
#include <cstring>

#include "t01_min.h"
#include "t02_dist.h"
#include "t03_circle.h"
#include "t04_area.h"
#include "t05_power.h"
#include "t06_sum.h"
#include "t07_fib.h"
#include "t08_queen.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map<std::string, std::function<int()>> funcMap =
            {
                    {"t01_min",    t01_min},
                    {"t02_dist",   t02_dist},
                    {"t03_circle", t03_circle},
                    {"t04_area",   t04_area},
                    {"t05_power",  t05_power},
                    {"t06_sum",    t06_sum},
                    {"t07_fib",    t07_fib},
                    {"t08_queen",  t08_queen}
            };

    funcMap[functionName]();

    return 0;
}
