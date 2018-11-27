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
int chess_board[10];

bool check(int i, int j, int k) {
    if (k==i) return true;
    else return ((i-k) != (j-chess_board[k])) && (chess_board[k] != j) && check(i, j, k + 1) && ((i-k) != (chess_board[k]-j));
}

int put_queen(int n, int i, int j) {
    if (i==n) return 1;
    else {
        if (j<n) {
            int r = 0;
            if (check(i, j, 0)) {
                chess_board[i]=j;
                r=put_queen(n, i + 1, 0);
            }
            return r+put_queen(n, i, j + 1);
        }
        else return 0;
    }
}
int t08_queen(){
    int N;
    cin>>N;
    cout<<put_queen(N, 0, 0);
    return 0;
}
