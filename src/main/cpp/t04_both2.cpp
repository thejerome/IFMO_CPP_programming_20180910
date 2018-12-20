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
#include <vector>

using namespace std;

void Put(set <int> &x) {
    int current;
    cin>>current;
    x.insert(current);
}

int t04_both2() {
    int n1;
    cin>>n1;
    set <int> list1;
    for (int i = 0; i < n1; ++i)
    {
        Put(list1);
    }

    int n2;
    cin>>n2;
    set <int> list2;
    for (int i=0; i < n2; i++)
    {
        Put(list2);
    }

    vector <int> result;
    for (auto el_1: list1)
    {
        for (auto el_2: list2)
        {
            if (el_1 == el_2)
                result.push_back(el_1);
        }
    }

    for (auto i: result) {
        cout<<i<<' ';
    }
}
