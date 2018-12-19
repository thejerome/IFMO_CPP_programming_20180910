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
using namespace std;


bool check_attack(int* board, int queen_number, int n)
{

    if (queen_number == 0) return false; // nobody attacks the first queen

    if(queen_number == n-1) {
        for (int i = queen_number - 1; i > 0; i--) // request a check for attacks for all queens to the left of me
        {
            if (check_attack(board, i, n)) { return true; }
        }
    }

    for (int i = queen_number-1; i > -1; i--){
        if (board[i] == board[queen_number]) return true; // horizontal attack
        if (abs(board[i]-board[queen_number]) == queen_number-i) return true; // diagonal attack
    }
    return false;
}

long add_queen(int* board, int n, int queen_number, int row)
{
    long positions = 0; // possibilities that we need to count
    int* me = board+queen_number;
    *me=row;

    for (int i = queen_number-1; i > -1; i--){
        if (board[i] == board[queen_number]) return 0; // horizontal attack
        if (abs(board[i]-board[queen_number]) == queen_number-i) return 0; // diagonal attack
    }


    if (n == queen_number+1) // leaves on the tree
    {
        if (!check_attack(board, queen_number, n)) { /*cout << "no attacks"<< endl;*/ return 1;}
        else { return 0; }
    }

    for (int attempt = 0; attempt < n; attempt++) // try each row...
    {
        positions+=add_queen(board, n, queen_number+1, attempt); // put queens in next columns

    }

    return positions;
}

int t08_queen(){
    int n, *board;
    cin >> n;
    board = (int*) calloc(n, sizeof(int));
    long res = 0;

    for(int i = 0; i < n; i++) // all placements for first queen
    {
        res+=add_queen(board, n, 0, i);
    }

    cout << res;
    return 0;
}
