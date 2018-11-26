#include <iostream>
#include <map>
#include <functional>
#include <cstring>

#include "t01_char.h"
#include "t02_up.h"
#include "t03_toggle.h"
#include "t04_count.h"
#include "t05_palindrom.h"
#include "t06_longest.h"
#include "t07_ip.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map<std::string, std::function<int()>> funcMap =
            {
                    {"t01_char", t01_char},
                    {"t02_up", t02_up},
                    {"t03_toggle", t03_toggle},
                    {"t04_count", t04_count},
                    {"t05_palindrom", t05_palindrom},
                    {"t06_longest", t06_longest},
                    {"t07_ip", t07_ip}
            };

    funcMap[functionName]();

    return 0;
}