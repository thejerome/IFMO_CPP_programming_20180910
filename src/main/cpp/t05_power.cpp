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
double power(double a, int n) {
    double p=0;
    if (n == 0){
        p = 1;
    }else if (n == 1){
        p = a;
    }else if (n > 1){
        p = a;
        for (int i = 2; i <= n; i++){
            p = p * a;
        }
    }
    else if (n < 0){
        p = a;
        for (int i = 2; i <= -n; i++) {
            p = p * a;
        }
        p = 1 / p;
    }
    return p;
}
int t05_power() {
    double  a;
    int n;
    cin >> a >> n;
    cout << power(a,n);
    return 0;
}
