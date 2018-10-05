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
    int a1, b1, c1, a2, b2, c2;
    int max_1_1, max_1_2, max_2_1, max_2_2, max_3_1, max_3_2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    // We are working with first 3 numbers
    if (a1 >= b1)
        if (c1 >= a1){
            max_1_1 = c1;
            max_2_1 = a1;
            max_3_1 = b1;
        }
        else if (c1 >= b1){
            max_1_1 = a1;
            max_2_1 = c1;
            max_3_1 = b1;
        }
        else{
            max_1_1 = a1;
            max_2_1 = b1;
            max_3_1 = c1;
        }
    else if (c1 >= b1){
        max_1_1 = c1;
        max_2_1 = b1;
        max_3_1 = a1;
    }
    else if (c1 >= a1){
        max_1_1 = b1;
        max_2_1 = c1;
        max_3_1 = a1;
    }
    else{
        max_1_1 = b1;
        max_2_1 = a1;
        max_3_1 = c1;
    }

    //  Here we are working with second 3 numbers
    if (a2 >= b2)
        if (c2 >= a2){
            max_1_2 = c2;
            max_2_2 = a2;
            max_3_2 = b2;
        }
        else if (c2 >= b2){
            max_1_2 = a2;
            max_2_2 = c2;
            max_3_2 = b2;
        }
        else{
            max_1_2 = a2;
            max_2_2 = b2;
            max_3_2 = c2;
        }
    else if (c2 >= b2){
        max_1_2 = c2;
        max_2_2 = b2;
        max_3_2 = a2;
    }
    else if (c2 >= a2){
        max_1_2 = b2;
        max_2_2 = c2;
        max_3_2 = a2;
    }
    else{
        max_1_2 = b2;
        max_2_2 = a2;
        max_3_2 = c2;
    }



    if (a1 * b1 * c1 > a2 * b2 * c2){
        if (max_3_2 <= max_3_1 and max_2_2 <= max_2_1 and max_1_2 <= max_1_1)
            cout << "The first box is larger than the second one";
        else
            cout << "Boxes are incomparable";
    }
    else if (a1 * b1 * c1 < a2 * b2 * c2){
        if (max_3_1 <= max_3_2 and max_2_1 <= max_2_2 and max_1_1 <= max_1_2)
            cout << "The first box is smaller than the second one";
        else
            cout << "Boxes are incomparable";
    }
    else if (max_3_1 == max_3_2 and max_2_2 == max_2_1 and max_1_1 == max_1_2)
        cout << "Boxes are equal";
};