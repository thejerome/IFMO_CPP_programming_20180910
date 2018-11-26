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
float Power (float a, int n){
  if (n>0) return Power(a,n-1)*a;
  else if (n<0) return Power(a,n+1)/a;
   else return 1;
}
int t05_power() {
float a;
int n;
cin>>a>>n;
cout<<Power(a,n);
    return 0;
}
