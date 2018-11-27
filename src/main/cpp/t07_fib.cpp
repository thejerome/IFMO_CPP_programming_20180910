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

// function fib
int fib(int Number) 
{
	int fn;
	if ((Number <= 2) && (Number > 0)) {
		fn = 1;
	}
	if (Number > 2) {
		fn = fib(Number - 1) + fib(Number - 2);
	}
	return fn;
}
int t07_fib()
{
		int n;
		cin >> n;
		cout << fib(n);
    return 0;
}
