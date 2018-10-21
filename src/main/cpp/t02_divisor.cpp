//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//
//Формат входных данных
//        Вводится целое положительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//15
//Sample Output:
//
//3

#include "t02_divisor.h"
#include <iostream>

using namespace std;

int t02_divisor() {
     int n;
     cin >> n;
     int i = 1;
     int k;
     bool t = 0;
     while((i <= n)&&(!t)) {
         i++;
         if ( n % i == 0){
            k = i;
            t = 1;
         }
     }
     cout << k;

};