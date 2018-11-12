//Дан квадратный двумерный массив размером n × n и число k. 
// Выведите элементы k-й по счету диагонали ниже главной диагонали 
// (т.е. если k = 1, то нужно вывести элементы первой диагонали, лежащей ниже главной, 
// если k = 2, то второй диагонали и т.д.).
//
//Значение k может быть отрицательным, например, если k = −1, 
// то нужно вывести значение первой диагонали лежащей выше главной. 
// Если k = 0, то нужно вывести элементы главной диагонали.
//
//Программа получает на вход число n, не превосходящие 10, затем массив размером n × n, затем число k.
//Sample Input 1:
//
//4
//1 2 3 4
//5 6 7 8
//0 1 2 3
//4 5 6 7
//1
//Sample Output 1:
//
//5 1 6
//Sample Input 2:
//
//4
//1 2 3 4
//5 6 7 8
//0 1 2 3
//4 5 6 7
//-2
//Sample Output 2:
//
//3 8

#include "t05_kdiag.h"
#include <iostream>


using namespace std;

int t05_kdiag() {
    int k, size, num = 0;
    int *arr, *res;
    cin >> size;
    arr = (int*) malloc(sizeof(int)*size*size);
    res = (int*) malloc(sizeof(int)*size*size);
    for (int i = 0; i < size*size; i++){
        cin >> arr[i];
    }
    cin >> k;

    if (k < 0){
        k = -k;
        for(int i = 0; i+k < size; i++){
            res[i] = arr[(i*size)+k+i];
            num++;
        }
    }
    else{
        for (int i = 0; i+k < size; i++){
            res[i] = arr[((k+i)*size)+i];
            num++;
        }
    }

    for (int i = 0; i < num; i++){
        cout << res[i] << " ";
    }

    free(arr);
    free(res);
    return 0;
}
