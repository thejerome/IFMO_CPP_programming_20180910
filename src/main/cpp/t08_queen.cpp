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

const int ch = 10;
int chess_board[ch];
	bool check(int i, int j, int k) {
		if (k == i) return true;
		else
			return ((i - k) != (j - chess_board[k])) and (chess_board[k] != j) and check(i, j, k + 1) and ((i - k) != (chess_board[k] - j));
}
int queen_place(int n, int i, int j) {
	if (i == n) return 1;
	else {
		if (j < n) {
			int kek = 0;
			if (check(i, j, 0)) {
				chess_board[i] = j;
				kek = queen_place(n, i + 1, 0);
			}
			return kek + queen_place(n, i, j + 1);
		}
		else return 0;
	}
}
int t08_queen() {
	int N;
	cin >> N;
	cout << queen_place(N, 0, 0);
	return 0;
}