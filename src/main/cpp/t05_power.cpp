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
double power(double x, int n){
    if (n == 0){
        return 1.0;
    } else {
	if (n == 1) {
            return x;
	} else {
	    if (n == -1) {
	        return 1.0 / x; 
	    } else {
	        if (n < 0){
		    return (1.0 / x) * power (x, (n + 1));
		} else {
                    return x * power(x, (n - 1));
		}
	    }
        }
    }
}

int t05_power() {
    double x;
    int n;
    cin >> x >> n;
    cout << power(x, n);
    return 0;
}
