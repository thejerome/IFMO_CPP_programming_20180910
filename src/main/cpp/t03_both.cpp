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
int N, M, n, count=0;
set<int> int1;
set<int> int2;
cin >> N;

for (int i=0; i<N; i++)
{
    cin >> n;
    int1.insert(n);
}
    cin >> M;

for (int i=0; i<M; i++)
{
    cin >> x;
    int2.insert(x);
}

for (auto now1=int1.begin(); now1!=int1.end(); now1++)
{
        int element1=*now1;

        for (auto now2=int2.begin(); now2!=int2.end(); now2++)
        {
            int element2=*now2;
            if (element1==element2)
            {
                count++;
            }
        }
    }
    cout << count;
}
