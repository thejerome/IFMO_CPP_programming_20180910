//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Входные данные
//
//Программа получает на вход набор точек на плоскости. 
// Сначала задано количество точек n, затем идет последовательность из n строк,
// каждая из которых содержит два числа: координаты точки. 
// Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 10^3.
//
//Выходные данные
//
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Sample Input:
//
//2
//1 2
//2 3
//Sample Output:
//
//1 2
//2 3

#include "t03_points.h"
#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

bool ZO(pair < int, int > a, pair < int, int > b) {
    return (a.first * a.first + a.second * a.second < b.first * b.first + b.second * b.second);
}
int t03_points() {
    int T;
    cin >> T;
    vector< pair< int, int > > a(T);
    for (int i = 0; i < T; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), ZO);
    for (auto x : a){
        cout << x.first << " " << x.second<< " ";
    }

}
