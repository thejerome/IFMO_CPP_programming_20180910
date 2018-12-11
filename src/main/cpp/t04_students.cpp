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

using namespace std;

struct data{
    string surname;
    string name;
    double avg;
};

struct program{
    data students[100];


    void read(int n) {
        for (int i = 0; i < n; i++) {
            cin >> students[i].surname >> students[i].name;
            students[i].avg=0;
            for (int j=0; j<3; j++){
                int t;
                cin >> t;
                students[i].avg+=t;
            }
            students[i].avg=(students[i].avg)/3;
        }
    }

    void sort(int n){
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                if (students[i].avg > students[j].avg ){
                    swap(students[i].surname, students[j].surname);
                    swap(students[i].name, students[j].name);
                    swap(students[i].avg, students[j].avg);
                }
            }
        }
    }

    void write(int n){
        for (int i=0; i<n; i++){
            cout << students[i].surname << ' ' << students[i].name << endl;
        }
    }
};

int t04_students() {
    program t04;
    int n;
    cin >> n;
    t04.read(n);
    t04.sort(n);
    t04.write(n);
}

