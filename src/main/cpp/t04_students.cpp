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

struct student{
    string surname, name;
    int marks;};

bool results(student a, student b){
    return a.marks>b.marks;}

int t04_students() {
int n, math, phys, inf;
cin>>n;
vector <student> students(n);
    for (int i=0;i<n;i++){
        cin>>students[i].surname>>students[i].name>>math>>phys>>inf;
        students[i].marks=math+phys+inf;}
sort(students.begin(), students.end(), results);
    for (auto a:students){
        cout<<a.surname<<' '<< a.name<<' ';}
return 0;

}

