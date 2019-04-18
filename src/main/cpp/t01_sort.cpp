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
#include <algorithm>
#include <iostream>


using namespace std;

int t01_sort() {
    int N;
    cin >> N;
    int a[N];

    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a, a + N);
    
    for (int i = 0; i < N; ++i) cout << a[i] << ' ';
    
    return 0;
}
