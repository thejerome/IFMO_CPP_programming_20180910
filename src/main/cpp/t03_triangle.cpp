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
// has done
int t03_triangle() {
    float a, b, c,
          p;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    cout  << fixed << setprecision(4)<< pow(p*(p-a)*(p-b)*(p-c),0.5);
};