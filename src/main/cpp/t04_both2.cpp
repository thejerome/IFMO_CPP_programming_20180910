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
#include <vector>

using namespace std;

int t04_both2() {
    set<int> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        numbers.insert(a);
    }
    cin >> n;
    vector<int> samenumb;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        if (numbers.count(a) > 0){
            vector<int> :: iterator x;
            for(x = samenumb.begin(); x != samenumb.end() && a > *x; x++){}
            samenumb.insert(x,a);
        }
    }
    for (int i = 0; i < samenumb.size(); i++){
        cout << samenumb[i] << " ";
    }
}
