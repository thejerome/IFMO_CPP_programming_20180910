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
    double a,b,c;
    cin >> a >> b >> c;
    double delta = pow(b,2) - 4*a*c;
    if (delta == 0) cout << -b/(2*a);
    if (delta > 0) {
        double root1 = (-b - sqrt(delta)) / (2*a);
        double root2 = (-b + sqrt(delta)) / (2*a);
        cout << root1 << ' ' << root2;
    }
};