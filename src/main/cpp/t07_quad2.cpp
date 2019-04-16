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
    double A, B, C;
    cin >> A >> B >> C;
    
    if (A)
    {
        double D = B * B - 4 * A*C;
        double x = -B / (2 * A);
        if (D > 0)
        {
            double add = sqrt(D) / (2 * A);
            cout << "2 ";
            if (x - add < x + add) cout << x - add << ' ' << x + add;
            else cout << x + add << ' ' << x - add;
        }

        else if (D == 0)
        {
            cout << "1 " << x;
        }
        else cout << '0';


    }
    
    else if (B)
        cout << "1 " << -C / B;
    else if (C)
        cout << "0";
    else
        cout << "3";
    
    return 0;
};