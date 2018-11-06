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
    int N;
    cin >> N;
    int A[N];
    int min;
    min = 0;
    for (int i=0; i<N; i++){
        cin >> A[i];
        if  (A[i]%2 == 1 || A[i]%2 == -1) min = A[i];
    }
    for (int j=0; j<N; j++){
        if ((A[j]%2 == 1 || A[j]%2 == -1) && (A[j]<min))
            min = A[j];
    }
    /**
    int k=0;
    while ((A[k]%2==0) && (k<N)){
        k++;
    }
    if (k < N) min =A[k];
    for (int j=0; j<N; j++){
        if ((A[j]%2 == 0) && (A[j]<min))
            min = A[j];
    }
     **/
    cout << min;
    return 0;

}
