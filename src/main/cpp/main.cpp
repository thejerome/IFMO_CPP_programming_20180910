#include <iostream>
#include <map>
#include <functional>
#include <cstring>

#include "t01_sort.h"
#include "t02_shoes.h"
#include "t03_points.h"
#include "t04_students.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map<std::string, std::function<int()>> funcMap =
            {
                    {"t01_sort", t01_sort},
                    {"t02_shoes", t02_shoes},
                    {"t03_points", t03_points},
                    {"t04_students", t04_students},
            };

    funcMap[functionName]();

    return 0;
}