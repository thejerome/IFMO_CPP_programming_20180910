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

using namespace std;

struct STUDENTS {
    string name, surname;
    int p1, p2, p3;
};

bool cmp(const STUDENTS &s1, const STUDENTS &s2) {
    return (s1.p1 + s1.p2 + s1.p3) > (s2.p1 + s2.p2 + s2.p3);
}

int t04_students() {
    int n;
    cin>>n;
    STUDENTS s[n];
    for (int i=0; i < n; i++) {
        cin>>s[i].surname>>s[i].name>>s[i].p1>>s[i].p2>>s[i].p3;
    }

    sort(s, s + n, cmp);

    for (int j = 0; j < n; ++j) {
        cout<<s[j].surname<<' '<<s[j].name<<endl;
    }
}

