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
    int A, B, C, sum;
    bool exist;
    cin >> A >> B >> C;
    exist = true;
    sum = A + B;
    if (sum <= C) {
    exist = false;
    }
    sum = A + C;
    if (sum <= B) {
    exist = false;
    }
    sum = C + B;
    if (sum <= A) {
    exist = false;
    }
    if (exist == true) {
    cout << "YES";
    } else {
    cout << "NO";
    }
};