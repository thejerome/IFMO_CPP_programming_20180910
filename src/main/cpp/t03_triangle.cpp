//Даны длины сторон треугольника. Вычислите площадь треугольника.
//Формат входных данных
//        Вводятся три положительных числа.
//Формат выходных данных
//        Выведите ответ на задачу. Точность - 4 знака после запятой.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//6.0000

#include "t03_triangle.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int t03_triangle() {
    double a,b,c,d,s;
    cin >> a >> b >> c;
    d = (a+b+c)/2.0;
    s = sqrt(d*(d-a)*(d-b)*(d-c));
    cout << fixed << setprecision(4) << s;
};