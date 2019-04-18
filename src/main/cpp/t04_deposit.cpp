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
    //Тесты не учитывают варианты, когда кол-во копеек больше 100
    int p, X, Y, K, i, s;
    cin >> p >> X >> Y >> K;
    
    i = 0;
    X += Y / 100;
    Y %= 100;

    s = 100 * X + Y;
    while (i < K)
    {
        s *= 1 + 0.01*p;
        i++;
    }
    X = s / 100;
    Y = s % 100;
    cout << X << ' ' << Y;
    return 0;
};