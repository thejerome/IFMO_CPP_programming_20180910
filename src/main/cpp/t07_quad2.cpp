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
#include <iomanip>

using namespace std;

int t07_quad2() {

    double a, b, c, X1, X2, Discr, Null;
    cout << setprecision(6) << fixed;
    Null = 1.0e-7;
    cin >> a >> b >> c;
    if (fabs (a) <= Null && fabs (b) <= Null && fabs (c) <= Null)
    {
        cout << 3;
    }
    else if (not fabs (a) <= Null)
    {
        Discr = b * b - 4 * a * c;
        if (Discr > Null)
        {
            cout << 2 << " ";
            X1 = (-b - sqrt (Discr)) / (2 * a);
            X2 = (-b + sqrt (Discr)) / (2 * a);
            if (X1 < X2) cout << X1 << " " << X2;
            else cout << X2 << " " << X1;
        }
        else if (fabs (Discr) <= Null)
        {
            cout << 1 << " ";
            if (fabs (b) <= Null) cout << 0;
            else
                {
                X1 = -b / (2 * a);
                cout << X1;
                }
        }
        else cout << 0;
    }
    else if (fabs (b) <= Null) cout << 0;
    else
        {
        cout << 1 << " ";
        if (fabs (c) <= Null) cout << 0;
        else
            {
            X1 = -c / b;
            cout << X1;
            }
        }

};