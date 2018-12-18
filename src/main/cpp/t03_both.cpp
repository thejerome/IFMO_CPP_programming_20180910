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
    multiset<int> array;

    int n;
    int m;
    int count=0;
    cin >> n;
    
    for (int i=0, number; i<n; i++) {
        cin>>number;
        array.insert(number);
    }
    cin>>m;
    for (int i=0, number; i<m; i++) {
        cin>>number;
        count += array.count(number);
    }
    cout<<count;

    return 0;

}
