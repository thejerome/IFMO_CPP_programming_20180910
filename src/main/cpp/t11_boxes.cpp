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
    int l1, w1, h1, l2, w2, h2;
    cin >> l1 >> w1 >> h1 >> l2 >> w2 >> h2;

    if (((l1==l2)&&(w1==w2)&&(h1==h2))||((l1==w2)&&(w1==l2)&&(h1==h2))||((l1==h2)&&(w1==w2)&&(h1==l2))||((l1==l2)&&(w1==h2)&&(h1==w2)))
    {
        cout << "Boxes are equal";

    }
    else
    {
        if (((l1>=l2)&&(w1>=w2)&&(h1>=h2))||((l1>=w2)&&(w1>=l2)&&(h1>=h2))||((l1>=h2)&&(w1>=w2)&&(h1>=l2))||((l1>=l2)&&(w1>=h2)&&(h1>=w2)))
        {
            cout << "The first box is larger than the second one";
        }
        else
        {
            if (((l1<=l2)&&(w1<=w2)&&(h1<=h2))||((l1<=w2)&&(w1<=l2)&&(h1<=h2))||((l1<=h2)&&(w1<=w2)&&(h1<=l2))||((l1<=l2)&&(w1<=h2)&&(h1<=w2)))
            {
                cout << "The first box is smaller than the second one";
            }
            else
            {
                cout << "Boxes are incomparable";
            }
        }
    }
};