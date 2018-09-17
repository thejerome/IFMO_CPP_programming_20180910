#include <iostream>
#include <map>
#include <functional>
#include <cstring>
#include "t01_frac.h"
#include "t02_frac_2.h"
#include "t03_triangle.h"
#include "t04_deposit.h"
#include "t05_ave.h"
#include "t06_quad.h"
#include "t07_quad2.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map <std::string, std::function<int()>> funcMap =
            {
                    {"t01_frac", t01_frac},
                    {"t02_frac_2",  t02_frac_2},
                    {"t03_triangle", t03_triangle},
                    {"t04_deposit", t04_deposit},
                    {"t05_ave", t05_ave},
                    {"t06_quad", t06_quad},
                    {"t07_quad2", t07_quad2}
            };

    funcMap[functionName]();

    return 0;
}