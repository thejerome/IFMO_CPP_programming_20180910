#include "t04_both2.h"
#include <iostream>
#include <set>

using namespace std;

int t04_both2() {
    int n;
    set<int> s, s1, s2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
        s1.insert(x);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        s.insert(x);
        s2.insert(x);
    }
    for (auto it = s.begin(); it != s.end(); ++it)
        if (s1.count(*it) > 0 && s2.count(*it) > 0)
            cout << *it << ' ';
}
