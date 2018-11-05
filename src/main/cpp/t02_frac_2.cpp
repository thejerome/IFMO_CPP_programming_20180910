//Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
//Формат входных данных
//        Вводится положительное действительное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1.79
//Sample Output:
//
//7

#include "t02_frac_2.h"
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int t02_frac_2() {
double n;
cin>>n;
//cout<<(n-floor(n)-(n*10-(floor(n*10)))/10)*10;
cout<<((int) floor(n*10)) % 10;

};