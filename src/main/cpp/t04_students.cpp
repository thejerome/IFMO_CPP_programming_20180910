//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//
//Заданы сначала количество учащихся n, затем n строк, 
// каждая из которых содержит фамилию, имя и три числа 
// (оценки по трем предметам: математике, физике, информатике). 
// Данные в строке разделены одним пробелом. 
// Оценки принимают значение от 1 до 5.
//
//Выходные данные
//
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. 
// Выводить оценки не нужно. 
// Если несколько учащихся имеют одинаковые средние баллы, 
// то их нужно выводить в порядке, заданном во входных данных.
//
//Sample Input:
//
//3
//Markov Valeriy 5 5 5
//Sergey Petrov 1 1 1
//Petrov Petr 3 3 3
//Sample Output:
//
//Markov Valeriy
//Petrov Petr
//Sergey Petrov

#include "t04_students.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
    string name, ser;
    int mark[3];
};
bool comp(student a, student b){
    int sum1, sum2;
    sum1 = sum2 = 0;
    for (int i = 0; i < 3; i++){
        sum1 += a.mark[i];
        sum2 += b.mark[i];
    }
    return sum1 > sum2;
}
int t04_students() {
    int x;
    cin >> x;
    vector<student> a(x);
    for ( int i=0; i<x;i++ ){
        cin >> a[i].name >> a[i].ser;
        for (int j = 0; j < 3; j++){
            cin >> a[i].mark[j];
        }
    }
    stable_sort(a.begin(), a.end(), comp);
    for (auto x : a){
        cout << x.name << " " << x.ser << " ";
    }
}
