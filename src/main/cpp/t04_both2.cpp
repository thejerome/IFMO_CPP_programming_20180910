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
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int t04_both2() {
    int N;
    set<int> s0, s1, s2;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        s0.insert(x);
        s1.insert(x);
    }
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        s0.insert(x);
        s2.insert(x);
    }
    for (auto it = s0.begin(); it != s0.end(); ++it)
        if (s1.count(*it) > 0 && s2.count(*it) > 0)

            cout << *it << ' ';
}
