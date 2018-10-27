//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>
#include <algorithm>

using namespace std;

int t06_different() {
    int n, pre, result=1;
    cin >> n >> pre;
    for (int i=1; i<n; i++) {
        int a;
        cin >> a;
        if (pre != a) result++;
        pre = a;
    }
    cout << result;
}
