#include <iostream>
#include <map>
#include <functional>
#include <cstring>
#include "t01_quad.h"
#include "t02_divisor.h"
#include "t03_twos.h"
#include "t04_sum.h"
#include "t05_max.h"
#include "t06_max_count.h"
#include "t07_max_2.h"
#include "t08_fibb.h"
#include "t09_row.h"
#include "t10_max_local.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map<std::string, std::function<int()>> funcMap =
            {
                    {"t01_quad",      t01_quad},
                    {"t02_divisor",   t02_divisor},
                    {"t03_twos",      t03_twos},
                    {"t04_sum",       t04_sum},
                    {"t05_max",       t05_max},
                    {"t06_max_count", t06_max_count},
                    {"t07_max_2",     t07_max_2},
                    {"t08_fibb",      t08_fibb},
                    {"t09_row",       t09_row},
                    {"t10_max_local", t10_max_local}
            };

    funcMap[functionName]();

    return 0;
}