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
#include <set>
#include <iostream>


using namespace std;

int t02_new() {
    int N, cur;
    cin >> N;
    set<int> numbers;
    
    for (int i = 0; i < N; i++) {
        cin >> cur;
        if (numbers.find(cur) == numbers.end())
            cout << "NO" << endl;
        
        else
            cout << "YES" << endl;
        
        numbers.insert(cur);
    }
    return 0;
}
