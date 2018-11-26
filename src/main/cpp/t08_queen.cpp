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

int n, a[10][10], ans = 0;

void giveItATry(int x, int y) {
    bool ok = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == 1)
                if (i == x || j == y || abs(x - i) == abs(y - j))
                    ok = false;
    if (ok) {
        if (y == n - 1)
            ans++;
        else {
            a[x][y] = 1;
            for (int i = 0; i < n; i++)
                giveItATry(i, y + 1);
        }
    }
    a[x][y] = 0;
}

int t08_queen(){
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] == 0;
    for (int i = 0; i < n; i++)
        giveItATry(i, 0);
    cout << ans;
    return 0;
}
