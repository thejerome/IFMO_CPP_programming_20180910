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
    double a, b, c;
    cin >> a >> b >> c;

    double ab_cos = (a*a + b*b - c*c) / (2 * a * b);
    double ab_sin = sqrt(1 - ab_cos*ab_cos);

    cout << std::fixed << std::setprecision(4) << 0.5 * a * b * ab_sin;
};