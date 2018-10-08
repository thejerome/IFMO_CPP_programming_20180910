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

using namespace std;

int t03_twos() {
    int n;
    cin >> n;
    if (n % 2 == 1)
        cout << "NO";
    else{
        while (n > 1){
            if (n % 2 == 1){
                cout << "NO";
                break;
            }
            n = n / 2;
        }
    }
    if (n == 1)
        cout << "YES";

};