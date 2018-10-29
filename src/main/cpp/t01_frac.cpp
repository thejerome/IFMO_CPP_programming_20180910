//Дано положительное действительное число X. Выведите его дробную часть.
//
//Формат входных данных
//
//        Вводятся положительное действительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//17.9
//Sample Output:
//
//0.9

#include "t01_frac.h"
#include <iostream>
#include <cmath>

using namespace std;

int t01_frac() {
    double I_P;
    int a;
    cin>>I_P;
    a=trunc(I_P);
    cout<<I_P-a;
};