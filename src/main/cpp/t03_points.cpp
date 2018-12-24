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
#include <cmath>
#include <vector>
using namespace std;
struct pt {
	int x;
	int y;
	int dist;
};

bool srt(pt v1, pt v2)
{
	return v1.dist < v2.dist;
};
int t03_points() {
	int n;
	cin >> n;
	vector <pt> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].x >> v[i].y;
		v[i].dist = pow(v[i].x, 2) + pow(v[i].y, 2);
	}
	sort(v.begin(), v.end(), srt);
	for (int i = 0; i < n; i++)
		cout << v[i].x << ' ' << v[i].y << endl;
	return 0;
}
