#include "t06_homework.h"
#include <iostream>
#include <map>
#include <set>

using namespace std;

string to_lower_case (string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';

    return s;
}

bool one_is_stressed (const string &s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            cnt++;

    return cnt == 1;
};

int t06_homework() {
    int n;
    cin >> n;
    map<string, set<string>> d;
    for (int i = 0; i < n; i++) {
        string straight, stressed;

        cin >> stressed;
        straight = to_lower_case (stressed);

        d[straight].insert (stressed);
    }
    string hw;
    getline (cin, hw);
    hw += ' ';
    string w = "";
    int cnt = 0;
    for (int i = 0; i < hw.length(); i++)
        if (hw[i] != ' ')
            w += hw[i];
        else {
            if (d.count (to_lower_case (w)) == 1) {
                if (d[to_lower_case (w)].count (w) == 0)
                    cnt++;
            }
            else if (!one_is_stressed(w)) {
                cnt++;
            }

            w = "";
        }
    cout << cnt - 1;
}
