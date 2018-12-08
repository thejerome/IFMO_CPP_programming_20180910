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
    int n, m, c;
    c = 1;
    cin >> n >> m;
    int arr[n][m];
    for (int x = 0; x < n; x++) {
        if ((x+1) % 2 == 1) {
            for (int y = 0; y < m; y++) {
                arr[x][y] = c;
                c++;
            }
        }
        else {
            for (int y = m - 1; y >= 0; y--) {
                arr[x][y] = c ;
                c++;
            }
        }

    }
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
            cout << setw(4) << arr[x][y];
        }
        cout << endl;
    }
    return 0;
}
