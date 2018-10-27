//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;
// Done
int t09_equals() {
    int mas[100],
            i, j, n, c = 0, count = 1, anw = 0;

    cin >> n;

    for (i = 0; i < n; i++){
        cin >> mas[i];
    }

    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            if (mas[i] > mas[j]){
                c = mas[i];
                mas[i] = mas[j];
                mas[j] = c;
            }
        }
    }

    c = mas[0];

    for (i = 1; i < n; i++){
        if (mas[i] != c){
            anw += (count)*(count-1)/2;
            count = 1;
        }
        else{
            count++;
        }
        c = mas[i];
    }
    anw += (count)*(count-1)/2;
    cout << anw;
}
