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

int Power(int a,int n,int r){
    if (n==1) return r*a;
    else Power(a,n-1,r*a);
}

int t05_power() {
int a,n,r=1;
cin >> a >> n;
if (n==0) cout << 1;
else if (n>0) {cout<< Power(a,n,r);}
else cout << 1/double (Power(a,abs(n),r));
    return 0;
}
