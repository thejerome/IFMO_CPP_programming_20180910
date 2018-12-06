//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2

#include "t03_both.h"
#include <iostream>

using namespace std;

int t03_both() {
    int n,m,a[100000]={0};
    cin >> n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    cin >> m;
    for (int i=0; i<m; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    int count=0;
    for (int i=0; i<100000; i++)
        if (a[i]>1) count++;
    cout << count;
}
