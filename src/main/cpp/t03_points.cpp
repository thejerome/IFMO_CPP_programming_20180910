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
#include "t03_points.h"
#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;


struct coordinates{
    int x;
    int y;
    double distance;
};


struct my_sort{
    coordinates my_coordinates[100];
    void enter(int n){
        for (int i = 0; i < n; i ++){
            cin >> my_coordinates[i].x >> my_coordinates[i].y;
            my_coordinates[i].distance = sqrt(pow(my_coordinates[i].x, 2) + pow(my_coordinates[i].y, 2));
        }
    }
    void Sort(int n){
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                if (my_coordinates[i].distance > my_coordinates[j].distance){
                    swap(my_coordinates[i], my_coordinates[j]);
                }
            }
        }
    }
    void Print(int n){
        for (int i = 0; i < n; i ++){
            cout << my_coordinates[i].x << ' ' << my_coordinates[i].y << ' ';
        }
    }
};
int t03_points() {
    int size;
    cin >> size;
    my_sort information;
    information.enter(size);
    information.Sort(size);
    information.Print(size);
    return 0;
}
