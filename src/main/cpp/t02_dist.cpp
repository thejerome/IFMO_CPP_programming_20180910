//Даны четыре действительных числа: x1, y1, x2, y2. 
// Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2).
// Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//        Вводятся четыре действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//0
//0
//1
//1
//Sample Output:
//
//1.41421

#include <iostream>
#include <cmath>

using namespace std;

//function distance
double distance(double x, double y, double x0, double y0) {
    return sqrt(pow(x-x0,2) + pow(y-y0,2));
}

int t02_dist() {
    double x,y,x0,y0;
    cin >> x >> y >> x0 >> y0;
    cout << distance(x,y,x0,y0);
    return 0;
}
