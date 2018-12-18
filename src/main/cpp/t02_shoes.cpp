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
    int n, pos = 0, amount = 0;
    short buyer_size;
    cin >> buyer_size;
    cin >> n;
    vector<int> shoes(n);
    for(int i = 0; i < n; i++)
    {
        int buf;
        cin >> buf;
        shoes[i] = buf;
    }
    sort(shoes.begin(), shoes.end());

    for(int i = 0; i < n; i++)
    {
        if (shoes[i] >= buyer_size) break;
        pos++;
    }

    if(pos == n){ cout << "0"; return 0;}
    if (shoes[pos] == buyer_size) amount++;
    for(int i = pos; i < n; i++)
    {
        cout<<"Trying "<< shoes[i]<<endl;
        if (shoes[i] >= pos + 3)
        {
            pos = shoes[i];
            cout << "Got: "<<pos<<endl;
            amount++;
        }
    }
    cout << amount;
    return 0;
}
