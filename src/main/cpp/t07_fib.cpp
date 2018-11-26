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

int fib(int prev1, int prev2, int n) {
    if (n == 2)
        return prev2;
    return fib(prev2, prev1 + prev2, n - 1);
}

int t07_fib()
{
    int n;
    cin>>n;
    if (n == 1 || n == 2)
        cout<<1;
    else
        cout<<fib(1, 1, n);
    return 0;
}
