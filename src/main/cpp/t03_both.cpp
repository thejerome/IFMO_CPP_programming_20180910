#include "t03_both.h"
#include <iostream>
#include <set>

using namespace std;

int t03_both() {
    int n;
    cin>>n;
    set <int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        s.insert(x);
    }
    cin>>n;
    int atst = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if (s.count(x) > 0)
            atst++;
    }
    cout<<atst;
}
