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

int chess[10];

bool check_position (int i, int j, int k)
{
    if (k == i) return true;
    else
    {
        return (chess[k] != j) && ((i - k) != (chess [k] - j)) && ((i - k) != (j - chess [k]))  && check_position (i, j, k + 1);
    }
}
int execution (int i, int j, int k)
{
    if (j == i)
    {
        return 1;
    }
    else
    {
        if (k < i)
        {
            int l = 0;

            if (check_position (j, k, 0))
            {
                chess [j] = k;
                l = execution (i, j + 1, 0);
            }
            return l + execution (i, j, k + 1);
        }
        else return 0;
    }
}

int t08_queen()
{
    int N;

    cin >> N;

    cout << execution (N, 0, 0);

    return 0;
}
