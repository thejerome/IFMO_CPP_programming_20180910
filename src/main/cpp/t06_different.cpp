//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
int n, now, count;
cin>>n;
count = 1;
int m[n];
for(int z=0; z<n; z++){
    cin>>m[z];
}
now = m[0];
for(int z=1; z<n; z++){
    if(m[z]!=now){
        count++;
        now=m[z];
    }
}
cout<<count;
}
