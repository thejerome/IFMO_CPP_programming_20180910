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

struct Student
{
    string name, surname;
    int math, phys, cs;

    bool operator > (const Student& cmp) const
    {
        return ( math+phys+cs > cmp.math+cmp.phys+cmp.cs );
    }
};

int t04_students() {
    int n;
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].surname;
        cin >> students[i].math >> students[i].phys >> students[i].cs;
    }

    sort(students.begin(), students.end(), greater<Student>());

    for(int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].surname << endl;
    }

    return 0;
}

