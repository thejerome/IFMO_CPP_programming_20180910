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
#include <map>
#include <string>

using namespace std;

int t04_students() {
    int n;
    cin >> n;
    multimap<float, string, greater<float> > students;
    
    string fname, sname;
    float avgrade;
    for(int i = 0, math, phys, it; i < n; ++i) {
        cin >> fname >> sname;
        cin >> math >> phys >> it;
        avgrade = (math + phys + it) / 3.0f;
        students.insert(make_pair(avgrade, fname + ' ' + sname));
    }

    for(auto student: students) {
        cout << student.second << ' ';
    }
}

