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


using namespace std;


struct student{
    string surname;
    string name;
    double mark;
};

struct students{
    student pupils[100];
    void enter(int n){
        double mark1, mark2, mark3;
        for (int i = 0; i < n; i ++){
            cin >> pupils[i].surname >> pupils[i].name;
            cin >> mark1 >> mark2 >> mark3;
            pupils[i].mark = mark1 + mark2 + mark3;
        }
    }
    void Sort(int n){
        for(int prohod = 0; prohod < n; prohod ++){
            for (int i = 0; i < n - prohod; i ++){
                if (pupils[i].mark < pupils[i+1].mark){
                    swap(pupils[i], pupils[i+1]);
                }
            }
        }
    }
    void Print(int n){
        for (int i = 0; i < n; i ++){
            cout << pupils[i].surname << ' ' <<  pupils[i].name << ' ';
        }
    }
};
int t04_students() {
    int size;
    cin >> size;
    students information;
    information.enter(size);
    information.Sort(size);
    information.Print(size);
    return 0;
}

