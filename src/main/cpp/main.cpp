#include <iostream>
#include <map>
#include <functional>
#include <cstring>
#include "t01_max3.h"
#include "t02_triangle.h"
#include "t03_equal3.h"
#include "t04_chess_rook.h"
#include "t05_chess_king.h"
#include "t06_chess_bishop.h"
#include "t07_chess_queen.h"
#include "t08_chess_knight.h"
#include "t09_choco.h"
#include "t10_sort3.h"
#include "t11_boxes.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map<std::string, std::function<int()>> funcMap =
            {
                    {"t01_max3",         t01_max3},
                    {"t02_triangle",     t02_triangle},
                    {"t03_equal3",       t03_equal3},
                    {"t04_chess_rook",   t04_chess_rook},
                    {"t05_chess_king",   t05_chess_king},
                    {"t06_chess_bishop", t06_chess_bishop},
                    {"t07_chess_queen",  t07_chess_queen},
                    {"t08_chess_knight", t08_chess_knight},
                    {"t09_choco",        t09_choco},
                    {"t10_sort3",        t10_sort3},
                    {"t11_boxes",        t11_boxes},
            };

    funcMap[functionName]();

    return 0;
}
