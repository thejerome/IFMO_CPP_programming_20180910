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
using namespace std;

void intersection2 (int N, int M) {
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
    for (auto number : numbers_one) {
        if (numbers_two.find(number) != numbers_two.end()) {
            scroll.insert(number);
        }
    }
    for (auto number : scroll) {
        cout << number << " ";
    }
}

int t04_both2() {
    int N, M;
    intersection2(N, M);
}
