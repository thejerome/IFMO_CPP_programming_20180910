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
//tests're done
int t01_sort() {
    vector<int> massive(0);
    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        int value;
        cin >> value;
        massive.push_back(value);
    }

    sort(massive.begin(), massive.end());

    for (int i = 0; i < n; i++){
        cout << massive[i] << ' ';
    }
    return 0;
}
