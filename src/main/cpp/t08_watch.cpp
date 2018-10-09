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
    int seconds, minutes, hours, s1, s2, m1, m2;
    cin >> seconds;

    minutes = seconds / 60;
    seconds = seconds % 60; // seconds are correct now

    hours = minutes / 60;
    minutes = minutes % 60; // minutes are correct now

    m1 = minutes / 10;
    m2 = minutes % 10; // minutes ready for display

    s1 = seconds / 10;
    s2 = seconds % 10; // seconds ready for display

    cout << hours%24 << ":" << m1 << m2 << ":" << s1 << s2;

    return 0;
};