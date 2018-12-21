//В обувном магазине продается обувь разного размера. 
// Известно, что одну пару обуви можно надеть на другую, 
// если она хотя бы на три размера больше. 
// В магазин пришел покупатель. 
// Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так,
// чтобы он смог надеть их все одновременно.
//
//Входные данные
//
//Сначала вводится размер ноги покупателя 
// (обувь меньшего размера он надеть не сможет),
// затем количество пар обуви в магазине и размер каждой пары.
// Размер — натуральное число, не превосходящее 100, 
// количество пар обуви в магазине не превосходит 1000.
//
//Выходные данные
//
//Выведите единственное число — максимальное количество пар обуви.
//
//Sample Input:
//
//26
//5
//30 35 40 41 42
//Sample Output:
//
//3

#include "t02_shoes.h"
#include <iostream>
#include <algorithm>

using namespace std;

int t02_shoes() {
    int startsize;
    cin >> startsize;
    int n;
    cin >> n;
    vector<int> shoes;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        shoes.push_back(a);
    }
    if (shoes.begin() == shoes.end()) {
        sort(shoes.begin(),shoes.end());
    }

    int ans = 0, step = 0;
    while (step < n && shoes[step] < startsize){
        step++;
    }

    if ( step < n ){
        ans++;
        startsize = shoes[step];
        step++;
    }

    for (int i = step; i < n; i++){
        if (shoes[i] >= startsize + 3){
           ans++;
           startsize = shoes[i];
        }
    }
    cout << ans;
}
