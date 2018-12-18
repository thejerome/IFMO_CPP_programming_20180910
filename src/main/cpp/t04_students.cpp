
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
using namespace std;
struct chelovechek
{
	string name;
	string surname;

	int a1;
	int a2;
	int a3;
	double srd;
};
bool sortirovka(chelovechek a, chelovechek b)
{
	return a.srd > b.srd;
};
int t04_students() {
	int n;
	cin >> n;
	chelovechek ludi[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ludi[i].name >> ludi[i].surname;
		cin >> ludi[i].a1 >> ludi[i].a2 >> ludi[i].a3;
		ludi[i].srd = ludi[i].a1 + ludi[i].a2 + ludi[i].a3;
	}
	stable_sort(ludi, ludi + n, sortirovka);
	for (int i = 0; i < n; i++)
	{
		cout << ludi[i].name << " " << ludi[i].surname << endl;
		
	}
	return 0;
}

