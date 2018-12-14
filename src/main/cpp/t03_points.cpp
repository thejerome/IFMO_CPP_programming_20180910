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
#include <utility>
#include <algorithm>


using namespace std;

int t03_points() {
    int n;
    cin >> n;
    vector< pair<int, int> > points(n);
    
    for(auto &i: points)
        cin >> i.first >> i.second;     
    sort(points.begin(), points.end(), [](pair<int, int> a, pair<int, int> b){
        return sqrt(pow(a.first - 0, 2) + pow(a.second - 0, 2)) < 
               sqrt(pow(b.first - 0, 2) + pow(b.second - 0, 2));
    });

    for(auto i: points)
        cout << i.first << ' ' << i.second << ' ';
}
