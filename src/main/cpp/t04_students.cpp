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

struct student{
    string name;
    string surname;
    double b1;
    double b2;
    double b3;
    double average;
};

bool dif(student st1, student st2){
    return st1.average > st2.average;
};

int t04_students() {
    int n;
    cin >> n;
    student st[n];
    for(int i=0; i<n; i++){
        cin >> st[i].name >> st[i].surname >> st[i].b1 >> st[i].b2 >> st[i].b3;
        st[i].average = (st[i].b1 + st[i].b2 + st[i].b3)/3;
    }
    sort(st, st+n, dif);
    for(int i=0; i<n; i++){
        cout << st[i].name << " " << st[i].surname << endl;
    }
    return 0;
    
}

