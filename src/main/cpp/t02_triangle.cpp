//Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
//Треугольник — это три точки, не лежащие на одной прямой.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//YES

#include "t02_triangle.h"
#include <iostream>

using namespace std;

int t02_triangle() {
    int a, b, c;
    cin>>a>>b>>c;
    if (a >= b && a >= c) {
        if (a > abs (b - c) && a < (b +c)) {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    else if (b >= a && b >= c) {
        if (b > abs (a - c) && b < (a + c)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else if ( c >= a && c >= b ) {
        if (c > abs (a - b) && c < (a + b)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
};