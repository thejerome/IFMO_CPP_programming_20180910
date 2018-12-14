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
        int n[3],m[3],l=0,h=0;
        for (int i=0; i<3; i++) cin>>n[i];
        for (int j=0; j<3; j++) cin>>m[j];
        for (int i=0; i<3; i++)
            for (int j=i; j<3; ++j) {
                if (n[i]>n[j]) {
                    int copy = n[i];
                    n[i] = n[j];
                    n[j] = copy;
                }
                if (m[i]>m[j]) {
                    int copy = m[i];
                    m[i] = m[j];
                    m[j] = copy;
                }
            }

        for (int i=0; i<3; ++i) {
            if (n[i]>m[i]) l++;
            if (m[i]>n[i]) h++;
        }
        if (l==0 && h==0)		cout<<"Boxes are equal";
        else if (l>h && h==0) 	cout<<"The first box is larger than the second one";
        else if (h>l && l==0)	cout<<"The first box is smaller than the second one";
        else 					cout<<"Boxes are incomparable";
};