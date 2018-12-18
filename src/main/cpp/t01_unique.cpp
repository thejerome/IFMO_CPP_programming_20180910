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
#include <set>
using namespace std;

int t01_unique() {
    set<int> omg;
    int n,k;
    cin >> n;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> k;
        omg.insert(k);
    }
    cout << omg.size();
    return 0;
}
