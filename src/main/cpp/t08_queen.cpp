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

bool canBePlaced(int* queenPosition, int columnNumber, int a) {	
 	for (int i = 0; i < columnNumber; i++) {
 		if (queenPosition[i] == a || abs(a - queenPosition[i]) == abs(columnNumber - i)) {
 			return false;
 		}
 	}

 	return true;
 }

 int countArrangements(int* queenPosition, int columnNumber, int boardSize) {
 	if (boardSize == columnNumber) {
 		return 1;
 	}

 	int sum = 0;
 	for (int i = 0; i < boardSize; i++) {
 		if (canBePlaced(queenPosition, columnNumber, i)) {
 			queenPosition[columnNumber] = i;
 			sum += countArrangements(queenPosition, columnNumber+1, boardSize);
 		} 
 	}

 	return sum;
 }

 int t08_queen() {
 	int n;

 	cin >> n;

 	int queenPosition[n];

 	for (int i = 0; i < n; i++) {
 		queenPosition[i] = 0;
 	}
 	cout << countArrangements(queenPosition, 0, n);

    return 0;
}
