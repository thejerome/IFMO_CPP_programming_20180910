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
//tests're passed
using namespace std;

// function fib
int fib(int fib_number){
    if (fib_number < 3){
        return 1;
    }
    return fib(fib_number-1)+fib(fib_number-2);
}
int t07_fib()
{
    int fib_number;

    cin >> fib_number;

    cout << fib(fib_number);
    return 0;
}
