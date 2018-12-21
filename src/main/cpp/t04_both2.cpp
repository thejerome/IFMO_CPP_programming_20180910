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
#include <set>

using namespace std;

int t04_both2() {

    set<int> s;
    set<int> result;
    int num_1, num_2;
    int k = 0;

    cin >> num_1;

    for (int i = 0; i < num_1; i++) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cin >> num_2;
    for (int i = 0; i < num_2; i++) {
        int temp;
        cin >> temp;
        if (s.find(temp) != s.end()) result.insert(temp);
    }
    for (auto i:result) {
        cout << i << " ";
    }
}