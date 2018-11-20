//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
    int i;
    cin >> i;
    int arr[i];
    bool k = false;
    int min = INT32_MAX;
    for (int j = 0; j < i; j++) {
        cin >> arr[j];
    }
    for (int j = 0; j < i; j++){
        if ((arr[j] < min) && (arr[j] % 2 != 0)){
            min = arr[j];
            k = true;
        }
    }
    if (!k)
        cout << "0";
    else
        cout << min;
}
