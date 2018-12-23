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

struct students {
    string name;
    string sername;
    double mark1;
    double mark2;
    double mark3;
    double average_grade;
};

bool dif(students st1, students st2){
    return st1.average_grade > st2.average_grade;
};

int t04_students() {
    int N;
    cin >> N;
    students student[N];
    int i;
    for (i = 0; i < N; i++) {
        cin >> student[i].name;
        cin >> student[i].sername;
        cin >> student[i].mark1;
        cin >> student[i].mark2;
        cin >> student[i].mark3;
        student[i].average_grade = ((student[i].mark1 + student[i].mark2 + student[i].mark3)/3);
    }
    sort(student, student + N, dif);
    for (i = 0; i < N; i++) {
        cout << student[i].name << " ";
        cout << student[i].sername << " ";
    }
}
