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
#include <vector>

using namespace std;

struct student {
    string surname;
    string name;
    double rating;
};

bool cmp (const student &a, const student &b) {
    return a.rating > b.rating;
}
int t04_students() {
    int n;
    cin >> n;
    vector <student> a(n);
    for (int i = 0; i < n; i++) {
        int mat, fis, tech;
        cin >> a[i].surname >> a[i].name >> mat >> fis >> tech;
        a[i].rating = (mat + fis + tech);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i].surname << " " << a[i].name << " ";
    }
}

