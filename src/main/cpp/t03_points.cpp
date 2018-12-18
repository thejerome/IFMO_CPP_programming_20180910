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
#include "t03_points.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>


using namespace std;





struct coordinates{
    int x;
    int y;
    double distance;
};

bool cmp(coordinates coordinates1, coordinates coordinates2){
    return coordinates1.distance < coordinates2.distance;
}

int t03_points() {
    unsigned int size;
    cin >> size;
    vector <coordinates> my_coordinates(size);
    for (int i = 0; i < size; i ++){
        cin >> my_coordinates[i].x >> my_coordinates[i].y;
        my_coordinates[i].distance = sqrt(pow(my_coordinates[i].x, 2) + pow(my_coordinates[i].y, 2));
    }
    sort(my_coordinates.begin(), my_coordinates.end(), cmp);
    for (int i = 0; i < size; i ++){
        cout << my_coordinates[i].x << ' ' << my_coordinates[i].y << ' ';
    };
    return 0;
}
