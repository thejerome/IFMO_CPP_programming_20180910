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
	int x1, y1, z1, x2, y2, z2;
	int b1max, b1middle, b1min;
	int b2max, b2middle, b2min;
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
	if (true)
	{
		if (x1 <= y1 && x1 <= z1)
		{
			if (y1 <= z1) { b1min = x1; b1middle = y1; b1max = z1; }
			else { b1min = x1;  b1middle = z1; b1max = y1; }
		}
		else if (y1 <= x1 && y1 <= z1)
		{
			if (x1 <= z1) { b1min = y1; b1middle = x1; b1max = z1; }
			else { b1min = y1; b1middle = z1; b1max = x1; }
		}
		else if (z1 <= x1 && z1 <= y1)
		{
			if (x1 <= y1) { b1min = z1; b1middle = x1; b1max = y1; }
			else { b1min = z1;  b1middle = y1; b1max = x1; }
		}
	} // for first box 
	if (true)
	{
		if (x2 <= y2 && x2 <= z2)
		{
			if (y2 <= z2) { b2min = x2;  b2middle = y2; b2max = z2; }
			else { b2min = x2;  b2middle = z2; b2max = y2; }
		}
		else if (y2 <= x2 && y2 <= z2)
		{
			if (x2 <= z2) { b2min = y2;  b2middle = x2; b2max = z2; }
			else { b2min = y2;  b2middle = z2; b2max = x2; }
		}
		else if (z2 <= x2 && z2 <= y2)
		{
			if (x2 <= y2) { b2min = z2;  b2middle = x2; b2max = y2; }
			else { b2min = z2;  b2middle = y2; b2max = x2; }
		}
	} // for second box 

	if (b1min == b2min && b1middle == b2middle && b1max == b2max)  cout << "Boxes are equal";
	else if (b1max <= b2max && b1middle <= b2middle && b1min <= b2min) cout << "The first box is smaller than the second one";
	else if (b1max >= b2max && b1middle >= b2middle && b1min >= b2min) cout << "The first box is larger than the second one";
	else cout << "Boxes are incomparable";
};