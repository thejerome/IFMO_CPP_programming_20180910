//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//        Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Подсказка
//        Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. 
// Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), 
// то такой вариант даже не стоит рассматривать. 
// Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//Sample Input:
//
//8
//Sample Output:
//
//92

#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 10;
int n, cnt;
bool row[SIZE], d_dn[2*SIZE], d_up[2*SIZE]; //true is for filled, false is for empty

bool can_place (int r, int c)
{
    return !row[r] && !d_dn[r - c + n - 1] && !d_up[r + c];
}

void next (int c)
{
    if (c == n)
        cnt++;
    else
        for (int r = 0; r < n; r++)
            if (can_place (r, c)) {
                row[r] = d_dn[r - c + n - 1] = d_up[r + c] = true;

                next (c + 1);

                row[r] = d_dn[r - c + n - 1] = d_up[r + c] = false;
            }
}

int t08_queen()
{
    cin >> n;

    next(0);

    cout << cnt;
    return 0;
}
