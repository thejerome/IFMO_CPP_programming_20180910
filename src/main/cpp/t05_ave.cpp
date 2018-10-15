//Определите среднее значение всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу. Необходимую точность вычислите по тестам.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//5.66666666667

#include "t05_ave.h"
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int t05_ave() {
    vector<double> a;
    do {
        double n;
        cin >>  n;
        a.push_back(n);
    } while (a[(int)a.size()-1] != 0);
    double aver=0;
    for (int i=0; i<(int)a.size()-1; i++) aver += a[i];
    cout << fixed << setprecision(11) << aver/(double)(a.size()-1);
};