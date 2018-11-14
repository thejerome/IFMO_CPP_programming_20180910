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

int t07_snake() {
    int n, m, i, j, calculator = 0;
    cin >> n >> m;
    int a[n][m];
    for (i = 0; i < n; i++){
        int control_number = m;
        for (j = 0; j < m; j++){
            if ((i % 2) == 0){
                a[i][j] = calculator + 1;
            }
            else {

                a[i][j] = calculator + control_number;
                control_number -= 2;
            }
            calculator++;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout.width(4);
            cout << a[i][j] << " ";
        }
    }
    return 0;
}
