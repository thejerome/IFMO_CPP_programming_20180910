//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
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
    vector <int> omg;
    vector <int> gl;
    int N,M,n,m,k,u;
    u=1;
    k=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>n;
        omg.push_back(n);
    }
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>m;
        gl.push_back(m);
    }
    for(int i=0;i<N;i++){
        for(int b=0;b<M;b++){
            if(omg[i]==gl[b]&&(u==1)){
                k++;
                u=0;
            }
        }
        u=1;
    }
    cout<<k;
    return 0;
}
