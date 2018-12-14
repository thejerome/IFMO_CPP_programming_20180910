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
#include <vector>
#include <algorithm>


using namespace std;
//tests're done
int t02_shoes() {
    int n, first = 0, last = 0, count = 1, shoes_size;
    vector<int> shoes(0);

    cin >> shoes_size >>  n;

    for (int i = 0; i < n; i++){
        int value;
        cin >> value;
        shoes.push_back(value);
    }

    sort(shoes.begin(), shoes.end());

    while ( (first != n) && (shoes[first] < shoes_size)){
        first++;
        last++;
    }
    if (first == n){
        count = 0;
    }
    while (last < n){
        if (shoes[first]+3 <= shoes[last]){
            count++;
            first = last;
        }
        last++;
    }
    cout << count;

}

