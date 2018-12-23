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

#include <vector>
#include <math.h>
#include <algorithm>
#include "t03_points.h"
#include <iostream>


using namespace std;

struct Point
{
	double x, y, s;

	bool operator < (const Point & cmp) const
	{
		return (s < cmp.s);
	}
};

int t03_points() {

	int n;

	cin >> n;

	vector <Point> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].x >> v[i].y;

		v[i].s = sqrt(v[i].x * v[i].x + v[i].y * v[i].y);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << v[i].x << " " << v[i].y << endl;
	}

}