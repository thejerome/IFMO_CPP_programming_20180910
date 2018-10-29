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
#include <iomanip>

using namespace std;


int t06_quad() {

    double a, b, c, x1, x2, dis, zero;
    cout << setprecision(6) << fixed;
    zero = 1.0e-15;
    cin >> a >> b >> c;
    dis = b*b - 4*a*c;
    if (dis > zero) {
        // ответ есть
        x1 = (-b - sqrt(dis)) / (2 * a);
        x2 = (-b + sqrt(dis)) / (2 * a);
        if (x1 < x2) cout << x1 << " " << x2;
        else cout << x2 << " "  << x1;
    }
    else if (fabs(dis) <= zero) {
        if (fabs(b) <=  zero) cout << 0;
        else {
            x1 = -b / (2 * a);
            cout << x1;
        }
    };

};