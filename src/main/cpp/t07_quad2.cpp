//Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если данное уравнение не имеет корней, выведите число 0. Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//2 -1 2

#include "t07_quad2.h"
#include <iostream>
#include <cmath>

using namespace std;

int t07_quad2() {
    double a, b, c, d;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (a == 0)
        if (b == 0)
            if (c == 0)
                cout << 3;
            else
                cout << 0;
        else {
            cout << 1 << " ";
            cout << (double)-c / (double)b;
        }
    else
    if (d == 0) {
        cout << 1 << " ";
        cout << ((double)-b + (double)sqrt(d)) / ((double)2 * a);
    }
    else
    if (d > 0) {
        cout << 2 << " ";
        cout << ((double)-b - (double)sqrt(d)) / ((double)2 * a) << " " << ((double)-b + (double)sqrt(d)) / ((double)2 * a);
    }
    else
        cout << 0;
};