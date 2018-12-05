//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
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
//2

#include "t03_both.h"
#include <iostream>
#include <set>

using namespace std;
//tests're passed
int t03_both() {
    int count, num;
    set <int> set1 = {}, set2 ={};

    cin >> count;
    for (int i = 0; i < count; i++){
        cin >> num;
        set1.insert(num);
    }

    cin >> count;
    for (int i = 0; i < count; i++){
        cin >> num;
        set2.insert(num);
    }

    count = 0;
    for (auto it = set1.begin(); it != set1.end(); it++){
        if (set2.find(*it) != set2.end()){
            count ++;
        }
    }
    cout << count;
}
