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
#include <string>
#include <vector>

using namespace std;
struct student
{
    string name;
    string surname;
    int x;
    int y;
    int z;
    double srd;
};
bool kavo(student a, student b)
{
    return a.srd > b.srd;
};


int t04_students() {
    int n;
    cin >> n;
    vector< student> ppl(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ppl[i].name >> ppl[i].surname;
        cin >> ppl[i].x >> ppl[i].y >> ppl[i].z;
        ppl[i].srd = ppl[i].x + ppl[i].y + ppl[i].z;
    }
    stable_sort(ppl.begin(), ppl.end(), kavo);
    for (int i = 0; i < n; i++)
    {
        cout << ppl[i].name << " " << ppl[i].surname << endl;

    }
    return 0;
    
}

