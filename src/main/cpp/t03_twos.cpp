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
    int n, i;
    i = 0;
    cin >> n;
    while (pow(2,i)<=n) {
        if (pow(2, i) == n) {
            cout << "YES";
            n=0;
            break;
        }
        i++;
    }
    if (n) cout << "NO";
}
