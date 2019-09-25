//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;
int fibonacci(int number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;
    return fibonacci(number-1) + fibonacci(number-2);
}
int t08_fibb() {
    int n, i = 1;
    cin >> n;
    
    while (true){
        if (i == n) {
            cout << fibonacci(i);
            break;
        }
        i++;
    }
};
