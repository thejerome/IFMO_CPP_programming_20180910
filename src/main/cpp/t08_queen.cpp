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

/* int chessboard[10]; // each position in an array represents a column, its value represents a row

bool check_attack(int i, int j, int k)
{
    if (k == i) { return true; }
    else return chessboard[k] != j 
                && (i-k) != (j-chessboard[k]) 
                && (i-k) != (chessboard[k]-j) 
                && check_attack(i, j, k+1);
}

int place_queen(int n, int i, int j) {
    if (i == n) { return 1; }
        if (j < n) 
        {
            int pos = 0;
            if (check_attack(i, j, 0)) {
                chessboard[i] = j;
                pos = place_queen(n, i + 1, 0); // try putting it into each row in this column
            }
            return pos + place_queen(n, i, j + 1);
        } 
        else return 0;
}*/

bool check_attack(int* board, int queen_number)
{

    return
}

int add_queen(int* board, int n, int queen_number, int row)
{
    long positions = 0;

    if (n == queen_number+1) // leaves on the tree
    {
        if (check_attack()) { return 1;}
        else { return 0; }
    }

    for (int attempt = 0; attempt < n; attempt++) // try each row...
    {
        board[queen_number]=row;
        positions+=add_queen(board, n, queen_number+1, attempt); // put queens in next columns
    }


}

int t08_queen(){
    int n, *board;
    cin >> n;
    board = (int*) calloc(n, sizeof(int));
    cout << add_queen(board, n, 0, 0);
    /*int n;
    cin >> n;
    cout << place_queen(n , 0, 0);*/
    return 0;
}
