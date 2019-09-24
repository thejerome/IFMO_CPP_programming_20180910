//Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//3

#include "t01_max3.h"
#include <iostream>

using namespace std;
int sorted(int *array, int size){
    int max = *array;
    for (int i = 0; i < size; ++i) {
        if (*(array + i) > max)
            max = *(array + i);
        else continue;
    }
    return max;
}
int t01_max3() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    cout << sorted(a,3);
};
