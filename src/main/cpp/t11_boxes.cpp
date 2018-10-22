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
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> f >> e;
    if((a == e && b == c && d == f) || (a == e && b == f && d == c)){
        cout << "Boxes are equal";
    }else if((a == f && b == c && d == e)|| (a == f && b == e && d == c)){
            cout << "Boxes are equal";
    }else if((a == c && b == e && d == f)|| (a == c && b == f && d == e)){
                cout << "Boxes are equal";
    }else if((a>=f&&b>=c&&d>=e) || (a>=f&&b>=e&&d>=c) || (a>=c&&b>=f&&d>=e) || (a>=c&&b>=e&&d>=f)){
                    cout << "The first box is larger than the second one";
    }else if((a>=e&&b>=c&&d>=f) || (a>=e&&b>=f&&d>=c)){
                        cout << "The first box is larger than the second one";
    }else if((a<=f&&b<=c&&d<=e) || (a<=f&&b<=e&&d<=c) || (a<=c&&b<=f&&d<=e) || (a<=c&&b<=e&&d<f)){
                            cout << "The first box is smaller than the second one";
    }else if((a<=e&&b<=c&&d<f) || (a<=e&&b<=f&&d<=c)){
                                cout << "The first box is smaller than the second one";
    }else{ cout << "Boxes are incomparable"; }
};