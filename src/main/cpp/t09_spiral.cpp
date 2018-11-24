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

int t09_spiral() {
    int n,m,i,j;
    cin >> n >> m;
    int Matrix[n][m];
    int counter = 1;
    int ls = 0;
    int size = n * m + 1;
    bool trigger = false;
    int x = n;
    int y = m;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
	    Matrix[i][j] = 0;
	}
    }
    i = 0;
    j = 0;
    while (true){
	if (trigger == true){
	    break;
	}
	for (j = ls; j < m; j++){
//            if (ls == 1){ cout << counter << '[' << i << ']' << '[' << j << ']'; }
	    Matrix[i][j] = counter;
	    counter = counter + 1;
	    if (counter == size){
	        trigger = true;
	        break;
	    }
	}
	if (trigger == true){
	    break;
	}
	j = j - 1;
	for (i = ls + 1; i < n; i++){
	    Matrix[i][j] = counter;
	    counter = counter + 1;
            if (counter == size) {
	        trigger = true;
		break;
	    }
	}
	if (trigger == true){
	    break;
	}
	i = i - 1;
	for (j = (m - 2); j >= ls; j--){
	    Matrix[i][j] = counter;
	    counter = counter + 1;
	    if (counter == size) {
	        trigger = true;
		break;
	    }
	}
	if (trigger == true){
	    break;
	}
	j = j + 1;
	for (i = (n - 2); i >= ls + 1; i--){
	    Matrix[i][j] = counter;
	    counter = counter + 1;
	    if (counter == size) {
	        trigger = true;
		break;
	    }
	}
	i = i + 1;
	m = m - 1;
	n = n - 1;
	ls = ls + 1;
    }
    cout.width(4);
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
	    cout << Matrix[i][j] << " ";
	}
    }
    return 0;
}
