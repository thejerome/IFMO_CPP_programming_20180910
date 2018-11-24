//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: 
// клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. 
// В левом верхнем углу записано число 1.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   0   2   0   3
//   0   4   0   5   0
//   6   0   7   0   8

#include "t08_chess.h"
#include <iostream>


using namespace std;

int t08_chess() {
    int n,m;
    cin >> n >> m;
    int Matrix[n][m];
    int counter = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
	    if (((i + j) % 2) == 0){
	        Matrix[i][j] = counter;
		counter = counter + 1;
	    } else {
		Matrix[i][j] = 0;
	    }
	}
    }
    cout.width(4);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
	    cout << Matrix[i][j] << " ";
	}
    }   
    return 0;
}
