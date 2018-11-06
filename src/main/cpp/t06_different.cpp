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
    int N;
    cin >> N;
    int A[N];
    int result=N;
    for (int i=0; i<N; i++){
        cin >> A[i];
        int count=0;
        for (int j = 0; j < i; j++) {
            if (A[j] == A[i]) count++;
        }
        if (count > 0) result = result - 1;

    }

    cout << result;
    return 0;

}
