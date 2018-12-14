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
//tests're passed
using namespace std;


int t04_students() {
    int n;
    multimap<double, string> students;
    multimap<double, string> :: iterator it;
    students.clear();

    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, second_name;
        int num1, num2, num3;

        cin >> name >> second_name;
        cin >> num1 >> num2 >> num3;

        students.insert(make_pair(-(num1+num2+num3)/3.0, name+" "+second_name));
    }

    for (it = students.begin(); it != students.end(); it++){
        cout << it->second << ' ';
    }
}

