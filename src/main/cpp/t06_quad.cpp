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
        double A,B,C;
        cin>>A>>B>>C;
        double D=B*B-4*A*C;
        if (D==0)


            cout<<(-B)/(2*A);
        if (D>0)
            cout<< ((-B) - sqrt(D))/(2*A) << " "<< ((-B)+sqrt(D))/(2*A);
        return 0;

    };