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

struct student{
    string nameandsurname;
    float average;

    void calculateaverage(int a, int b, int c){
        average = float(a + b + c) / 3 ;
    }
};

bool operator < (student s1, student s2){
    return s1.average > s2.average;
}

int t04_students() {
    int n;
    cin >> n;
    vector<student> students;
    for (int i = 0; i < n; i++){
        student anotherone;
        string stohelp;
        cin >> anotherone.nameandsurname;
        cin >> stohelp;
        anotherone.nameandsurname += " " + stohelp;
        int a, b, c;
        cin >> a >> b >> c;
        anotherone.calculateaverage(a,b,c);
        students.push_back(anotherone);
    }
    if (n > 0){
        stable_sort(students.begin(), students.end());
    }
    for (int i = 0; i < n; i++){
        cout << students[i].nameandsurname << " " ;
    }
}

