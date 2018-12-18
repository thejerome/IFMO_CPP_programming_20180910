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
#include <map>

using namespace std;

int t03_both() {
    map <int, int> counter;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counter[a[i]]++;
    }
    int m;
    cin >> m;
    int b[m], answer = 0;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        if (counter[b[i]] != 0) {
            answer++;
        }
    }
    cout << answer;
}
