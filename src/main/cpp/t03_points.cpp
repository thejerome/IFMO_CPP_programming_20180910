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
#include <utility>


using namespace std;

int t03_points() {
    unsigned int size;
    int x, y;
    cin >> size;
    vector <pair <int, int>> coordinates(size);
    for (int i = 0; i < size; i ++){
        cin >> x >> y;
        coordinates[i] = {x, y};
    }
    for (int prohod = 0; prohod < size; prohod ++){
        for (int i = 0; i < size - prohod; i ++){
            if ((coordinates[i].first * coordinates[i].first + coordinates[i].second * coordinates[i].second) > (coordinates[i+1].first * coordinates[i+1].first + coordinates[i+1].second * coordinates[i+1].second)){
                swap(coordinates[i], coordinates[i+1]);
            }
        }
    }
    for (int i = 0; i < size; i ++){
        cout << coordinates[i].first << ' ' << coordinates[i].second << ' ';
    }
    return 0;
}
