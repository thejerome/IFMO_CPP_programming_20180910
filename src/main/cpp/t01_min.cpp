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
int min2(int a,int b){
    if (a<b) return a;
    else return b;
}

int min4(int a,int a1, int a2, int a3){
    return min2(min2(a,a1),min2(a2,a3));
}

int t01_min() {
int a,b,c,d;
cin >> a >> b >> c >> d;
cout << min4(a,b,c,d);
    return 0;
}
