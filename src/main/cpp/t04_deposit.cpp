//Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
//Формат входных данных
//        Программа получает на вход целые числа P, X, Y, K .
//Формат выходных данных
//        Программа должна вывести два числа: величину вклада через K лет в рублях и копейках. Дробное число копеек по истечение года отбрасывается. Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
//Примечание
//        В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.
//Sample Input:
//
//12
//179
//0
//5
//Sample Output:
//
//315 43

#include "t04_deposit.h"
#include <iostream>
#include <cmath>

using namespace std;

int t04_deposit() {
    double p, x, y, k, i = 0;
    cin >> p >> x >> y >> k;
    p = p + 100;
    while (i != k) {
        y = y + x * 100;
        y = (y * p) /100;
        x = y / 100;
        x = floor(x);
        y = y - x * 100;
        y = floor(y);
        i++;
    }
    cout << x << " " << y;
};