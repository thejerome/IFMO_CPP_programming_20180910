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
#include <math.h>

using namespace std;

struct point {
    int x;
    int y;
    double dist;
};

bool cmp(const point &a, const point &b) {
    return a.dist < b.dist;
}
int t03_points() {
    int n;
    cin >> n;
    vector <point> a(n);  
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
        a[i].dist = sqrt(pow(a[i].x,2) + pow(a[i].y,2));
    }
    sort(a.begin(), a.end(), cmp); 
    for (int i = 0; i < n; i++) {
        cout << a[i].x << " " << a[i].y << " ";
    }
}
