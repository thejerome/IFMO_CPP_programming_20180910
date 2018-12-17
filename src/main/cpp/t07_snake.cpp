//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t07_snake() {
	int n, m;
	cin >> n >> m;
	int M[n][m];
	int value = 1;
	for (int i = 0; i < n; i++)
	{
		
		if(i%2==0){ value = 1 + i * m; }
		else { value = (i + 1)*m; }
		
		for (int j = 0; j < m; j++)
		{
			if (i % 2 == 0) {
				cout << setw(4) << value;
				value++;
			}
			else {
				cout << setw(4) << value;
				value--;
			}
		}
		cout << endl;
	}
    return 0;
}
