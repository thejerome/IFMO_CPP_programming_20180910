//Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
//
//Формат входных данных
//        Программа получает на вход числа A1, B1, C1, A2, B2, C2.
//Формат выходных данных
//        Программа должна вывести одну из следующих строчек:
//Boxes are equal, если коробки одинаковые,
//The first box is smaller than the second one, если первая коробка может быть положена во вторую,
//        The first box is larger than the second one, если вторая коробка может быть положена в первую,
//Boxes are incomparable, во всех остальных случаях.
//Sample Input 1:
//
//1
//2
//3
//3
//2
//1
//Sample Output 1:
//
//Boxes are equal
//        Sample Input 2:
//
//2
//2
//3
//3
//2
//1
//Sample Output 2:
//
//The first box is larger than the second one

#include "t11_boxes.h"
#include <iostream>

using namespace std;

int t11_boxes() {
    int x1,y1,z1,x2,y2,z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    int help;
    if (x1 > y1){
        help = x1;
        x1 = y1;
        y1 = help;
    }
    if (y1 > z1){
        help = y1;
        y1 = z1;
        z1 = help;
    }
    if (x1 > y1){
        help = x1;
        x1 = y1;
        y1 = help;
    }
    //====================================================
    if (x2 > y2){
        help = x2;
        x2 = y2;
        y2 = help;
    }
    if (y2 > z2){
        help = y2;
        y2 = z2;
        z2 = help;
    }
    if (x2 > y2){
        help = x2;
        x2 = y2;
        y2 = help;
    }
    if ( x1 <= x2 && y1 <= y2 && z1 <= z2 && !( x1 == x2 && y1 == y2 && z1 == z2 ) ){
        cout << "The first box is smaller than the second one";
    }
    else if ( x1 >= x2 && y1 >= y2 && z1 >= z2 && !( x1 == x2 && y1 == y2 && z1 == z2 ) ){
        cout << "The first box is larger than the second one";
    }
    else if ( x1 == x2 && y1 == y2 && z1 == z2 ){
        cout << "Boxes are equal";
    }
    else {
        cout << "Boxes are incomparable";
    }
};
