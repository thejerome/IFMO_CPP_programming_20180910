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
    int n;
    cin>>n;
    set <int> check1;
    for (int i = 0; i < n; ++i){

        int curr;
        cin >> curr;
        check1.insert(curr);
    }

    int n1;
    cin >> n1;
    set <int> check2;
    for (int i=0; i < n1; i++){

        int current;
        cin >> current;
        check2.insert(current);
    }
    for (auto el_1: check1){

        for (auto el_2: check2){

            if (el_1 == el_2)
                cout << el_1 << ' ';
        }
    }

}
