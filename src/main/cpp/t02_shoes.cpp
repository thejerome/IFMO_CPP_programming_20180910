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
    int size;
    int count = 0;
    unsigned int count_of_pairs;
    cin >> size;
    cin >> count_of_pairs;
    if (count_of_pairs > 0) {
        vector<int> shoes(count_of_pairs);
        for (int i = 0; i < count_of_pairs; i++) {
            cin >> shoes[i];
        }
        sort(shoes.begin(), shoes.end());
        for (int i = 0; i <= shoes.size() - 1; i++) {
            if (shoes[i] >= size) {
                size = shoes[i];
                count += 1;
                break;
            }
        }
        for (int i = 1; i < shoes.size(); i++) {
            if (shoes[i] - size >= 3) {
                size = shoes[i];
                count += 1;
            }
        }
    }
    cout << count;
    return 0;
}
