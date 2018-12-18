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

#include <set>
#include <vector>
#include "t04_both2.h"
#include <iostream>

using namespace std;

int t04_both2() {

    int N, M, num;

    set <int> int1;
    set <int> int2;

    vector <int> result;

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

    for (auto now = int1.begin(); now!=int1.end(); now++)
    {
        int el =* now;
        for (auto now2 = int2.begin(); now2 != int2.end(); now2++)
        {
            int el2 =* now2;
            if (el == el2)
            {
                result.push_back(el);
            }
        }
    }
    for (int i = 0; i < (result.size()-1); i++)
    {
        for (int j = i + 1; j < result.size(); j++)
        {
            if (result[i] > result[j])
            {
                int t = result[j];
                result[j] = result[i];
                result[i] = t;
            }
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

}
