//Шоколадка имеет вид прямоугольника, разделенного на N×M долек. Шоколадку можно один раз разломить по прямой на две части. Определите, можно ли таким образом отломить от шоколадки ровно K долек.
//
//Формат входных данных
//        Программа получает на вход три числа: N, M, K
//        Формат выходных данных
//Программа должна вывести одно из двух слов: YES или NO.
//Sample Input 1:
//
//4
//2
//6
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//2
//10
//7
//Sample Output 2:
//
//NO

#include "t09_choco.h"
#include <iostream>

using namespace std;
int t09_choco() {
    int m,n,k,s;
    cin >> n >> m >> k;
    if ((k%n == 0) && (k/n <= m)) cout << "YES";
        else if ((k%m == 0) && (k/m <= n)) cout << "YES";
            else cout << "NO";
return 0;
};