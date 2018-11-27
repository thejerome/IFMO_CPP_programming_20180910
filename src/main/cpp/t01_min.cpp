//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>


using namespace std;

//function min
double min(double a, double b){
    double result;
    if (a < b) result = a;
    else result = b;
    return result;
}

//function min4
double min(double a, double b, double c, double d){
    double result;
    if (a<b && a<c && a<d) result = a;
    else if (b<c && b<d) result = b;
    else if (c<d) result = c;
    else result = d;
    return result;
}

int t01_min() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a,b,c,d);

    return 0;
}
