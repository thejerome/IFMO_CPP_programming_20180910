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

void swap(int *a, int i, int j)
{
    int s = a[i];
    a[i] = a[j];
    a[j] = s;
}
bool Permutations(int *a, int n)
{
    int j = n - 2;
    while (j != -1 and a[j] >= a[j + 1]){
        j--;
    }
    if (j == -1) {
        return false;
    }
    int k = n - 1;
    while (a[j] >= a[k]){
        k--;
    }
    swap(a, j, k);
    int l = j + 1, r = n - 1;
    while (l<r) {
        swap(a, l++, r--);
    }
    return true;
}
bool if_i_can_put_here(int *positions, int size) {
    bool if_was_break = false;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((abs(i - j) == abs(positions[i] - positions[j])) or (positions[i] == positions[j])) {
                if_was_break = true;
                break;
            }
        }
        if (if_was_break) {
            if_was_break = false;
            return if_was_break;
        }
    }
    return true;
}

int t08_queen() {
    int n, k;
    cin >> n;
    int a[n];
    k = 0;
    for (int i = 0; i < n; i++)
        a[i] = i;
    if(if_i_can_put_here(a, n)){
        k += 1;
    }
    while (Permutations(a, n))
        if (if_i_can_put_here(a, n)){
            k += 1;
        }

    cout << k;
    return 0;
}
