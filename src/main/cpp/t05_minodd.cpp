//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
int n, min;
cin >>n;
min = 99998;
int m[n];
for(int z=0; z<n; z++){
    cin>>m[z];
}
for(int z=0; z<n; z++){
    if(abs(m[z]%2)==1&&m[z]<min){
        min = m[z];
    }
}
 if (min%2 ==0) cout<<0; else cout<<min;
}
