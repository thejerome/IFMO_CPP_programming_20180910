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
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct data{
    string name;
    string surname;
    double avg;

};

bool cmp(data s1, data s2){
    return s1.avg>s2.avg;
}

int t04_students() {
    int n;
    cin >> n;
    vector <data> notes;
    data m;
    for (int i=0; i<n; i++){
        cin >> m.name;
        cin >> m.surname;
        int a=0;
        cin >> a;
        m.avg=0;
        m.avg=m.avg+a;
        cin >> a;
        m.avg=m.avg+a;
        cin >> a;
        m.avg=m.avg+a;
        m.avg=m.avg/3;
        notes.push_back(m);
    }
    stable_sort(notes.begin(), notes.end(),cmp);
    for (int i=0; i<n; i++){
        cout << notes[i].name << " " << notes[i].surname << /*notes[i].number <<*/ endl;
    }
}