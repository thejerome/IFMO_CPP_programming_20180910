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
// Done
int t09_spiral() {
    int n, m, count = 1, i, j, i0, j0,
            mas[30][30];

    cin >> n >> m;

    int fn = n-1;
    int fm = m;

    i = 0;
    j = 0;
    j0 = -1;
    i0 = 0;
    while (count != n*m+1){

        for (j = j0 + 1; (j < j0+fm + 1) && (count != n*m+1) ; j++){
            mas[i0][j] = count;
            count++;
        }

        j--;
        fm--;

        for (i = i0 + 1; (i < i0+fn + 1) && (count != n*m+1); i++){
            mas[i][j] = count;
            count++;
        }

        i--;
        fn--;

        for (j0 = j - 1; (j0 > j-fm-1) && (count != n*m+1); j0--){
            mas[i][j0] = count;
            count++;
        }

        j0++;
        fm--;

        for (i0 = i - 1; (i0 > i-fn-1) && (count != n*m+1); i0--){
            mas[i0][j0] = count;
            count++;
        }

        i0++;
        fn--;
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
