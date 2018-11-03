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
//Done
int t07_snake() {


    int n, m, count = 1, i, j, i0, j0,
        mas[30][30];

    cin >> n >> m;

    for (i = 0; i < n; i+=2){
        for (j = 0; j < m; j++){
            mas[i][j] = i*m+j+1;
        }
    }

    for (i = 1; i < n; i+=2){
        for (j = m-1; j >= 0; j--){
            mas[i][j] = (i+1)*m-j;
        }
    }




    for (i = 0; i < n; i++){
        cout << endl;
        for (j = 0; j < m; j++){
            cout.width(4);
            cout << mas[i][j] << ' ';
        }
    }


    return 0;
}
