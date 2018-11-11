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

int t07_quad2() {double a, b, c, x1, x2, d;
    cin >> a >> b >> c;
    if (a==0)
    { if (b==0&&c==0){
            cout << '3';
            return 0;
        }
        if (b==0) {
            cout << '0';
            return 0;
        }
        x1=(-c)/b;
        cout << "1 " << x1;
        return 0; }
    double D = (b*b) - (4*a*c);
    d = sqrt(D);
    if (D < 0)
    { cout << '0';
        return 0; }
    x1 = (-b-d)/(2*a);
    x2 = (-b+d)/(2*a);
    if (D == 0)
    { cout <<"1 "<< x1;
        return 0; }
    cout << "2 ";
    if (x1 < x2)
    { cout << x1 << " " << x2; }
    else
    { cout << x2 << " " << x1; }
    return 0;

};