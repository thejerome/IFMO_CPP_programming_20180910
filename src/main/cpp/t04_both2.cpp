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

using namespace std;

int t04_both2()
{
    int Count = 0, SetSize = 0, Input = 0;
    set<int> NumSet;
    set<int> Sim;

    cin >> SetSize;
    for(int i = 0; i < SetSize; i++)
    {
        cin >> Input;
        NumSet.insert(Input);
    }
    cin >> SetSize;
    for(int i = 0; i < SetSize; i++)
    {
        cin >> Input;
        auto search = NumSet.find(Input);
        if(search != NumSet.end())
        {
            Sim.insert(Input);
        }
    }
    for(auto i:Sim)
        cout << i << " ";
}
