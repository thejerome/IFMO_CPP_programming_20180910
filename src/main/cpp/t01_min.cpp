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
int min1(int a, int b){
    if (a > b){
        return b;
    }
    return a;
}
//function min4 
int min4(int m, int n, int c, int d){
    if (min1(m, n) > min1(c, d)){
        return min1(c, d);
    }
    return min1(m, n);
}
int t01_min() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    cout << min4(x, y, z, k);
    return 0;
}
