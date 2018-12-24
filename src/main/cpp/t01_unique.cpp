//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
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
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>

#include<set>

using namespace std;

int t01_unique() {
    int N;
    cin>>N;
    int x;
    set <int> different_numbers;
    for (int i = 0; i < N; i++){
        cin>>x;
        different_numbers.insert(x);
    }
    cout<<different_numbers.size();
}