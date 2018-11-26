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

void queen(int x, int y, int* a, int n, int* ans) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (*(a + i * n + j) == 1) {
                if ((x != i) && (y != j) && (abs(x - i) != abs(y - j)))
                    k++;
            }
        }
    }

    if (k == y) {
        if (y == n - 1)
            (*ans)++;

        *(a + x * n + y) = 1;
        if (y < n - 1) {
            for (int i = 0; i < n; i++)
                queen(i, y + 1, a, n, ans);
        }
        *(a + x * n + y) = 0;
    }

}

int t08_queen(){
    int n, ans = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 0;

    for (int i = 0; i < n; i++)
        queen(i, 0, (int*) a, n, &ans);

    cout << ans;
}
