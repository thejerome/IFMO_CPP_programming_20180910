//Определите сумму всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//3
//6
//8
//0
//Sample Output:
//
//17

#include "t04_sum.h"
#include <iostream>

using namespace std;

int t04_sum() {
    //int check = 1;
    //int i = 1;
    //int sum = 0;
    //while (check==1) {
    //    int a[i];
    //    cin>>a[i];
    //    sum = sum + a[i];
    //    if (a[i] == 0) check = 0;
    //        //cout <<sum;
    //    i++;
    //}
    //cout<<sum;
    int a=1;
    int sum = 0;
    while (a!=0){
        cin>>a;
        sum = sum + a;
    }
    cout<<sum-1;

};