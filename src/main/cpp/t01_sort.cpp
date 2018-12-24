//Отсортируйте массив.
//
//Входные данные
//
//Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. 
// Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.
//
//Выходные данные
//
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//
//5
//5 4 3 2 1
//Sample Output:
//
//1 2 3 4 5

#include "t01_sort.h"
#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

int t01_sort() {
    int N;
    cin >> N;
    vector <int> ar(N);
    for (int i=0; i<N; i++) {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    for (auto i : ar) {
        cout << i << " ";
    }
    return 0;
}
