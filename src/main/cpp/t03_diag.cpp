//Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу. 
// На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1.
// На следующих двух диагоналях числа 2, и т.д. 
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//0 1 2 3 4
//1 0 1 2 3
//2 1 0 1 2
//3 2 1 0 1
//4 3 2 1 0

#include "t03_diag.h"
#include <iostream>
#include <cmath>


using namespace std;

int t03_diag() {
    int n; cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j) mat[i][j] = 0;
//    for(int i = 0; i<n; ++i) mat[i] = new int[n]{0};

    for(int i = 0; i < n; ++i)
        for(int j = i + 1; j < n; ++j) mat[i][j] = j - i;
    for(int i = n-1; i >= 0; --i)
        for(int j = i-1; j >= 0; --j) mat[i][j] = i - j;

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cout << mat[i][j] << ' ';
    return 0;
}
