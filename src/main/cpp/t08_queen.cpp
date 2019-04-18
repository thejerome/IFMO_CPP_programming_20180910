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

int board[10];
bool check(int r, int q, int k)
{
    if (k == r) return true;
    else return ((r - k) != (q - board[k])) & (board[k] != q) & check(r, q, k + 1) & ((r - k) != (board[k] - q));
}

int HowMany(int n, int r, int q)
{
    if (r == n) return 1;
    else
        if (q < n) {
            int cur_step = 0;
            if (check(r, q, 0)) {
                board[r] = q;
                cur_step = HowMany(n, r + 1, 0);
            }
            return cur_step + HowMany(n, r, q + 1);
        }
        else return 0;

}

int t08_queen(){
    int n;
    cin >> n;

    cout << HowMany(n, 0, 0);

    return 0;
}
