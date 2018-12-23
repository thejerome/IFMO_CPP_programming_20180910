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

bool dist(pair<int,int>a,pair<int,int>b ){
    return ((pow(a.first,2)+pow(a.second,2))<(pow(b.first,2)+pow(b.second,2)));
}
int t03_points() {
int n;
cin>>n;
vector<pair<int,int>>point(n);
    for (int i=0; i<n; i++){
        cin>>point[i].first>>point[i].second;}
sort(point.begin(), point.end(), dist);
    for (auto x:point)
        cout<<x.first<<' '<<x.second<<' ';
return 0;

}
