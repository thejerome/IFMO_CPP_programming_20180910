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
    int	n,min=0,i=0;
    cin	>>	n;
    int v[n];
    for	(int	m=0;m<n;m++){
        cin	>>	v[m];
    }

    for	(int	m=0;m<n;m++){
        if    (((min>v[m])||(min==0))&&(v[m]%2!=0)){
            min=v[m];
            i++;
        }
    }
    if(i==0)min=0;
    cout	<<	min;
}
