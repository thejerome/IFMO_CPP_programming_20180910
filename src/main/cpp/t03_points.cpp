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

struct point {
	int x;
	int y;
	double sqr_dist;
};

bool cmp(const point &p1, const point &p2) {
	return p1.sqr_dist < p2.sqr_dist;
}

int t03_points() {
	unsigned int amount_of_points;
	cin >> amount_of_points;
	vector <point> point(amount_of_points);
	for (int i = 0; i < amount_of_points; i++) {
		cin >> point[i].x >> point[i].y;
		point[i].sqr_dist = pow(point[i].x, 2) + pow(point[i].y, 2);
	}
	sort(point.begin(), point.end(), cmp);
	for (int i = 0; i < amount_of_points; i++) {
		cout << point[i].x << " " << point[i].y << endl;
	}
}
