//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
    int length;
    cin >> length;
    int arr[length];
    bool k;
    for (int j = 0; j < length; j++) {
        cin >> arr[j];
    }
    for (int i = 0; i < length; i++) {
        k = false;
        for (int j = 0; j < length; j++) {
            if (i != j)
                if (arr[i] == arr[j]) {
                    k = true;
                    break;
                }
        }
        if (!k)
            cout << arr[i] << " ";
    }

}
