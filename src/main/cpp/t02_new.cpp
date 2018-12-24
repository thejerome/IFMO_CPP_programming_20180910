#include "t02_new.h"
#include <iostream>
#include <set>

using namespace std;

int t02_new() {
    int N;
    cin>>N;
    int x;
    set <int> different_numbers;
    for (int i = 0; i < N; i++){
        cin>>x;
        if (different_numbers.find(x) == different_numbers.end()){
            cout<<"NO"<<" ";
        }
        else{
            cout<<"YES"<<" ";
        }
        different_numbers.insert(x);
    }
}
