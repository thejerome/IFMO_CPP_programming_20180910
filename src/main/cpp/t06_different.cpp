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


using namespace std;

int t06_different() {

    int a;
    cin >>a;

    int arr[a];

    int dif = 0;

    for (int i=0; i < a; i++) {
        cin >> arr[i];
    }
    for (int j = 0; j < a; j++) {
        int count = 0;
        for (int k = j; k < a; k++) {
            if (arr[j] == arr[k])
                count++;
        }
        if (count == 1)
            dif++;
    }
    cout << dif;

}
