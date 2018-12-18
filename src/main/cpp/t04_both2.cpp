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
#include <vector>
#include <set>
using namespace std;

int t04_both2() {
    vector <int> xxx;
    set<int>MC;
    vector <int> sad;
    int N,M,n,m,k,u;
    k=0;
    u=1;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>n;
        xxx.push_back(n);
    }
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>m;
        sad.push_back(m);
    }
    for(int i=0;i<N;i++){
        for ( int b=0 ;b<M ;b++ ) {
            if ( xxx[i]==sad[b]&&( u==1 )) {
                k++;
                u = 0;
                MC.insert(xxx[i]);
            }
        }
        u=1;
    }
    for ( auto i=MC.begin();i!=MC.end();i++ ){
        cout<<*i<<" ";
    }
    return 0;
}

