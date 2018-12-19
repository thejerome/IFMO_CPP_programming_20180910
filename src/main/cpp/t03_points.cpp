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
#include <cmath>
#include <algorithm>


using namespace std;

struct Point{
    double x, y, r;
    bool operator < (const Point& cmp) const
    {
        return (r < cmp.r);
    }
};


int t03_points() {
    int n;
    cin >> n;
    vector<Point> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i].x >> input[i].y;
        input[i].r = sqrt(input[i].x * input[i].x + input[i].y * input[i].y);
    }

    sort(input.begin(), input.end());

    for(int i = 0; i < n; i++)
    {
        cout << input[i].x << " " << input[i].y << endl;
    }

    return 0;
}
