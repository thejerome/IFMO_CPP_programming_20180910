//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
//
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
//0

#include "t03_equal3.h"
#include <iostream>

using namespace std;
int check(int *array, int start = 0, int size = 3){
    int count = 0;
    for (int i = start; i < size; ++i)
        if (*(array + start) == *(array + i))
            count++;
    return count;
}
int t03_equal3() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    if (check(a) == 3)
        cout << 3;
    else if (check(a) == 2)
        cout << 2;
    else {
        if (check(a,1) == 2)
            cout << 2;
        else cout << 1;
    }
};
