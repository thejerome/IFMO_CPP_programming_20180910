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



using namespace std;

struct coordinates{
    int x;
    int y;
    double r;
};

struct program{
    coordinates points[100];
    int n;
    void read() {
        for (int i = 0; i < n; i++) {
            cin >> points[i].x >> points[i].y;
            points[i].r = sqrt(pow(points[i].x, 2) + pow(points[i].y, 2));
        }
    }

    void sort(){
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                if (points[i].r > points[j].r ){
                    swap(points[i].x, points[j].x);
                    swap(points[i].y, points[j].y);
                    swap(points[i].r, points[j].r);
                }
            }
        }
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
    t03.sort();
    t03.write();
}
