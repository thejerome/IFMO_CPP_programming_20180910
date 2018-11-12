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
    int n;
    int *arr;
    cin >> n;
    arr = (int*) malloc(sizeof(int)*n*n);

    for (int diag = 0; diag < n; diag++){ //proiti vse diagonali
        for (int i = 0; i+diag < n; i++){
            arr[(i * n) + diag + i] = diag;
            arr[((diag + i) * n) + i] = diag;
        }
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[(i*n)+j] << " ";
        }
        cout << endl;
    }

    free(arr);
    return 0;
}
