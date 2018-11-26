//Напишите функцию fib(n), которая по данному целому положительному n возвращает n-e число Фибоначчи. 
// В этой задаче нельзя использовать циклы - используйте рекурсию.
//Первое и второе числа Фибоначчи равны 1, а каждое следующее равно сумме двух предыдущих.
//Формат входных данных
//        Вводится целое число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//Sample Output:
//
//1

#include <iostream>
#include <cmath>

using namespace std;

int acc(int n, int a, int b) {
	if (n > 1) {
		return acc(n-1, b, a+b);
	}
	else {
		return a;
	}
}
// function fib
int fib(int n) {
	return acc(n, 1, 1);
}

int t07_fib() {
	int n;
	cin >> n;
	cout << fib(n);
    return 0;
}
