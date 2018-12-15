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
#include <vector>
using namespace std;

int t03_both() {
    vector<int> sad;
    vector<int> xxx;
    int n,N,M1,m2,z,k;
    cin >> n;
    k=0;
    z=1;
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
        if(sad[i]==xxx[c]&&(z==1)){
            k++;
            z=0;
        }
        z=1;
    }
}
    cout<<k;
}
