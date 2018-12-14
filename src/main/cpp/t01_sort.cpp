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
#include <algorithm>
#include <vector>
#include <iterator>


using namespace std;

int t01_sort() {
    int n; cin >> n;
    vector<int> ints(n);
    for(auto &i: ints)
        cin >> i;
    sort(ints.begin(), ints.end());
    copy(ints.begin(), ints.end(), ostream_iterator<int>(cout, " "));
}
