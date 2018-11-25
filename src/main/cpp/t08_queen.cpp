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

int desk[10];

bool can_place(int i, int j, int k) {
    if (k == i) {
        return true;
    }
    else {
        return ((desk[k] != j) && ((i - k) != (j - desk[k])) && ((i - k) != (desk[k] - j)) && (can_place(i, j, k + 1)));
    }
}

int calc_pos(int n, int i, int j) {
    if (i == n) {
        return 1;
    } else {
        if (j < n) {
            int counter = 0;
            if (can_place(i, j, 0)) {
                desk[i] = j;
                counter = calc_pos(n, i + 1, 0);
            }
            return counter + calc_pos(n, i, j + 1);
        } else {
            return 0;
	}
    }
}

int t08_queen() {
    int n;
    cin >> n;
    cout << calc_pos(n, 0, 0);
    return 0;
}
