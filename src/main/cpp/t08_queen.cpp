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
bool checkQueen(int i, int j, int n) {
    if (n!=i)
        return (board[n] != j) && ((i-n) != (j - board[n])) && ((i-n) != (board[n] - j)) && checkQueen(i,j,n+1);
    else {
        return true;
    }
}

int putQueen(int n, int i, int j) {
    if (i == n) {
        return 1;
    } else {
        if (j<n) {
            int l = 0;
            if (checkQueen(i,j,0)) {
                board[i]=j;
                l = putQueen(n,i+1,0);
            }
            return putQueen(n,i,j+1) + l;
        }
        else return 0;
    }
}
int t08_queen(){
    int n;
    cin >> n;
    cout << putQueen(n, 0, 0);
    return 0;
}
