//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>


using namespace std;

int t09_spiral() 
{
	int N, M;
	cin >> N >> M;
	int Arr[N][M], P = 1, K = 0, X = 0, Y = 0, m_max = M, n_max = N, m_min = 0, n_min = 0;
	while (K < N*M) 
	{
		while (X < m_max && K < N*M)
		{
			Arr[Y][X] = P++;
			X++;
			K++;
		}
		X--;
		Y++;
		m_max--;
		while (Y < n_max && K < N*M) 
		{
			Arr[Y][X] = P++;
			Y++;
			K++;
		}
		Y--;
		X--;
		n_min++;
		while (X >= m_min && K < N*M) 
		{
			Arr[Y][X] = P++;
			X--;
			K++;
		}
		X++;
		Y--;
		m_min++;
		while (Y >= n_min && K < N*M) 
		{
			Arr[Y][X] = P++;
			Y--;
			K++;
		}
		Y++;
		X++;
		n_max--;
	}
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < M; j++) 
			cout << Arr[i][j] << " ";
    return 0;
}
