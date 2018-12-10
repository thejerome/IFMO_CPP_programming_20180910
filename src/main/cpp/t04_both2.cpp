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
    int N, M, a;
    set<int> int1;
    set<int> int2;
    vector<int> result;
    cin >> N;
    for (int i=0; i < N; i++) {
        cin >> a;
        int1.insert(a);
    }
    cin >> M;
    for (int i=0; i < M; i++) {
        cin >> a;
        int2.insert(a);
    }
    for (auto now1=int1.begin(); now1!=int1.end(); now1++) {
        int element1=*now1;
        for (auto now2=int2.begin(); now2!=int2.end(); now2++) {
            int element2=*now2;
            if (element1==element2) {
                result.push_back(element1);
            }
        }
    }
    for (int i=0; i < (result.size()-1); i++){
        for (int j=i+1; j < result.size(); j++) {
            if (result[i] > result[j]) {
                int t = result[j];
                result[j] = result[i];
                result[i] = t;
            }
        }
    }
    for (int i=0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}
