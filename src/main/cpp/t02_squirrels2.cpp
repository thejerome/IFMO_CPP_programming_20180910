//Белочки и орешки - 2
//
//N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков останется после того, как все белочки возьмут себе равное количество орешков.
//
//Формат входных данных
//
//        На вход дается два целых положительных числа N и K, каждое из которых не превышает 10000.
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//3
//14
//Sample Output:
//
//2

#include "t02_squirrels2.h"
#include <iostream>

using namespace std;

int t02_squirrels2() {
    int squirrels, nuts;
    cin >> squirrels >> nuts;
    int result = nuts % squirrels;
    cout << result;

};