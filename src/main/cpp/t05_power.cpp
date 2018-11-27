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
double power (double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return a;
    }
    if (n == -1) {
        return 1/a;
    }
    if (n >= 0) {
        return a * power(a, n-1);
    }
    else {
        return (1/a) * power(a, n+1);
    }
}
int t05_power() {
    double a, n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}
