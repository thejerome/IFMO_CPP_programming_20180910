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

using namespace std;

struct chelovechek
{
	int x;
	int y;
	double rast;
};
bool sortir(chelovechek a, chelovechek b)
{
	return a.rast < b.rast;
};
int t03_points() {
	int n;
	cin >> n;
	chelovechek pots[10000];
	for (int i = 0; i < n; i++)
	{
		cin >> pots[i].x >> pots[i].y;
		pots[i].rast = pots[i].x * pots[i].x + pots[i].y * pots[i].y;

	}

	sort(pots, pots + n, sortir);
	for (int i = 0; i < n; i++)
	{
		cout << pots[i].x << " " << pots[i].y << endl;
	}


	return 0;

}
