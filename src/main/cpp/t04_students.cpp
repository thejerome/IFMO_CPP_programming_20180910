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
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    string family, name;
    int sum_score;
};

bool cmp(student a, student b) {
    return a.sum_score > b.sum_score;
}

int t04_students() {
    int n;
    vector<student> a;
    cin >> n;
    for (int i=0; i<n; i++) {
        student ai;
        int s1,s2,s3;
        cin >> ai.family >> ai.name >> s1 >> s2 >> s3;
        ai.sum_score = s1+s2+s3;
        a.push_back(ai);
    }
    sort(a.begin(),a.end(),cmp);
    for (int i=0; i<n; i++) cout << a[i].family << ' ' << a[i].name << endl;
}

