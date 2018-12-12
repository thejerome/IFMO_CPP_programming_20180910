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
    int size_1, size_2, x;
    set <int> first_list;
    set <int> second_list;
    cin >> size_1;
    for (int i = 0; i < size_1; i ++){
        cin >> x;
        first_list.insert(x);
    }
    cin >> size_2;
    for (int i = 0; i < size_2; i ++){
        cin >> x;
        second_list.insert(x);
    }
    for (auto now : first_list){
        for ( auto now1 : second_list){
            if (now == now1){
                cout << now << ' ';
            }
        }
    }
}
