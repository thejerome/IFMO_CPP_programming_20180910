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

int t03_both() {
int size1, size2, x;
    set <int> first_list;
    set <int> second_list;
    cin >> size1;
    for (int i = 0; i < size1; i ++){
        cin >> x;
        first_list.insert(x);
    }
    cin >> size2;
    int count = 0;
    for (int i = 0; i < size2; i ++){
        cin >> x;
        second_list.insert(x);
    }
    for (auto now : first_list){
        for ( auto now1 : second_list){
            if (now == now1){
                count += 1;
            }
        }
    }
    cout << count;

}
