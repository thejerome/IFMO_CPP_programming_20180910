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
#include <algorithm>

using namespace std;

int t11_boxes() {
    int first[3], second[3];
    for (int i=0; i<3; i++) cin >> first[i];
    for (int i=0; i<3; i++) cin >> second[i];
    sort(first, first+3);
    sort(second, second+3);
    if (first[0] == second[0] && first[1] == second[1] && first[2] == second[2]) cout << "Boxes are equal";
    else
        if (first[0] > second[0])
            if (first[1] >= second[1] && first[2] >= second[2]) cout << "The first box is larger than the second one";
            else cout << "Boxes are incomparable";
        else
            if (first[0] < second[0])
                if (first[1] <= second[1] && first[2] <= second[2]) cout << "The first box is smaller than the second one";
                else cout << "Boxes are incomparable";
            else
                if (first[1] > second[1] && first[2] > second[2]) cout << "The first box is larger than the second one";
                else
                    if (first[1] < second[1] && first[2] < second[2]) cout << "The first box is smaller than the second one";
                    else cout << "Boxes are incomparable";
};