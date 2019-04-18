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

int t06_quad()
{
    double A, B, C;
    cin >> A >> B >> C;

    if (A)
    {
        double D = B * B - 4 * A*C;
        double x = -B / (2 * A);
        if (D > 0)
        {
            double add = sqrt(D) / (2 * A);
            if (x - add < x + add) cout << x - add << ' ' << x + add;
            else cout << x + add << ' ' << x - add;
        }

        else if (D == 0) cout << x;

    }
    return 0;
};