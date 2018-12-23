#include <iostream>
#include <map>
#include <functional>
#include <cstring>

#include "t01_unique.h"
#include "t02_new.h"
#include "t03_both.h"
#include "t04_both2.h"
#include "t05_syn.h"
#include "t06_homework.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map<std::string, std::function<int()>> funcMap =
            {
                    {"t01_unique",t01_unique},
                    {"t02_new",t02_new},
                    {"t03_both",t03_both},
                    {"t04_both2",t04_both2},
                    {"t05_syn",t05_syn},
                    {"t06_homework",t06_homework}
            };

    funcMap[functionName]();

    return 0;
}