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
    int x1,y1,z1,a1,b1,c1;
    cin>>x1>>y1>>z1;
    if (x1<=y1 && y1<=z1)
    {a1=x1; b1=y1; c1=z1;}
    else if (x1<=z1 && z1<=y1)
    {a1=x1; b1=z1; c1=y1;}
    else if (y1<=z1 && z1<=x1)
    {a1=y1 ;b1=z1 ;c1=x1;}
    else if (y1<=x1 && x1<=z1)
    {a1=y1 ;b1=x1; c1=z1;}
    else if (z1<=x1 && x1<=y1)
    {a1=z1; b1=x1; c1=y1;}
    else if (z1<=y1 && y1<=x1)
    {a1=z1; b1=y1; c1=x1;}
    int x2,y2,z2,a2,b2,c2;
    cin>>x2>>y2>>z2;
    if (x2<=y2 && y2<=z2)
    {a2=x2; b2=y2; c2=z2;}
    else if (x2<=z2 && z2<=y2)
    {a2=x2; b2=z2; c2=y2;}
    else if (y2<=z2 && z2<=x2)
    {a2=y2 ;b2=z2 ;c2=x2;}
    else if (y2<=x2 && x2<=z2)
    {a2=y2 ;b2=x2; c2=z2;}
    else if (z2<=x2 && x2<=y2)
    {a2=z2; b2=x2; c2=y2;}
    else if (z2<=y2 && y2<=x2)
    {a2=z2; b2=y2; c2=x2;}
    if ((a1 == a2) && (b1 == b2) && (c1 == c2))
    {cout << "Boxes are equal";}
    else if ((a1 <= a2) && (b1 <= b2) && (c1 <= c2))
    {cout <<"The first box is smaller than the second one";}
    else if ((a1 >= a2) && (b1 >= b2) && (c1 >= c2))
    {cout <<"The first box is larger than the second one";}
    else {cout <<"Boxes are incomparable";}
    return  0;
};