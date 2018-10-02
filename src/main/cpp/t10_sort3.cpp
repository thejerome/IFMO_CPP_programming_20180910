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
	vector  vec;
	cin >> A[0] >> A[1] >> A[2];
	sort(A.begin(), A.end());
	cout << A[0] << " " << A[1] << " " << A[2];
};
