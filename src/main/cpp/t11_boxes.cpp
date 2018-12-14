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
    int a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 > b1)
        if (b1 > c1) {
            int tmp = a1, tmp0=b1, tmp1 = c1;
            a1 = tmp1;
            c1 = tmp;
            b1 = tmp0;
        }
        else
            if (a1 > c1) {
                int tmp = a1, tmp0 = b1, tmp1 = c1;
                a1 = tmp0;
                b1 = tmp1;
                c1 = tmp;
            }
            else {
                int tmp = a1, tmp0 = b1, tmp1 = c1;
                a1 = tmp0;
                b1 = tmp;
                c1 = tmp1;
            }
    else
        if (a1 > c1) {
            int tmp = a1, tmp0 = b1, tmp1 = c1;
            a1 = tmp0;
            b1 = tmp1;
            c1 = tmp;
        }
        else
            if (b1 > c1) {
                int tmp = a1, tmp0 = b1, tmp1 = c1;
                a1 = tmp;
                b1 = tmp1;
                c1 = tmp0;
            }
    if (a2 > b2)
        if (b2 > c2) {
            int tmp = a2, tmp0=b2, tmp1 = c2;
            a2 = tmp1;
            c2 = tmp;
            b2 = tmp0;
        }
        else
            if (a2 > c2) {
                int tmp = a2, tmp0 = b2, tmp1 = c2;
                a2 = tmp0;
                b2 = tmp1;
                c2 = tmp;
            }
            else {
                int tmp = a2, tmp0 = b2, tmp1 = c2;
                a2 = tmp0;
                b2 = tmp;
                c2 = tmp1;
            }
    else
        if (a2 > c2) {
            int tmp = a2, tmp0 = b2, tmp1 = c2;
            a2 = tmp0;
            b2 = tmp1;
            c2 = tmp;
        }
        else
            if (b2 > c2) {
                int tmp = a2, tmp0 = b2, tmp1 = c2;
                a2 = tmp;
                b2 = tmp1;
                c2 = tmp0;
            }
    if (a1 == a2 && b1 == b2 && c1 == c2) cout << "Boxes are equal";
    else
        if (a1 > a2)
            if (b1 >= b2 && c1 >= c2) cout << "The first box is larger than the second one";
            else cout << "Boxes are incomparable";
        else
            if (a1 < a2)
                if (b1 <= b2 && c1 <= c2) cout << "The first box is smaller than the second one";
                else cout << "Boxes are incomparable";
            else
                if (b1 > b2 && c1 > c2) cout << "The first box is larger than the second one";
                else
                    if (b1 < b2 && c1 < c2) cout << "The first box is smaller than the second one";
                    else cout << "Boxes are incomparable";
};