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

using namespace std;

int t02_new() {
    int n;
    cin>>n;
    string result[n];
    set <int> list;

    for (int i=0; i < n; i++)
    {
        int current;
        cin>>current;
        if (list.find(current) == list.end())
            result[i] = "NO";
        else
            result[i] = "YES";
        list.insert(current);
    }
    for (int j = 0; j < n; ++j) {
        cout<<result[j]<<endl;
    }
}
