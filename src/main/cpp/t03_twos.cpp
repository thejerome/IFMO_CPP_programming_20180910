//Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//
//Формат входных данных
//        Вводится натуральное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//2
//Sample Output 2:
//
//YES

#include "t03_twos.h"
#include <iostream>
#include <cmath>

using namespace std;

int t03_twos() {
    int n;
    cin >> n;
    for (int i=1; pow(2,i)<=n; i++)
        if (pow(2,i)==n) {cout << "YES"; n=0; break;}
    if (n) cout << "NO";
    return 0;
};