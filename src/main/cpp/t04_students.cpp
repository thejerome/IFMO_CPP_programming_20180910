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

#include <vector>
#include <algorithm>
#include "t04_students.h"
#include <iostream>

using namespace std;

struct Student
{
	string name, surname;
	int mat, fiz, inf;

	bool operator > (const Student& cmp) const
	{
		return (mat + fiz + inf > cmp.mat + cmp.fiz + cmp.inf);
	}
};

int t04_students() {

	int n;

	cin >> n;

	vector <Student> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].name >> v[i].surname;
		cin >> v[i].mat >> v[i].fiz >> v[i].inf;
	}

	sort(v.begin(), v.end(), greater <Student>());

	for (int i = 0; i < n; i++)
	{
		cout << v[i].name << " " << v[i].surname << endl;
	}

}
