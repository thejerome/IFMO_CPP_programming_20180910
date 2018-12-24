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
#include <cmath>
#include <vector>
using namespace std;
struct student {
	string family;
	string name;
	int math;
	int phys;
	int comp;
	int sred;
};

bool srt(student v1, student v2)
{
	return v1.sred > v2.sred;
}
int t04_student() {
	int n;
	cin >> n;
	vector <student> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].family >> v[i].name >> v[i].math >> v[i].phys >> v[i].comp;
		v[i].sred = v[i].math + v[i].phys + v[i].comp;
	};
	sort(v.begin(), v.end(), srt);
	for (int i = 0; i < n; i++)
	{
		cout << v[i].family << ' ' << v[i].name << endl;
	}
	return 0;
}


