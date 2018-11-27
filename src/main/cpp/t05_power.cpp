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
int power(float a, float n){
    if(n>0){
        n = n - 1;
        return power(a,n)* a;
    }else return 1;
}
int t05_power() {
    float a,n;
    cin >> a;
    cin >> n;
    if (n >= 0){
        cout << power(a,n);
    }else cout << 1.000/power(a,-n);

    return 0;
}
