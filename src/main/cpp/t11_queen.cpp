//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

bool a[9][9]={false};

bool check(int x, int y, int xi, int yi) {
    while (x > 0 && y > 0 && x < 9 && y < 9) {
        if (a[x][y]) return false;
        x += xi;
        y += yi;
    }
    return true;
}

int t11_queen() {
    for (int i=0; i<8; i++) {
        int x,y;
        cin >> x >> y;
        a[x][y]=true;
    }
    for (int i=1; i<9; i++)
        for (int j=1; j<9; j++)
            if (a[i][j]) {
                if (!check(i,j+1,0,1)) {cout << "YES"; return 0;}
                if (!check(i,j-1,0,-1)) {cout << "YES"; return 0;}
                if (!check(i+1,j,1,0)) {cout << "YES"; return 0;}
                if (!check(i-1,j,-1,0)) {cout << "YES"; return 0;}
                if (!check(i-1,j+1,-1,1)) {cout << "YES"; return 0;}
                if (!check(i+1,j+1,1,1)) {cout << "YES"; return 0;}
                if (!check(i-1,j-1,-1,-1)) {cout << "YES"; return 0;}
                if (!check(i+1,j-1,1,-1)) {cout << "YES"; return 0;}
            }
    cout << "NO";
}
