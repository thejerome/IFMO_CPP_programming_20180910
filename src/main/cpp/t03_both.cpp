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

void Add(set <int> &x) {
    int current;
    cin>>current;
    x.insert(current);
}

int t03_both() {
    int n1;
    cin>>n1;
    set <int> list1;
    for (int i = 0; i < n1; ++i)
    {
        Add(list1);
    }

    int n2;
    cin>>n2;
    set <int> list2;
    for (int i=0; i < n2; i++)
    {
        Add(list2);
    }

    int cnt = 0;
    for (auto el_1: list1)
    {
        for (auto el_2: list2)
        {
            if (el_1 == el_2)
                cnt++;
        }
    }
    cout<<cnt;
}
