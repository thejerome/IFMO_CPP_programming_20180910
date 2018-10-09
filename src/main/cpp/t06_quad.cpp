//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() {
    double a, b, c;
    cin >> a >> b >> c;
    double discr = 0;
    discr = b*b - (4 * a * c);
    if (discr > 0) {
        double x1, x2;
        x1 = (-b + sqrt(discr)) / (2 * a);
        x2 = (-b - sqrt(discr)) / (2 * a);
        if (x1 < x2) {
            cout << x1 << " " << x2;
        } else {
            cout << x2 << " " << x1;
        }
    }
    if (discr == 0) {
        cout << (-b / (2*a));
    }
};