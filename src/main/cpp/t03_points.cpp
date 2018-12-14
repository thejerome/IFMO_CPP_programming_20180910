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
#include <map>
#include <math.h>
#include <string>


using namespace std;
//tests're done
int t03_points() {
    int n;
    multimap<double, string> points;
    multimap<double, string> :: iterator it;
    points.clear();

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.insert(make_pair(pow(x*x+y*y, 0.5), to_string(x)+" "+to_string(y)));
    }

    for (it = points.begin(); it != points.end(); it++){
        cout << it->second << ' ';
    }





}
