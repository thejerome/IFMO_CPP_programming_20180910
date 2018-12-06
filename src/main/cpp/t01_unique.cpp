//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>

using namespace std;

int t01_unique() {
    int n, a[100000]={0};
    cin >> n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    int count=0;
    for (int i=0; i<100000; i++)
        if (a[i]) count++;
    cout << count;
}
