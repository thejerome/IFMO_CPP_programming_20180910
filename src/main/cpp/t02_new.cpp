//Во входной строке записана последовательность чисел через пробел. 
// Для каждого числа выведите слово YES (в отдельной строке), 
// если это число ранее встречалось в последовательности или NO, если не встречалось.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//6
//1 2 3 2 3 4
//Sample Output:
//
//NO
//NO
//NO
//YES
//YES
//NO

#include "t02_new.h"
#include <iostream>
#include <set>
#include <vector>


using namespace std;

int t02_new()
{
    int SetSize, Input;
    cin >> SetSize;
    set<int> NumSet;
    vector<string> Out;
    for(int i = 0; i < SetSize; i++)
    {
        cin >> Input;
        auto search = NumSet.find(Input);
        if(search != NumSet.end())
            Out.push_back("YES\n");
        else
        {
            Out.push_back("NO\n");
            NumSet.insert(Input);
        }

    }
    for(int i = 0; i < Out.capacity(); i++){
        cout << Out[i];
    }
}
