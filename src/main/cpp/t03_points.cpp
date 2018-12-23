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
#include <cmath>
#include <algorithm>

using namespace std;

struct COORDINATES {
    int x, y;
};

double dist (COORDINATES p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

bool cmp(const COORDINATES &p1, const COORDINATES &p2) {
    return dist(p1) < dist(p2);
}

int t03_points() {
    int n;
    cin>>n;
    COORDINATES p[n];
    for (int i=0; i < n; i++) {
        cin>>p[i].x>>p[i].y;
    }
    sort(p, p + n, cmp);
    for (int i=0; i < n; i++) {
        cout<<p[i].x<<' '<<p[i].y<<endl;
    }
}
