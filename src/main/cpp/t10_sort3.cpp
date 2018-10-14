//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>
#include <vector>     // vector
#include <algorithm>  // sort

using namespace std;

int t10_sort3() 
{
	int A, B, C;
	vector<int> vec{ };
	cin >> A >> B >> C;
	vec.push_back(A);
	vec.push_back(B);
	vec.push_back(C);
	sort(vec.begin(), vec.end());
	cout << vec[0] << " " << vec[1] << " " << vec[2];
};
