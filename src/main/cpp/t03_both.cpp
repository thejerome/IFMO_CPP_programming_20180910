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
#include <algorithm>

using namespace std;

void intersection1 (int N, int M) {
    int number;
    cin >> N;
    set<int> numbers_one;
    set<int> numbers_two;
    int i;
    for (i = 0; i < N; i ++) {
        cin >> number;
        numbers_one.insert(number);
    }
    cin >> M;
    for (i = 0; i < M; i ++) {
        cin >> number;
        numbers_two.insert(number);
    }
    set<int> scroll;
    set_intersection(numbers_one.begin(), numbers_one.end(), numbers_two.begin(), numbers_two.end(),std::inserter( scroll , scroll.begin()));
    cout << scroll.size();
}

int t03_both() {
    int N, M;
    intersection1(N, M);
}
