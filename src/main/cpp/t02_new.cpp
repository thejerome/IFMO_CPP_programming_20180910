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
#include <map>


using namespace std;

int t02_new() {
    map <int, int> counter;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        counter[number]++;
        if (counter[number] == 1) {
            cout << "NO ";
        } else {
            cout << "YES ";
        }
    }
}
