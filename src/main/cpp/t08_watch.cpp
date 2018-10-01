//Электронные часы
//
//Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59),
// то есть сначала записывается количество часов,
// потом обязательно двузначное количество минут,
// затем обязательно двузначное количество секунд.
// Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
//
//С начала суток прошло N секунд. Выведите, что покажут часы.
//
//Формат входных данных
//
//        На вход дается натурально число N, не превосходящее 107 (10000000).
//
//Формат выходных данных
//
//        Выведите ответ на задачу.
//
//Sample Input 1:
//
//3602
//Sample Output 1:
//
//1:00:02
//Sample Input 2:
//
//129700
//Sample Output 2:
//
//12:01:40

#include "t08_watch.h"
#include <iostream>

using namespace std;

int t08_watch() {
    int seconds, hours, minutes, seconds_1;
    cin >> seconds;
    hours = seconds / 3600 % 24;
    minutes = seconds / 60 % 60;
    seconds_1 = seconds % 60;
    if (minutes > 9 and seconds_1 > 9) {
        cout << hours << ':' << minutes << ':' << seconds_1;
    }
    else{
        if (minutes < 10 and seconds_1 < 10){
            cout << hours << ':' << '0' << minutes << ':' << '0' << seconds_1;
        }
        else{
            if (minutes < 10){
                cout << hours << ':'<< '0' << minutes << ':' << seconds_1;
            }
            else{
                cout << hours << ':' << minutes << ':'<< '0' << seconds_1;
            }
        }

    }
}