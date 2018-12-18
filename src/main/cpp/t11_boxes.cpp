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
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    v1=x1*y1*z1;
    v2=x2*y2*z2;
    if (x1>y1 && x1>z1) {
        max1=x1;
        if (y1>z1) {
            n1=y1;
            min1=z1;
        } else {
            n1=z1;
            min1=y1;
        }
    } else {
        if (x1>y1 ) {
            max1=z1;
            n1=x1;
            min1=y1;
        } else {
            if (x1>z1) {
                max1=y1;
                n1=x1;
                min1=z1;
            } else {
                if (y1>z1) {
                    max1=y1;
                    n1=z1;
                    min1=x1;
                } else {
                    max1=z1;
                    n1=y1;
                    min1=x1;
                }
            }

        }
    }
    if (x2>y2 && x2>z2) {
        max2=x2;
        if (y2>z2) {
            n2=y2;
            min2=z2;
        } else {
            n2=z2;
            min2=y2;
        }
    } else {
        if (x2>y2 ) {
            max2=z2;
            n2=x2;
            min2=y2;
        } else {
            if (x2>z2) {
                max2=y2;
                n2=x2;
                min2=z2;
            } else {
                if (y2>z2) {
                    max2=y2;
                    n2=z2;
                    min2=x2;
                } else {
                    max2=z2;
                    n2=y2;
                    min2=x2;
                }
            }

        }
    }
    if (v1==v2) {
        cout<<"Boxes are equal";
    }
    if (v1>v2) { if ((max1>=max2) && (n1>=n2) && (min1>=min2)) {
            cout<<"The first box is larger than the second one";
        } else {
            cout<<"Boxes are incomparable";
        }
    }
    if (v2>v1) { if ((max2>=max1) && (n2>=n1) && (min2>=min1)) {
            cout<<"The first box is smaller than the second one";
        } else {
            cout<<"Boxes are incomparable";
        }
    }
};