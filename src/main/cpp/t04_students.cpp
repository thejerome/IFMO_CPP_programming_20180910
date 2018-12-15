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
    string firstname, lastname;
    int mark_sum;
};

bool cmp (const student &a, const student &b)
{
    return a.mark_sum > b.mark_sum;
}

int t04_students() {
    int n;
    cin >> n;

    vector<student> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].lastname >> v[i].firstname;

        v[i].mark_sum = 0;
        for (int j = 0; j < 3; j++) {
            int mark;
            cin >> mark;

            v[i].mark_sum += mark;
        }
    }

    stable_sort (v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
        cout << v[i].lastname << ' ' << v[i].firstname << ' ';

}

