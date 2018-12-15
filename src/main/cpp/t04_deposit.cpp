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

    double p,x,y,k,b;
    cin >> p >> x >> y >> k;
    b = x+y/100.0;
    for (int i=0; i<k; i++) {
        b *= 1.0+p/100.0;
        if (i != k-1) b = (floor(b*100))/100.0;
    }
    cout << floor(b) << ' ' << floor((b - floor(b))*100.0) << endl;
};