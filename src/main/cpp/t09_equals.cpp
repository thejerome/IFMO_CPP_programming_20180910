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

int t09_equals() {
    int n;
    cin >> n;
    int *a, *chek;
    a = new int[n];
    chek = new int[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        chek[i] = 0;
    }
    int j = 0;
    int ans = 0;
    while (j < n){
        int veryimportantthing = a[j];
        int qantity = 0;
        for (int i = j; i < n; i++){
            if (a[i] == veryimportantthing){
                qantity++;
                chek[i] = 1;
            }
        }
        ans += (qantity - 1) * qantity / 2;
        while (j < n && chek[j] == 1){
            j++;
        }
    }
    cout << ans;
}
