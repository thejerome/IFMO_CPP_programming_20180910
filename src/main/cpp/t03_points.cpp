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
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool compare(pair <int, int> v1, pair <int, int> v2) {
    return pow(v1.first, 2) + pow(v1.second, 2) < pow(v2.first, 2) + pow(v2.second, 2);
}
int t03_points() {
    int N;
    cin >> N;
    vector <pair<int, int>> p(N);
    for (int i=0; i<N; i++) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end(), compare);
    for (auto i : p) {
        cout << i.first << " " << i.second << " ";
    }
    return 0;
}
