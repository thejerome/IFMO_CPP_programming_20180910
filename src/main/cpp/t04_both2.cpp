//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
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
//2 3

#include "t04_both2.h"
#include <set>
#include <vector>
#include <iostream>

using namespace std;

int t04_both2() {
    int N, M, cur, r, q, t;
    set<int> a;
    set<int> b;
    vector<int> finaly;

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
                finaly.push_back(r);

        }
    }

    for (int i = 0; i < (finaly.size() - 1); i++) {
        for (int j = i + 1; j < finaly.size(); j++) {
            if (finaly[i] > finaly[j]) {
                t = finaly[j];
                finaly[j] = finaly[i];
                finaly[i] = t;
            }
        }
    }
    //Вывод
    for (int i = 0; i < finaly.size(); i++)
        cout << finaly[i] << " ";

    return 0;
}
