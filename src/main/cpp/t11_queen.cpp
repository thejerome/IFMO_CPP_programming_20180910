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
struct Coordinates {
    int x,y;
};
int t11_queen() {
    Coordinates c[8];
    for (auto &i:c)
        cin >> i.x >> i.y;
    bool result=false;
    for (int i=0;i<8;i++) {
        for (int j=i+1;j<8;j++)
            if(c[i].x==c[j].x||c[i].y==c[j].y||
               abs(c[i].x-c[j].x)==abs(c[i].y-c[j].y))
                result=true;
    }
    if (result)
        cout << "YES";
    else
        cout << "NO";
}
