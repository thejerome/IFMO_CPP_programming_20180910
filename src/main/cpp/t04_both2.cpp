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
//tests're passed
int t04_both2() {
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
            cout << *it << ' ';
        }
    }
}
