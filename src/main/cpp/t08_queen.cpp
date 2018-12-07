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
bool check(int i, int j, int k) 
{
	if (k == i) return true;
	else return ((i - k) != (j - board[k])) && (board[k] != j) && check(i, j, k + 1) && ((i - k) != (board[k] - j));
}
int HowMany(int n, int i, int j) 
{
	if (i == n) return 1;
	else {
		if (j < n) {
			int r = 0;
			if (check(i, j, 0)) {
				board[i] = j;
				r = HowMany(n, i + 1, 0);
			}
			return r + HowMany(n, i, j + 1);
		}
		else return 0;
	}
}
int t08_queen(){
	int n;
	cin >> n;
	cout << HowMany(n, 0, 0);
	return 0;
}
