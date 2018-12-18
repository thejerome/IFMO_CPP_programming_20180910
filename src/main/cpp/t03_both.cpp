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
#include <set>

using namespace std;

int t03_both() {
    set <int> n1, n2;
    int N, M;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int c;
        cin >> c;
        n1.insert(c);
    }
    cin >> M;
    int p = 0;
    for(int i = 0; i < M; i++)
    {
        int a;
        cin >> a;
        n2.insert(a);
        if(n1.find(a) != n1.end())
            ++p;
    }
    cout << p;
    return 0;
}
