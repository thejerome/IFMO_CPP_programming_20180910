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
    set<int> integers;
    int N,a;
    cin >> N;
    cin >> a;
    integers.insert(a);
    if (N!=0) cout << "NO" << endl;
    for (int i = 1; i < N; i++){
        cin >> a;
        if (integers.find(a)==integers.end()) cout << "NO" << endl;
            else cout << "YES" << endl;
        integers.insert(a);
    }
}
