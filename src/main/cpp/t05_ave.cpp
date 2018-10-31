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

using namespace std;

int t05_ave() {
    double counter, sum, buff;
    cin >> buff;
    counter = 0;
    sum = 0;
    while(buff != 0){
        sum = sum + buff;
	cin >> buff;
	counter = counter + 1;
    }
    cout << std::fixed << std::setprecision(11) << sum / counter;
};
