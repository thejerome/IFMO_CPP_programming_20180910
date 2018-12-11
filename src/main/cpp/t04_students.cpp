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
    string name;
    string surname;
    double avg;
    int number;
};

int t04_students() {
    int n;
    cin >> n;
    data notes[n];
    for (int i=0; i<n; i++){
        cin >> notes[i].name;
        cin >> notes[i].surname;
        int a=0;
        cin >> a;
        notes[i].avg=0;
        notes[i].avg=notes[i].avg+a;
        cin >> a;
        notes[i].avg=notes[i].avg+a;
        cin >> a;
        notes[i].avg=notes[i].avg+a;
        notes[i].avg=notes[i].avg/3;

        notes[i].number=i+1;
    }
    for (int i=n-1; i>0; i--){
        for (int j=i-1; j>=0; j--){
            if ((notes[i].avg>notes[j].avg) || (notes[i].avg==notes[j].avg && notes[i].number<notes[j].number)){
                //cout << notes[i].number << " " << notes[j].number << endl;
                swap(notes[i].avg,notes[j].avg);
                swap(notes[i].name,notes[j].name);
                swap(notes[i].surname,notes[j].surname);
                swap(notes[i].number,notes[j].number);
            }
        }
    }
    for (int i=0; i<n; i++){
        cout << notes[i].name << " " << notes[i].surname << /*notes[i].number <<*/ endl;
    }
}