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


using namespace std;

int t07_snake() 
{
	int N, M;
	cin >> N >> M;
	int Arr[N][M], k = 1;
	for (int i = 0; i < N; i++) 
	{
		if (i % 2 == 0) 
			for (int j = 0; j < M; j++) 
				Arr[i][j] = k++;
		else 
			for (int j = M - 1; j >= 0; j--) 
				Arr[i][j] = k++;
	}
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < M; j++) 
			cout << Arr[i][j] << " ";
    return 0;
}
