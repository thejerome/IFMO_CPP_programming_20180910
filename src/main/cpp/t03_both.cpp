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
    int n1;
    cin>>n1;
    set <int> check1;
    for (int i = 0; i < n1; ++i)
    {
        int current;
        cin>>current;
        check1.insert(current);
    }

    int n2;
    cin>>n2;
    set <int> check2;
    for (int i=0; i < n2; i++)
    {
        int current;
        cin>>current;
        check2.insert(current);
    }

    int count = 0;
    for (auto el_1: check1)
    {
        for (auto el_2: check2)
        {
            if (el_1 == el_2)
                count++;
        }
    }
    cout<<count;
}
