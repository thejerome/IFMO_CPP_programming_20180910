//Дано действительное положительное число a и целоe число n.
//
//Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).
//Не используйте циклы.
//
//Формат входных данных
//        Вводится действительное положительное число a и целоe число n.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//2
//1
//Sample Output 1:
//
//2
//Sample Input 2:
//
//2
//2
//Sample Output 2:
//
//4

#include <iostream>
#include <cmath>

using namespace std;

//function power
double power(double a, int b){
    int c = b;
    if (b == 0){
        return 1;
    }
    else {
        a = a * power(a, abs(b)-1);
    }
    if ( c < 0){
        return 1 / a;
    }
    return a;

}
int t05_power() {
    double x;
    int y;
    cin >> x >> y;
    cout << power(x, y);
    return 0;
}
