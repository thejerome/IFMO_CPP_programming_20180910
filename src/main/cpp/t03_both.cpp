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
#include <set>
#include <iostream>

using namespace std;

int t03_both() {
    int N, M, cur, count = 0, r, q;
    set<int> a;
    set<int> b;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cur;
        a.insert(cur);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> cur;
        b.insert(cur);
    }

    for (auto i = a.begin(); i != a.end(); i++) {
        r = *i;
        for (auto j = b.begin(); j != b.end(); j++) {
            q = *j;
            if (r == q)
                count++;

        }
    }

    cout << count;
    return 0;
}
