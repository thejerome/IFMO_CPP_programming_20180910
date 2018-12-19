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

using namespace std;

int t10_sort3() 
{
	int A, B, C;
	cin >> A >> B >>C;
	if (A > B)
	{
		if (B > C) 
			cout << C << " " << B << " " << A;
		else if(A > C)
			cout << B << " " << C << " " << A;
		else 
			cout << B << " " << A << " " << C;
	}
	else
	{
		if (A > C) 
			cout << C << " " << A << " " << B;
		else if(B > C)
			cout << A << " " << C << " " << B;
		else 
			cout << A << " " << B << " " << C;
	}
};
