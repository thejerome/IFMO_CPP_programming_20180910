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
    set <int> n1, n2,n3;
    int N, M;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int c;
        cin >> c;
        n1.insert(c);
    }
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        int a;
        cin >> a;
        n2.insert(a);
        if(n1.find(a) != n1.end())
            n3.insert(a);
    }
    set <int>::iterator r;
    for(r = n3.begin(); r != n3.end(); r++)
        cout << *r << ' ';
    return 0;

}
