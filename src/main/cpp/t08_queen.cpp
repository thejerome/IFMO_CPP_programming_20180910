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
const int size = 10;
    int board[size] [size];
    int counts_result = 0;
    int attemptPlace(int a, int b)
{
    int i;
    for (i = 0; i < a; ++i)
    {
        if (board[i][b])
        {
            return 0;
        }
    }
    for (i = 1; i <= a && b-i >= 0; ++i)
    {
        if (board[a-i][b-i])
        {
            return 0;
        }
    }
    for (i = 1; i <= a && b+i < size; ++i)
    {
        if (board[a-i][b+i])
        {
            return 0;
        }
    }
    return 1;
}
void attemptQueen(int a, int size)
{
    if (a == size)
    {
        ++counts_result;
    }
    int i;
    for (i = 0; i < size; ++i)
    {
        if (
                attemptPlace(a, i))
        {
            board[a][i] = 1;

            attemptQueen(a+1,size);
            board[a][i] = 0;
        }
    }
}

int t08_queen(){
    int size2=0;
    cin >> size2;
    attemptQueen(0,size2);
    cout << counts_result;
    return 0;
}
