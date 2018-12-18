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
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>


using namespace std;

struct coordinates{
    int x;
    int y;
    double r;
};

bool cmp(coordinates v1, coordinates v2){
    return v1.r < v2.r;
}

struct program{
    vector <coordinates> points;
    int n;
    void read() {
        for (int i = 0; i < n; i++) {
            coordinates p;
            cin >> p.x >> p.y;
            p.r = sqrt(pow(p.x, 2) + pow(p.y, 2));
            points.push_back(p);
        }
        sort(points.begin(), points.end(), cmp);
    }

    void write(){
        for (int i=0; i<n; i++){
            cout << points[i].x << ' ' << points[i].y << endl;
        }
    }
};

int t03_points() {
    program t03;
    cin >> t03.n;
    t03.read();
    t03.write();
}
