#include "t05_syn.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int t05_syn() {
    int n;
    cin >> n;

    map<string, string> m;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        m[a] = b;
        m[b] = a;
    }

    string s;
    cin >> s;

    cout << m[s];
}
