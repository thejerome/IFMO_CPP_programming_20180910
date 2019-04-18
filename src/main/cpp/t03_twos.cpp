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
    int N;
    cin >> N;
    int step_two = 2;

    if (N == 1 | N == 2)
    {
        cout << "YES";
        exit(0);
    }

    while (true)
    {
        step_two *= 2;
        if (step_two == N)
        {
            cout << "YES";
            break;
        }
        if (step_two > N)
        {
            cout << "NO";
            break;
        }
    }
    return 0;
};