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
float power (float a, int x) {
    if (x == 0) {
        return 1;
    }
    return a * power(a,x - 1);
}

int t05_power() {
    int x;
    float a;
    cin >> a >> x;
    if (x > 0) {
        cout << power (a,x);
    } else {
        cout << 1 / power(a, -x);
    }


    return 0;
}
