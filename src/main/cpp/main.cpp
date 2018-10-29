#include <iostream>
#include <map>
#include <functional>
#include <cstring>
#include "t01_max.h"
#include "t02_star.h"
#include "t03_diag.h"
#include "t04_swap.h"
#include "t05_kdiag.h"
#include "t06_cinema.h"
#include "t07_snake.h"
#include "t08_chess.h"
#include "t09_spiral.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map <std::string, std::function<int()>> funcMap =
            {
                    {"t01_max",    t01_max},
                    {"t02_star",   t02_star},
                    {"t03_diag",   t03_diag},
                    {"t04_swap",   t04_swap},
                    {"t05_kdiag",  t05_kdiag},
                    {"t06_cinema", t06_cinema},
                    {"t07_snake",  t07_snake},
                    {"t08_chess",  t08_chess},
                    {"t09_spiral", t09_spiral}

            };

    funcMap[functionName]();

    return 0;
}