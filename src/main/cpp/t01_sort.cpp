//Отсортируйте массив.
//
//Входные данные
//
//Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. 
// Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.
//
//Выходные данные
//
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//
//5
//5 4 3 2 1
//Sample Output:
//
//1 2 3 4 5

#include "t01_sort.h"
#include <iostream>
#include <time.h>


using namespace std;

int myqsort(int l, int r, int &arr){
    int middle = *(&arr + l); //middle element
    int nl = l, nr = r; // save left & right
    while (nr > nl){
        while (middle > *(&arr + nl)){
            nl++;
        }
        while (middle < *(&arr + nr)){
            nr--;
        }
        if (nr > nl){
            swap(*(&arr + nl), *(&arr + nr));
            nr -= (*(&arr + nr) != middle || *(&arr + nr) == *(&arr + nl))? 1: 0;
            nl += (*(&arr + nl) != middle || *(&arr + nr) == *(&arr + nl))? 1: 0;
        }
    }
    nr -= (*(&arr + nr) != middle )? 0: 1;
    nl += (*(&arr + nl) != middle )? 0: 1;
    if (nl < r){
        myqsort(nl, r, arr);
    }
    if (nr > l){
        myqsort(l, nr, arr);
    }
    return 0;
}

int t01_sort() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    myqsort(0, n-1, arr[0]);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
