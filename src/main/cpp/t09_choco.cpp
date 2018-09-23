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
    s=0;
    for (int i=1; i<=n; i++){
        s+=m;
        if (k==s) {cout << "YES"; break;}
    }
    if (k!=s) {
        s=0;
        for (int i=1; i<=m; i++){
            s+=n;
            if (k==s) {cout << "YES"; break;}
        }
    }
    if (k!=s) cout << "NO";
return 0;
};