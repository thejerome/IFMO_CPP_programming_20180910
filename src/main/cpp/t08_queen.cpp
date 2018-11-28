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

bool QueenMayBeHere(int *queens, int column, int line) {
    for (int q=0; q < column; q++) {
        if (queens[q] == line ||
        column - q == abs(queens[q] - line))
            return false;
    }
    return true;
}

int count_arrangements(int table_size, int *queens, int next_column, int line) {
    if (table_size == next_column)
        return 1;
    if (line < table_size) {
        int cnt = 0;
        if (QueenMayBeHere(queens, next_column, line)) {
            queens[next_column] = line;
            cnt = count_arrangements(table_size, queens, next_column+1, 0);
        }
        return cnt + count_arrangements(table_size, queens, next_column, line+1);
    }
    else return 0;
}

int t08_queen(){
    int n;
    cin>>n;
    int queens[n];
    for (int i=0; i < n; i++) {
        queens[i] = 32000;
    }
    cout<<count_arrangements(n, queens, 0, 0);
    return 0;
}
