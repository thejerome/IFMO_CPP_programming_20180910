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

using namespace std;

struct point{
    int x,y;
    double distance;

    void calculatedistance (){
        distance = sqrt(pow(x,2) + pow(y,2));
    }
};

bool operator < (point &p1, point &p2){
    return p1.distance < p2.distance;
}

int t03_points() {
    int n;
    cin >> n;
    vector<point> points;
    for (int i = 0; i < n; i++){
        point p;
        cin >> p.x >> p.y;
        p.calculatedistance();
        points.push_back(p);
    }
    if (n > 0) {
        sort(points.begin(), points.end());
    }

    for (int i = 0; i < n; i++){
        cout << points[i].x << " " << points[i].y << " ";
    }
}
