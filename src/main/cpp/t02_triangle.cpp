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
bool check(int a, int b, int c){
    if (c < (a + b))
        return true;
    else
        return false;
    
}
int t02_triangle() {
    int a, b, c;
    cin >> a >> b >> c;
    if (check(a,b,c) && check(a,c,b) && check(b,c,a))
        cout << "YES";
    else cout << "NO";
};
