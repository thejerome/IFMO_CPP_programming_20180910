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

int fib (int first, int second, int cur, int num)
{
    if (cur == num)
    {
        return second;
    }
    fib (second, second + first, cur + 1, num);
}

int t07_fib()
{
    int num;

    cin >> num;

    cout << fib (0, 1, 1, num);

    return 0;
}
