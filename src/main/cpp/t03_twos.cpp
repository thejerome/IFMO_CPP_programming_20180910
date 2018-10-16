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
    int inp, mod = 0;
    cin >> inp;

    while ( ((inp/2) > 0) && (mod==0) )
    {
        mod = inp%2;
        inp = inp/2;
    }

    if ( (inp==1) && (mod==0)) {cout <<"YES";}
    else {cout<<"NO";}

    return 0;
};