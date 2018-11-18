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
int fib(int a){
    if (a == 0){
        return 0;
    }
    else if (a == 1){
        return 1;
    }
    else {
        return fib(a-1) + fib(a-2);
    }
}
int t07_fib()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
