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


int t04_students() {
    unsigned int n;
    string name, surname;
    int mark1, mark2, mark3;
    cin >> n;
    vector <pair <string, string>> students(n);
    vector <int> marks(n);
    for (int i = 0; i < n; i ++){
        cin >> surname >> name >> mark1 >> mark2 >> mark3;
        students[i].first = surname;
        students[i].second = name;
        marks[i] = mark1 + mark2 + mark3;
    }
    for (int prohod = 0; prohod < n; prohod ++) {
        for (int i = 0; i < n - prohod; i++) {
            if (marks[i] < marks[i+1]){
                swap(students[i], students[i+1]);
                swap(marks[i], marks[i+1]);
            }
        }
    }
    for (auto now : students) {
        cout << now.first << ' ' << now.second << ' ';
    }
    return 0;
}

