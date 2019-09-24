//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;
void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}
void sort(int *array, int size = 3){
    for (int i = 0; i < size; ++i) {
        if (*(array + i) > *(array + i+1))
            swap(*(array + i), *(array + i+1));
    }
}
int t10_sort3() {
    int a[3];
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    sort(a);
    for (int i = 0; i < 3; ++i) {
        cout << a[i] << ' ';
    }
};
