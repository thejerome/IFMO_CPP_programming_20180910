//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() 
{
	int N, M;
	cin >> N >> M;
	int Arr[N][M];
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < M; j++)
			cin >> Arr[i][j];		
	int X1, X2;
	cin >> X1 >> X2;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (j == X1) {
				int buff = Arr[i][X1];
				Arr[i][X1] = Arr[i][X2];
				Arr[i][X2] = buff;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << Arr[i][j] << " ";
		}
	}
    return 0;
}
