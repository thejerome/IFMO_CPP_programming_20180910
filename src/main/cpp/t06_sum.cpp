//Дана последовательность чисел, завершающаяся числом 0. 
// Найдите сумму всех этих чисел, не используя цикл.
//
//Формат входных данных
//        Вводится последовательность целых чисел, 
// оканчивающаяся числом 0 
// (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//17

#include <iostream>
#include <cmath>

using namespace std;

double beginSum(double last) {
	double temp;
	cin >> temp;
	if (temp != 0) {
		return beginSum(temp + last);
	}
	return last;
}

double t06_sum() {
	cout << beginSum(0);
    return 0;
}
