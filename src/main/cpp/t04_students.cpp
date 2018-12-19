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
#include <string>

using namespace std;

struct classmates {
    string surname;
    string name;
    int sum_of_marks;
};

bool cmp (const classmates &s1, const classmates &s2) {
    return s1.sum_of_marks > s2.sum_of_marks;
}

int t04_students() {
    unsigned int n;
    cin >> n;
    vector <classmates> student(n);
    for (int i = 0; i < n; i++) {
        cin >> student[i].surname >> student[i].name;
        for (int j = 0; j < 3; j++) {
            int mark;
            cin >> mark;
            student[i].sum_of_marks += mark;
        }
    }
    stable_sort (student.begin(), student.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << student[i].surname << " " << student[i].name << endl;
    }
}

