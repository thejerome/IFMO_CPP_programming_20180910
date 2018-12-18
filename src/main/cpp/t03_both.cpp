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

#include <set>
#include "t03_both.h"
#include <iostream>

using namespace std;

int t03_both() {

    int N, M, num, count = 0;

    set <int> int1;
    set <int> int2;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        int1.insert(num);
    }

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> num;
        int2.insert(num);
    }

    for (auto now = int1.begin(); now != int1.end(); now++)
    {
        int el =* now;
        for (auto now2 = int2.begin(); now2 != int2.end(); now2++)
        {

            int el2 =* now2;

            if (el == el2)
            {
                count++;
            }
        }
    }

    cout << count;

}
