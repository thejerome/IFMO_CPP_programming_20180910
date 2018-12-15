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
    set<int>why;
    vector<int> sad;
    vector<int> xxx;
    int n,N,M1,m2,z,k;
    cin >> n;
    k=0;
    for (int i = 0; i < n; i++) {
        cin >> M1;
        sad.push_back(M1);
    }
    cin >> N;
    for ( int i = 0; i < N ; i++) {
        cin>>m2;
        xxx.push_back(m2);
    }
    for ( int i=0; i<n;i++ ){
        for ( int c=0; c<N;c++ ){
            if(sad[i]==xxx[c]){
                why.insert(sad[i]);
            }
        }
    }
    for (auto i=why.begin();i!=why.end();i++){
        cout<<*i<<" ";
    }
}

