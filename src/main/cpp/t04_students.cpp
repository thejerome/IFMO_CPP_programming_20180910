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
#include <string>
#include <algorithm>


using namespace std;


struct student{
    string surname;
    string name;
    double mark;
};

bool cmp(student student1, student student2){
    return student1.mark > student2.mark;
}

int t04_students() {
    unsigned int size;
    int mark1, mark2, mark3;
    cin >> size;
    vector <student> students(size);
    for (int i = 0; i < size; i ++){
        cin >> students[i].surname >> students[i].name;
        cin >> mark1 >> mark2 >> mark3;
        students[i].mark = mark1 + mark2 + mark3;
    }
    stable_sort(students.begin(), students.end(), cmp);
    for (int i = 0; i < size; i ++){
        cout << students[i].surname << ' ' <<  students[i].name << ' ';
    }
    return 0;
}