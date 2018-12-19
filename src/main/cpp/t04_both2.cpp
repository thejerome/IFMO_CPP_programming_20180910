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
    set<int>numbers;
    int N;
    cin >> N;
    int num;
    for(int i=0; i<N; i++){
        cin >> num;
        numbers.insert(num);
    }
    int M;
    cin >> M;
    set<int>samenum;
    for(int j=0; j<M; j++){
        cin >> num;
        if(numbers.count(num)!=0) samenum.insert(num);
    }
    set<int>::iterator it;
    for(it=samenum.begin(); it!=samenum.end(); it++) cout << *it << " ";
    return 0;
}
