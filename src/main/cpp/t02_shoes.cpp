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

int t02_shoes() {
    int client_size;
    cin >> client_size;
    size_t pairs_count;
    cin >> pairs_count;
    vector<int> pairs(pairs_count);
    for(auto &size: pairs)
        cin >> size;
    sort(pairs.begin(), pairs.end());
    auto i = find_if(pairs.begin(), pairs.end(), [&client_size](int size){ 
        return size >= client_size; });
    int prev, c, max = 0;
    for(; i != pairs.end(); ++i) {
        c = 1;
        prev = *i;
        for(auto j = i + 1; j != pairs.end(); ++j) {
            if(*j >= prev + 3) {
                prev = *j;
                c++;
            }
        }
        if(c > max) max = c;
    }
    cout << max;
}
